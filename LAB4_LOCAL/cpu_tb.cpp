#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vcpu.h"
#include "vbuddy.cpp"

#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env) {
    int i;
    int clk;
 
    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vcpu* top = new Vcpu;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("cpu.vcd");

    // init vbuddy
    if (vbdOpen()!=1) return (-1);
    vbdHeader("Lab 4: Reduced RISC-V");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 1;

    // run simulation for many clock cycles
    for (i=0; i<10000; i++) {

        // dump variables into VCD file and toggle clock
        for (clk=0; clk<2; clk++) {
            // add conditions to skip a clock cycle?
            tfp->dump (2*i+clk);
            top->clk = !top->clk;
            top->eval ();
        }

        // change input stimuli
        top->rst = (i<2);
        // top->rst = (i<2) | (i == 25);
        // top->en = (i>4) & ((i<14) | (i>16));

        // ++++ Send count value to Vbuddy
        // Output count values to 7-seg display every cycle.
        vbdHex(4, (int(top->a0) >> 16) & 0xF);
        vbdHex(3, (int(top->a0) >> 8) & 0xF);
        vbdHex(2, (int(top->a0) >> 4) & 0xF);
        vbdHex(1, (int(top->a0)) & 0xF);
        vbdCycle(i+1);
        // ---- end of Vbuddy output section

        if (Verilated::gotFinish())   exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}