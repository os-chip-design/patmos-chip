#include <defs.h>
#include <stub.c>
#include "../wb-defs.h" // User defined wb addresses.
void main()
{
        
    reg_wb_enable = 1;
    // Configure some pins for Patmos gpio
    reg_mprj_io_3 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_4 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_5 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_6 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_7 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_8 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_9 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    reg_mprj_io_10 =  GPIO_MODE_USER_STD_BIDIRECTIONAL;
    // Configure 1 pin for management
    reg_mprj_io_37 =  GPIO_MODE_MGMT_STD_OUTPUT;

    reg_mprj_xfer = 1;
    while (reg_mprj_xfer == 1); // Wait for configuration to become active
    // start program
    reg_wb_rom_dataEven = 0x5c;
    reg_wb_rom_addrEven = 0x0;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x87ce0000;
    reg_wb_rom_addrOdd = 0x0;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0xf00a0000;
    reg_wb_rom_addrEven = 0x1;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x87d00000;
    reg_wb_rom_addrOdd = 0x1;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0xf00b0000;
    reg_wb_rom_addrEven = 0x2;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x87d20000;
    reg_wb_rom_addrOdd = 0x2;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0xf00c0000;
    reg_wb_rom_addrEven = 0x3;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x1400ff;
    reg_wb_rom_addrOdd = 0x3;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2020000;
    reg_wb_rom_addrEven = 0x4;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2827080;
    reg_wb_rom_addrOdd = 0x4;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0x5;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0x5;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2021030;
    reg_wb_rom_addrEven = 0x6;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0xcfffffc;
    reg_wb_rom_addrOdd = 0x6;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0x7;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0x7;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x2c29500;
    reg_wb_rom_addrEven = 0x8;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x2c28080;
    reg_wb_rom_addrOdd = 0x8;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x400000;
    reg_wb_rom_addrEven = 0x9;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x400000;
    reg_wb_rom_addrOdd = 0x9;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x421001;
    reg_wb_rom_addrEven = 0xa;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x20200b3;
    reg_wb_rom_addrOdd = 0xa;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0xcfffffb;
    reg_wb_rom_addrEven = 0xb;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x0;
    reg_wb_rom_addrOdd = 0xb;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x0;
    reg_wb_rom_addrEven = 0xc;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x0;
    reg_wb_rom_addrOdd = 0xc;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    reg_wb_rom_dataEven = 0x0;
    reg_wb_rom_addrEven = 0xd;
    reg_wb_rom_enEven = 0x1;
    reg_wb_rom_enEven = 0x0;
    reg_wb_rom_dataOdd = 0x0;
    reg_wb_rom_addrOdd = 0xd;
    reg_wb_rom_enOdd = 0x1;
    reg_wb_rom_enOdd = 0x0;
    // end program
    reg_wb_bootAddr = 4097; // Change pc to match first entry in writeable rom
    reg_mprj_datah = 1 << 5; // Tell testbench that Patmos has been programmed and will now be reset
    reg_wb_reset = 0x0; // Set patmos reset low
}
