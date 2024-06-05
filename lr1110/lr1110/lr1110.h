// unchanged headers
#include "smtc_d2d.h"
#include "modem_context.h"
#include "apps_modem_common.h"
#include "smtc_modem_utilities.h"
#include "lr11xx_regmem.h"
#include "smtc_basic_modem_lr11xx_api_extension.h"
#include "smtc_modem_hal.h"
#include "radio_planner_hook_id_defs.h"
#include "gnss_middleware.h"
#include "wifi_middleware.h"
#include "mw_bsp.h"
#include "smtc_modem_services_hal.h"
#include "ral_lr11xx_bsp.h"
#include "radio_planner_stats.h"
#include "mw_assert.h"
#include "lr11xx_crypto_engine_types.h"
#include "lr1mac_core.h"
#include "lr1mac_defs.h"
#include "lr11xx_system.h"
#include "device_management_defs.h"
#include "smtc_shield_lr11xx_common_if.h"
#include "lr1mac_config.h"
#include "lr11xx_lr_fhss_types.h"
#include "modem_utilities.h"
#include "mw_common.h"
#include "smtc_board_ralf.h"
#include "lr11xx_radio_types.h"
#include "lr11xx_gnss.h"
#include "fifo_ctrl.h"
#include "lr1mac_utilities.h"
#include "gnss_version.h"
#include "lmic_defines.h"
#include "smtc_shield_lr11xx_geoloc_if.h"
#include "smtc_clock_sync.h"
#include "smtc_modem_test_api.h"
#include "smtc_lr11xx_board.h"
#include "file_upload_defs.h"
#include "smtc_board.h"
#include "stream.h"
#include "modem_pinout.h"
#include "wifi_version.h"
#include "gnss_queue_defs.h"
#include "gnss_queue.h"
#include "gnss_helpers_defs.h"
#include "lr11xx_radio.h"
#include "smtc_modem_services_config.template.h"
#include "lorawan_api.h"
#include "apps_modem_event.h"
#include "smtc_lbt.h"
#include "ralf_lr11xx.h"
#include "lr11xx_driver_extension.h"
#include "modem_supervisor.h"
#include "lr11xx_wifi_types.h"
#include "rose_defs.h"
#include "gnss_helpers.h"
#include "aes.h"
#include "lr11xx_gnss_types.h"
#include "lora_basics_modem_version.h"
#include "ral_defs.h"
#include "smtc_modem_api.h"
#include "ralf_lr11xx_bsp.h"
#include "lr11xx_bootloader_types.h"
#include "lr11xx_system_types.h"
#include "dm_downlink.h"
#include "lr1_stack_mac_layer.h"
#include "modem_services_common.h"
#include "lr1mac_class_c.h"
#include "lr11xx_hal.h"
#include "wifi_helpers.h"
#include "smtc_modem_crypto.h"
#include "alc_sync.h"
#include "ralf_defs.h"
#include "smtc_beacon_sniff.h"
#include "lr11xx_bootloader.h"
#include "rose.h"
#include "lr11xx_hal_context.h"
#include "region_us_915.h"
#include "file_upload.h"
#include "ralf_drv.h"
#include "ral.h"
#include "smtc_duty_cycle.h"
#include "smtc_ping_slot.h"
#include "almanac_update.h"
#include "smtc_modem_hal_dbg_trace.h"
#include "lr11xx_wifi.h"
#include "radio_planner.h"
#include "smtc_modem_services_config.h"
#include "lr11xx_driver_version.h"
#include "mw_dbg_trace.h"
#include "lr_fhss_v1_base_types.h"
#include "smtc_secure_element.h"
#include "radio_planner_hal.h"
#include "smtc_real.h"
#include "lr11xx_radio_timings.h"
#include "lr11xx_types.h"
#include "lr11xx_lr_fhss.h"
#include "ral_lr11xx.h"
#include "lorawan_certification.h"
#include "wifi_helpers_defs.h"
#include "ralf.h"
#include "cmac.h"
#include "smtc_modem_middleware_advanced_api.h"
#include "ral_drv.h"
#include "smtc_multicast.h"
#include "smtc_modem_api_str.h"
#include "region_us_915_defs.h"
#include "lr11xx_crypto_engine.h"
#include "radio_planner_types.h"
#include "apps_utilities.h"
#include "smtc_real_defs_str.h"

// changed headers
#include "smtc_hal_gpio.h"
#include "main_lorawan.h"
#include "smtc_hal_spi.h"
#include "smtc_hal_lp_time.h"
#include "smtc_hal_rtc.h"
#include "smtc_hal_def.h"
#include "smtc_hal.h"
#include "smtc_hal_config.h"
#include "smtc_hal_dbg_trace.h"
#include "smtc_hal_options.h"
#include "smtc_hal_mcu.h"
#include "smtc_hal_trace.h"
#include "smtc_hal_rng.h"
#include "smtc_hal_flash.h"
#include "smtc_real_defs.h"