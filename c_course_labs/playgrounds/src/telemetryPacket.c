#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

struct TelemetryPacket {
    uint8_t node_id;
    uint32_t timestamp;
    uint16_t sensor_read;
    uint8_t status_flag;
};

int main(void)
{
    struct TelemetryPacket telPacket;
    printf("sizeof(uint8_t) is %zu bytes\n", sizeof(telPacket.node_id));
    printf("sizeof(uint16_t) is %zu bytes\n", sizeof(telPacket.sensor_read));
    printf("sizeof(uint32_t) is %zu bytes\n", sizeof(telPacket.timestamp));
    printf("offsetof(uint8_t) is %zu bytes\n", offsetof(struct TelemetryPacket, node_id));
    printf("offsetof(uint16_t) is %zu bytes\n", offsetof(struct TelemetryPacket,sensor_read));
    printf("offsetof(uint32_t) is %zu bytes\n", offsetof(struct TelemetryPacket,timestamp));


    /*
        --- 32-Bit is 4 bytes ---
        --- 64-Bit is 8 bytes ---

        uint8_t  is 1 bytes
        uint16_t is 2 bytes
        uint32_t is 4 bytes

        Assuming it is 32-bit
        1 + 3 padding
        4
        2 + 1 + 1 padding

        4 + 4 + 4 = 3 * 4 = 12 bytes ouch, my bad !!

        Assuming it is 64-bit

    */

    printf("struct size is %zu bytes\n", sizeof(telPacket));
    return 0;
}