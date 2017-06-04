#ifndef MODULE
#define MODULE

#include <iostream>
#include <vector>
#include <string>
#include <cstdint>

class Module{
public:
    // constructor
    Module(int init_page_size = 1); 
    // memory operator
    int grow_memory(int page_size = 1); // grow memory (unit: page)
    int current_memory(); 
    // load & store => FIXME: support every instruction 
    uint32_t i32_load(int loc);      // fetch data which start from loc
    uint32_t i32_load8_u(int loc);   // unsigned (load 1 byte and extend) i8 to i32 
    uint32_t i32_load16_u(int loc);  // unsigned (load 2 byte and extend) i16 to i32
    uint64_t i64_load(int loc);
    uint64_t i64_load8_u(int loc);
    uint64_t i64_load16_u(int loc);
    uint64_t i64_load32_u(int loc);
    int i32_store(uint32_t value);   // store value into linear memory
    int i64_store(uint64_t value);
private:
    std::vector<char> *linear_m; // Each module deploy one linear memory
    int page_counter;   // record how many page (64KB) usage 
    int current_loc;    // record latest(current) elements location (in this vector)
};

#endif