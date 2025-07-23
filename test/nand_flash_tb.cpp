#include <systemc>
#include "nand_flash.hpp"

using namespace sc_core;  // 👈 Add this

int sc_main(int argc, char* argv[]) {
    NandFlash nand("nand");
    sc_start();  // Now recognized
    return 0;
}

