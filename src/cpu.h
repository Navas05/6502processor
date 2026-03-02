//
// Created by alvar on 02/03/2026.
//

#ifndef INC_6502_CPU_H
#define INC_6502_CPU_H

#include <cstdint>

#include "memory.h"

class Cpu {
public:
    explicit Cpu(Memory memory);
private:
    Memory memory;
    uint16_t pc;
};


#endif //INC_6502_CPU_H