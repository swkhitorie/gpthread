#ifndef STM32H7xx_HAL_CONF_H
#define STM32H7xx_HAL_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

#define HAL_MODULE_ENABLED

/* #define HAL_ADC_MODULE_ENABLED   */
/* #define HAL_FDCAN_MODULE_ENABLED   */
/* #define HAL_FMAC_MODULE_ENABLED   */
/* #define HAL_CEC_MODULE_ENABLED   */
/* #define HAL_COMP_MODULE_ENABLED   */
/* #define HAL_CORDIC_MODULE_ENABLED   */
/* #define HAL_CRC_MODULE_ENABLED   */
/* #define HAL_CRYP_MODULE_ENABLED   */
/* #define HAL_DAC_MODULE_ENABLED   */
/* #define HAL_DCMI_MODULE_ENABLED   */
/* #define HAL_DMA2D_MODULE_ENABLED   */
/* #define HAL_ETH_MODULE_ENABLED   */
/* #define HAL_ETH_LEGACY_MODULE_ENABLED   */
/* #define HAL_NAND_MODULE_ENABLED   */
/* #define HAL_NOR_MODULE_ENABLED   */
/* #define HAL_OTFDEC_MODULE_ENABLED   */
/* #define HAL_SRAM_MODULE_ENABLED   */
/* #define HAL_SDRAM_MODULE_ENABLED   */
/* #define HAL_HASH_MODULE_ENABLED   */
/* #define HAL_HRTIM_MODULE_ENABLED   */
/* #define HAL_HSEM_MODULE_ENABLED   */
/* #define HAL_GFXMMU_MODULE_ENABLED   */
/* #define HAL_JPEG_MODULE_ENABLED   */
/* #define HAL_OPAMP_MODULE_ENABLED   */
/* #define HAL_OSPI_MODULE_ENABLED   */
/* #define HAL_XSPI_MODULE_ENABLED   */
/* #define HAL_I2S_MODULE_ENABLED   */
/* #define HAL_SMBUS_MODULE_ENABLED   */
#define HAL_IWDG_MODULE_ENABLED
/* #define HAL_LPTIM_MODULE_ENABLED   */
/* #define HAL_LTDC_MODULE_ENABLED   */
/* #define HAL_XSPI_MODULE_ENABLED   */
/* #define HAL_RAMECC_MODULE_ENABLED   */
/* #define HAL_RNG_MODULE_ENABLED   */
/* #define HAL_RTC_MODULE_ENABLED   */
/* #define HAL_SAI_MODULE_ENABLED   */
/* #define HAL_SD_MODULE_ENABLED   */
/* #define HAL_MMC_MODULE_ENABLED   */
/* #define HAL_SPDIFRX_MODULE_ENABLED   */
#define HAL_SPI_MODULE_ENABLED
/* #define HAL_SWPMI_MODULE_ENABLED   */
/* #define HAL_TIM_MODULE_ENABLED   */
#define HAL_UART_MODULE_ENABLED
#define HAL_USART_MODULE_ENABLED
/* #define HAL_IRDA_MODULE_ENABLED   */
/* #define HAL_SMARTCARD_MODULE_ENABLED   */
/* #define HAL_WWDG_MODULE_ENABLED   */
/* #define HAL_PCD_MODULE_ENABLED   */
/* #define HAL_HCD_MODULE_ENABLED   */
/* #define HAL_DFSDM_MODULE_ENABLED   */
/* #define HAL_DSI_MODULE_ENABLED   */
/* #define HAL_JPEG_MODULE_ENABLED   */
/* #define HAL_MDIOS_MODULE_ENABLED   */
/* #define HAL_PSSI_MODULE_ENABLED   */
/* #define HAL_DTS_MODULE_ENABLED   */
#define HAL_GPIO_MODULE_ENABLED
#define HAL_DMA_MODULE_ENABLED
#define HAL_MDMA_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_EXTI_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_HSEM_MODULE_ENABLED

#if !defined  (HSE_VALUE)
#define HSE_VALUE    (26000000UL)
#endif 

#if !defined  (HSE_STARTUP_TIMEOUT)
#define HSE_STARTUP_TIMEOUT    (100UL)   /*!< Time out for HSE start up, in ms */
#endif

#if !defined  (CSI_VALUE)
#define CSI_VALUE    (4000000UL) /*!< Value of the Internal oscillator in Hz*/
#endif


#if !defined  (HSI_VALUE)
#define HSI_VALUE    (64000000UL) /*!< Value of the Internal oscillator in Hz*/
#endif

#if !defined  (LSE_VALUE)
#define LSE_VALUE    (32768UL) /*!< Value of the External oscillator in Hz*/
#endif

#if !defined  (LSE_STARTUP_TIMEOUT)
#define LSE_STARTUP_TIMEOUT    (5000UL)   /*!< Time out for LSE start up, in ms */
#endif

#if !defined  (LSI_VALUE)
#define LSI_VALUE  (32000UL)              /*!< LSI Typical Value in Hz*/
#endif

#if !defined  (EXTERNAL_CLOCK_VALUE)
#define EXTERNAL_CLOCK_VALUE    12288000UL /*!< Value of the External clock in Hz*/
#endif

/* Tip: To avoid modifying this file each time you need to use different HSE,
   ===  you can define the HSE value in your toolchain compiler preprocessor. */

/* ########################### System Configuration ######################### */
#define  VDD_VALUE                    (3300UL)
#define  TICK_INT_PRIORITY            (15UL)
#define  USE_RTOS                     0
#define  USE_SD_TRANSCEIVER           0U
#define  USE_SPI_CRC	              0U

#define  USE_HAL_ADC_REGISTER_CALLBACKS     0U /* ADC register callback disabled     */
#define  USE_HAL_CEC_REGISTER_CALLBACKS     0U /* CEC register callback disabled     */
#define  USE_HAL_COMP_REGISTER_CALLBACKS    0U /* COMP register callback disabled    */
#define  USE_HAL_CORDIC_REGISTER_CALLBACKS  0U /* CORDIC register callback disabled  */
#define  USE_HAL_CRYP_REGISTER_CALLBACKS    0U /* CRYP register callback disabled    */
#define  USE_HAL_DAC_REGISTER_CALLBACKS     0U /* DAC register callback disabled     */
#define  USE_HAL_DCMI_REGISTER_CALLBACKS    0U /* DCMI register callback disabled    */
#define  USE_HAL_DFSDM_REGISTER_CALLBACKS   0U /* DFSDM register callback disabled   */
#define  USE_HAL_DMA2D_REGISTER_CALLBACKS   0U /* DMA2D register callback disabled   */
#define  USE_HAL_DSI_REGISTER_CALLBACKS     0U /* DSI register callback disabled     */
#define  USE_HAL_DTS_REGISTER_CALLBACKS     0U /* DTS register callback disabled     */
#define  USE_HAL_ETH_REGISTER_CALLBACKS     0U /* ETH register callback disabled     */
#define  USE_HAL_FDCAN_REGISTER_CALLBACKS   0U /* FDCAN register callback disabled   */
#define  USE_HAL_FMAC_REGISTER_CALLBACKS    0U /* FMAC register callback disabled  */
#define  USE_HAL_NAND_REGISTER_CALLBACKS    0U /* NAND register callback disabled    */
#define  USE_HAL_NOR_REGISTER_CALLBACKS     0U /* NOR register callback disabled     */
#define  USE_HAL_SDRAM_REGISTER_CALLBACKS   0U /* SDRAM register callback disabled   */
#define  USE_HAL_SRAM_REGISTER_CALLBACKS    0U /* SRAM register callback disabled    */
#define  USE_HAL_HASH_REGISTER_CALLBACKS    0U /* HASH register callback disabled    */
#define  USE_HAL_HCD_REGISTER_CALLBACKS     0U /* HCD register callback disabled     */
#define  USE_HAL_GFXMMU_REGISTER_CALLBACKS  0U /* GFXMMU register callback disabled  */
#define  USE_HAL_HRTIM_REGISTER_CALLBACKS   0U /* HRTIM register callback disabled   */
#define  USE_HAL_I2C_REGISTER_CALLBACKS     0U /* I2C register callback disabled     */
#define  USE_HAL_I2S_REGISTER_CALLBACKS     0U /* I2S register callback disabled     */
#define  USE_HAL_IRDA_REGISTER_CALLBACKS    0U /* IRDA register callback disabled    */
#define  USE_HAL_JPEG_REGISTER_CALLBACKS    0U /* JPEG register callback disabled    */
#define  USE_HAL_LPTIM_REGISTER_CALLBACKS   0U /* LPTIM register callback disabled   */
#define  USE_HAL_LTDC_REGISTER_CALLBACKS    0U /* LTDC register callback disabled    */
#define  USE_HAL_MDIOS_REGISTER_CALLBACKS   0U /* MDIO register callback disabled    */
#define  USE_HAL_MMC_REGISTER_CALLBACKS     0U /* MMC register callback disabled     */
#define  USE_HAL_OPAMP_REGISTER_CALLBACKS   0U /* MDIO register callback disabled    */
#define  USE_HAL_OSPI_REGISTER_CALLBACKS    0U /* OSPI register callback disabled    */
#define  USE_HAL_OTFDEC_REGISTER_CALLBACKS  0U /* OTFDEC register callback disabled  */
#define  USE_HAL_PCD_REGISTER_CALLBACKS     0U /* PCD register callback disabled     */
#define  USE_HAL_QSPI_REGISTER_CALLBACKS    0U /* QSPI register callback disabled    */
#define  USE_HAL_RNG_REGISTER_CALLBACKS     0U /* RNG register callback disabled     */
#define  USE_HAL_RTC_REGISTER_CALLBACKS     0U /* RTC register callback disabled     */
#define  USE_HAL_SAI_REGISTER_CALLBACKS     0U /* SAI register callback disabled     */
#define  USE_HAL_SD_REGISTER_CALLBACKS      0U /* SD register callback disabled      */
#define  USE_HAL_SMARTCARD_REGISTER_CALLBACKS  0U /* SMARTCARD register callback disabled */
#define  USE_HAL_SPDIFRX_REGISTER_CALLBACKS 0U /* SPDIFRX register callback disabled */
#define  USE_HAL_SMBUS_REGISTER_CALLBACKS   0U /* SMBUS register callback disabled   */
#define  USE_HAL_SPI_REGISTER_CALLBACKS     0U /* SPI register callback disabled     */
#define  USE_HAL_SWPMI_REGISTER_CALLBACKS   0U /* SWPMI register callback disabled   */
#define  USE_HAL_TIM_REGISTER_CALLBACKS     0U /* TIM register callback disabled     */
#define  USE_HAL_UART_REGISTER_CALLBACKS    0U /* UART register callback disabled    */
#define  USE_HAL_USART_REGISTER_CALLBACKS   0U /* USART register callback disabled   */
#define  USE_HAL_WWDG_REGISTER_CALLBACKS    0U /* WWDG register callback disabled    */

/* ########################### Ethernet Configuration ######################### */
#define ETH_TX_DESC_CNT         4U
#define ETH_RX_DESC_CNT         4U

#define ETH_MAC_ADDR0    (0x02UL)
#define ETH_MAC_ADDR1    (0x00UL)
#define ETH_MAC_ADDR2    (0x00UL)
#define ETH_MAC_ADDR3    (0x00UL)
#define ETH_MAC_ADDR4    (0x00UL)
#define ETH_MAC_ADDR5    (0x00UL)

/* ########################## Assert Selection ############################## */
/* #define USE_FULL_ASSERT    1U */

/* Includes ------------------------------------------------------------------*/

#ifdef HAL_RCC_MODULE_ENABLED
#include "stm32h7xx_hal_rcc.h"
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
#include "stm32h7xx_hal_gpio.h"
#endif

#ifdef HAL_DMA_MODULE_ENABLED
#include "stm32h7xx_hal_dma.h"
#endif

#ifdef HAL_MDMA_MODULE_ENABLED
#include "stm32h7xx_hal_mdma.h"
#endif

#ifdef HAL_HASH_MODULE_ENABLED
#include "stm32h7xx_hal_hash.h"
#endif

#ifdef HAL_DCMI_MODULE_ENABLED
#include "stm32h7xx_hal_dcmi.h"
#endif

#ifdef HAL_DMA2D_MODULE_ENABLED
#include "stm32h7xx_hal_dma2d.h"
#endif

#ifdef HAL_DSI_MODULE_ENABLED
#include "stm32h7xx_hal_dsi.h"
#endif

#ifdef HAL_DFSDM_MODULE_ENABLED
#include "stm32h7xx_hal_dfsdm.h"
#endif

#ifdef HAL_DTS_MODULE_ENABLED
#include "stm32h7xx_hal_dts.h"
#endif

#ifdef HAL_ETH_MODULE_ENABLED
#include "stm32h7xx_hal_eth.h"
#endif

#ifdef HAL_ETH_LEGACY_MODULE_ENABLED
#include "stm32h7xx_hal_eth_legacy.h"
#endif

#ifdef HAL_EXTI_MODULE_ENABLED
#include "stm32h7xx_hal_exti.h"
#endif

#ifdef HAL_CORTEX_MODULE_ENABLED
#include "stm32h7xx_hal_cortex.h"
#endif

#ifdef HAL_ADC_MODULE_ENABLED
#include "stm32h7xx_hal_adc.h"
#endif

#ifdef HAL_FDCAN_MODULE_ENABLED
#include "stm32h7xx_hal_fdcan.h"
#endif

#ifdef HAL_CEC_MODULE_ENABLED
#include "stm32h7xx_hal_cec.h"
#endif

#ifdef HAL_COMP_MODULE_ENABLED
#include "stm32h7xx_hal_comp.h"
#endif

#ifdef HAL_CORDIC_MODULE_ENABLED
#include "stm32h7xx_hal_cordic.h"
#endif

#ifdef HAL_CRC_MODULE_ENABLED
#include "stm32h7xx_hal_crc.h"
#endif

#ifdef HAL_CRYP_MODULE_ENABLED
#include "stm32h7xx_hal_cryp.h"
#endif

#ifdef HAL_DAC_MODULE_ENABLED
#include "stm32h7xx_hal_dac.h"
#endif

#ifdef HAL_FLASH_MODULE_ENABLED
#include "stm32h7xx_hal_flash.h"
#endif

#ifdef HAL_GFXMMU_MODULE_ENABLED
#include "stm32h7xx_hal_gfxmmu.h"
#endif

#ifdef HAL_FMAC_MODULE_ENABLED
#include "stm32h7xx_hal_fmac.h"
#endif

#ifdef HAL_HRTIM_MODULE_ENABLED
#include "stm32h7xx_hal_hrtim.h"
#endif

#ifdef HAL_HSEM_MODULE_ENABLED
#include "stm32h7xx_hal_hsem.h"
#endif

#ifdef HAL_SRAM_MODULE_ENABLED
#include "stm32h7xx_hal_sram.h"
#endif

#ifdef HAL_NOR_MODULE_ENABLED
#include "stm32h7xx_hal_nor.h"
#endif

#ifdef HAL_NAND_MODULE_ENABLED
#include "stm32h7xx_hal_nand.h"
#endif

#ifdef HAL_I2C_MODULE_ENABLED
#include "stm32h7xx_hal_i2c.h"
#endif

#ifdef HAL_I2S_MODULE_ENABLED
#include "stm32h7xx_hal_i2s.h"
#endif

#ifdef HAL_IWDG_MODULE_ENABLED
#include "stm32h7xx_hal_iwdg.h"
#endif

#ifdef HAL_JPEG_MODULE_ENABLED
#include "stm32h7xx_hal_jpeg.h"
#endif

#ifdef HAL_MDIOS_MODULE_ENABLED
#include "stm32h7xx_hal_mdios.h"
#endif

#ifdef HAL_MMC_MODULE_ENABLED
#include "stm32h7xx_hal_mmc.h"
#endif

#ifdef HAL_LPTIM_MODULE_ENABLED
#include "stm32h7xx_hal_lptim.h"
#endif

#ifdef HAL_LTDC_MODULE_ENABLED
#include "stm32h7xx_hal_ltdc.h"
#endif
#ifdef HAL_OPAMP_MODULE_ENABLED
#include "stm32h7xx_hal_opamp.h"
#endif

#ifdef HAL_OSPI_MODULE_ENABLED
#include "stm32h7xx_hal_ospi.h"
#endif

#ifdef HAL_OTFDEC_MODULE_ENABLED
#include "stm32h7xx_hal_otfdec.h"
#endif

#ifdef HAL_PSSI_MODULE_ENABLED
#include "stm32h7xx_hal_pssi.h"
#endif

#ifdef HAL_PWR_MODULE_ENABLED
#include "stm32h7xx_hal_pwr.h"
#endif

#ifdef HAL_QSPI_MODULE_ENABLED
#include "stm32h7xx_hal_qspi.h"
#endif

#ifdef HAL_RAMECC_MODULE_ENABLED
#include "stm32h7xx_hal_ramecc.h"
#endif

#ifdef HAL_RNG_MODULE_ENABLED
#include "stm32h7xx_hal_rng.h"
#endif

#ifdef HAL_RTC_MODULE_ENABLED
#include "stm32h7xx_hal_rtc.h"
#endif

#ifdef HAL_SAI_MODULE_ENABLED
#include "stm32h7xx_hal_sai.h"
#endif

#ifdef HAL_SD_MODULE_ENABLED
#include "stm32h7xx_hal_sd.h"
#endif

#ifdef HAL_SDRAM_MODULE_ENABLED
#include "stm32h7xx_hal_sdram.h"
#endif

#ifdef HAL_SPI_MODULE_ENABLED
#include "stm32h7xx_hal_spi.h"
#endif

#ifdef HAL_SPDIFRX_MODULE_ENABLED
#include "stm32h7xx_hal_spdifrx.h"
#endif

#ifdef HAL_SWPMI_MODULE_ENABLED
#include "stm32h7xx_hal_swpmi.h"
#endif

#ifdef HAL_TIM_MODULE_ENABLED
#include "stm32h7xx_hal_tim.h"
#endif

#ifdef HAL_UART_MODULE_ENABLED
#include "stm32h7xx_hal_uart.h"
#endif

#ifdef HAL_USART_MODULE_ENABLED
#include "stm32h7xx_hal_usart.h"
#endif

#ifdef HAL_IRDA_MODULE_ENABLED
#include "stm32h7xx_hal_irda.h"
#endif

#ifdef HAL_SMARTCARD_MODULE_ENABLED
#include "stm32h7xx_hal_smartcard.h"
#endif

#ifdef HAL_SMBUS_MODULE_ENABLED
#include "stm32h7xx_hal_smbus.h"
#endif

#ifdef HAL_WWDG_MODULE_ENABLED
#include "stm32h7xx_hal_wwdg.h"
#endif

#ifdef HAL_PCD_MODULE_ENABLED
#include "stm32h7xx_hal_pcd.h"
#endif

#ifdef HAL_HCD_MODULE_ENABLED
#include "stm32h7xx_hal_hcd.h"
#endif

#ifdef  USE_FULL_ASSERT
#define assert_param(expr) ((expr) ? (void)0U : assert_failed((uint8_t *)__FILE__, __LINE__))
void assert_failed(uint8_t *file, uint32_t line);
#else
#define assert_param(expr) ((void)0U)
#endif

#ifdef __cplusplus
}
#endif

#endif /* STM32H7xx_HAL_CONF_H */
