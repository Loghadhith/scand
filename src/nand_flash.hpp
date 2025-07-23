#pragma once

#include <systemc>

SC_MODULE(NandFlash) {
    SC_CTOR(NandFlash) {
        SC_THREAD(run);
    }

    void run();
};

