#ifndef DRV_SPI_H_
#define DRV_SPI_H_

#include <stdint.h>
#include "drv_common.h"
#include "drv_gpio.h"
#if defined (DRV_BSP_H7)
#include "drv_pin_h7.h"
#endif
#include <dev/spi.h>

#define CONFIG_SPI_ATTACH_CS_NUM   4

struct up_spi_dev_s
{
    struct spi_dev_s dev;   /* Generic UART device */

    uint8_t id;
    uint8_t pin_ncs;
    uint8_t pin_sck;
    uint8_t pin_miso;
    uint8_t pin_mosi;
    const uint32_t devid[CONFIG_SPI_ATTACH_CS_NUM];
    const struct {
        GPIO_TypeDef *port;   
        uint16_t pin;
    } devcs[CONFIG_SPI_ATTACH_CS_NUM];

    SPI_HandleTypeDef hspi;
};

extern const struct spi_ops_s g_spi_ops;

#endif
