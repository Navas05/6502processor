//
// Created by alvar on 02/03/2026.
//

#ifndef INC_6502_MEMORY_H
#define INC_6502_MEMORY_H

#include <array>
#include <cstdint>

constexpr uint16_t MEMORY_SIZE = 65536;

class Memory {
public:
    Memory();
    uint8_t read_byte(uint16_t address);
    void write_byte(uint16_t address, uint8_t value);
private:
    std::array<uint8_t, MEMORY_SIZE> arena{};
};


#endif //INC_6502_MEMORY_H