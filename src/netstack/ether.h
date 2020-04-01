/**
 * ether.h
 *  reference: https://github.com/vipinpv85/GTP_PKT_DECODE
 */
#ifndef __EHTER_H_
#define __EHTER_H_

#include <rte_common.h>
#include <rte_ether.h>

#define MAX_INTERFACES 10

typedef struct interface_s {
    uint8_t iface_num;
    unsigned char hw_addr[RTE_ETHER_ADDR_LEN];
    uint32_t ipv4_addr;
    struct interface_s *next;
} interface_t;

/**
 * @param address e.g. {"192", "168", "0", "1"}
 */
uint32_t int_addr_from_char(unsigned char *address, uint8_t order);

void add_interface(interface_t *iface);
uint8_t get_interface_mac(uint8_t iface_num, uint8_t *mac);
// void set_interface_hw(uint8_t *mac_addr, uint8_t interface);

#endif /* __EHTER_H_ */