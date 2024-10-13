/*
 * ds3231.h
 *
 *  Created on: Oct 13, 2024
 *      Author: nachi
 */

#ifndef INC_DS3231_H_
#define INC_DS3231_H_

#include <stdint.h>

#define DS3231_DEV_ADD			(uint8_t)0x68

/* Address Map of the Chip */
#define DS3231_SECONDS 			(uint8_t)0x00
#define DS3231_MINUTES			(uint8_t)0x01
#define DS3231_AM_PM			(uint8_t)0x02
#define DS3231_DAY				(uint8_t)0x03
#define DS3231_DATE				(uint8_t)0x04
#define DS3231_MONTH			(uint8_t)0x05
#define DS3231_YEAR				(uint8_t)0x06
#define DS3231_A1M1				(uint8_t)0x07
#define DS3231_A1M2				(uint8_t)0x08
#define DS3231_A1M3				(uint8_t)0x09
#define DS3231_A1M4				(uint8_t)0x0A
#define DS3231_A2M2				(uint8_t)0x0B
#define DS3231_A2M3				(uint8_t)0x0C
#define DS3231_A2M4				(uint8_t)0x0D
#define DS3231_CTRL_REG			(uint8_t)0x0E
#define DS3231_CTRL_STATUS_REG	(uint8_t)0x0F
#define DS3231_AGING_OFFSET		(uint8_t)0x10
#define DS3231_TEMP_MSB			(uint8_t)0x11
#define DS3231_TEMP_LSB			(uint8_t)0x12
#endif /* INC_DS3231_H_ */
