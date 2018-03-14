/* GMP109.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */
#ifndef __GMP109_H
#define __GMP109_H

#include <linux/ioctl.h>

#define GMP109_I2C_SLAVE_ADDR		0x76
/*GMP109 register map*/
#define GMP109_TEMPH 0x02
#define GMP109_TEMPM 0x03
#define GMP109_TEMPL 0x04
#define GMP109_PRESSH 0x05
#define GMP109_PRESSM 0x06
#define GMP109_PRESSL 0x07
#define GMP109_STATUS 0x08
#define GMP109_CTRL1 0x09
#define GMP109_CTRL2 0x0A
#define GMP109_CTRL3 0x0B
#define GMP109_CTRL4 0x0D
#define GMP109_CTRL5 0x0F
#define GMP109_RESET 0x11

#define GMP109_BUFSIZE 60

#define GMP109_Standby_mode 0x00
#define GMP109_Force_mode 0x01
#define GMP109_Continuous_mode 0x03
#define GMP109_RESET_COMMAND 0xB6
#define GMP109_DRDY_VALUE (0x01<<2)

/**return value**/
#define GMP109_SUCCESS			0
#define GMP109_ERR_I2C			-1
#define GMP109_ERR_STATUS			-3
#define GMP109_ERR_SETUP_FAILURE		-4
#define GMP109_ERR_GETGSENSORDATA		-5
#define GMP109_ERR_IDENTIFICATION		-6

#if 0//Steve 20180313
#define GMP109_MASTER_CONFIG	0x1A
#define GMP109_WAKE_UP_SRC	0x1B
#define GMP109_TAP_SRC	0x1C
#define GMP109_D6D_SRC	0x1D
#define GMP109_STATUS_REG	0x1E

/*temperature Output data register*/
#define GMP109_OUT_TEMP_L 0x20
#define GMP109_OUT_TEMP_H 0x21

/*Gyroscope Output data register*/
#define GMP109_OUTX_L_G   0x22
#define GMP109_OUTX_H_G   0x23
#define GMP109_OUTY_L_G   0x24
#define GMP109_OUTY_H_G   0x25
#define GMP109_OUTZ_L_G   0x26
#define GMP109_OUTZ_H_G   0x27

/*Accelerometer Output data register*/
#define GMP109_OUTX_L_XL   0x28
#define GMP109_OUTX_H_XL   0x29
#define GMP109_OUTY_L_XL   0x2A
#define GMP109_OUTY_H_XL   0x2B
#define GMP109_OUTZ_L_XL   0x2C
#define GMP109_OUTZ_H_XL   0x2D

/*Sensor Hub output registers*/
#define GMP109_SENSORHUB1_REG 0x2E
#define GMP109_SENSORHUB2_REG 0x2F
#define GMP109_SENSORHUB3_REG 0x30
#define GMP109_SENSORHUB4_REG 0x31
#define GMP109_SENSORHUB5_REG 0x32
#define GMP109_SENSORHUB6_REG 0x33
#define GMP109_SENSORHUB7_REG 0x34
#define GMP109_SENSORHUB8_REG 0x35
#define GMP109_SENSORHUB9_REG 0x36
#define GMP109_SENSORHUB10_REG 0x37
#define GMP109_SENSORHUB11_REG 0x38
#define GMP109_SENSORHUB12_REG 0x39

#define GMP109_SENSORHUB13_REG 0x4D
#define GMP109_SENSORHUB14_REG 0x4E
#define GMP109_SENSORHUB15_REG 0x4F
#define GMP109_SENSORHUB16_REG 0x50
#define GMP109_SENSORHUB17_REG 0x51
#define GMP109_SENSORHUB18_REG 0x52


/*FIFO status registers*/
#define GMP109_FIFO_STATUS1 0x3A
#define GMP109_FIFO_STATUS2 0x3B
#define GMP109_FIFO_STATUS3 0x3C
#define GMP109_FIFO_STATUS4 0x3D

/*FIFO data output registers*/
#define GMP109_FIFO_DATA_OUT_L 0x3E
#define GMP109_FIFO_DATA_OUT_H 0x3F

/*Timestamp output registers*/
#define GMP109_TIMESTAMP0_REG 0x40
#define GMP109_TIMESTAMP1_REG 0x41
#define GMP109_TIMESTAMP2_REG 0x42

/*step_counter timestamp registers*/
#define GMP109_STEP_TIMESTAMP_L 0x49
#define GMP109_STEP_TIMESTAMP_H 0x4A

/*step_counter output registers*/
#define GMP109_STEP_COUNTER_L	0x4B
#define GMP109_STEP_COUNTER_H	0x4C

/*Interrupt register*/
#define GMP109_FUNC_SRC	0x53

/*Interrupt registers*/
#define GMP109_TAP_CFG	0x58
#define GMP109_TAP_THS_6D	0x59
#define GMP109_INT_DUR2	0x5A
#define GMP109_WAKE_UP_THS	0x5B
#define GMP109_WAKE_UP_DUR	0x5C
#define GMP109_FREE_FALL	0x5D
#define GMP109_MD1_CFG	0x5E
#define GMP109_MD2_CFG	0x5F

/*External Magnetometer Raw data output registers*/
#define GMP109_OUT_MAG_RAW_X_L 0x66
#define GMP109_OUT_MAG_RAW_X_H 0x67
#define GMP109_OUT_MAG_RAW_Y_L 0x68
#define GMP109_OUT_MAG_RAW_Y_H 0x69
#define GMP109_OUT_MAG_RAW_Z_L 0x6A
#define GMP109_OUT_MAG_RAW_Z_H 0x6B

#define GMP109_CTRL_SPIAux	0x70/*reserve?*/

/*Embedded function register are acccessible*/
/*when FUNC_CFG_EN is set to '1' in FUNC_CFG_ACCESS*/
#define GMP109_SLV0_ADD	0x02
#define GMP109_SLV0_SUBADD	0x03
#define GMP109_SLAVE0_CONFIG	0x04

#define GMP109_SLV1_ADD	0x05
#define GMP109_SLV1_SUBADD	0x06
#define GMP109_SLAVE1_CONFIG	0x07

#define GMP109_SLV2_ADD	0x08
#define GMP109_SLV2_SUBADD	0x09
#define GMP109_SLAVE2_CONFIG	0x0a

#define GMP109_SLV3_ADD	0x0b
#define GMP109_SLV3_SUBADD	0x0c
#define GMP109_SLAVE3_CONFIG	0x0d

#define GMP109_DATAWRITE_SRC_MODE_SUB_SLV0 0x0e
#define GMP109_SM_THS 0x13
#define GMP109_STEP_COUNT_DELTA 0x15
#define GMP109_MAG_SI_XX 0x24
#define GMP109_MAG_SI_XY 0x25
#define GMP109_MAG_SI_XZ 0x26
#define GMP109_MAG_SI_YX 0x27
#define GMP109_MAG_SI_YY 0x28
#define GMP109_MAG_SI_YZ 0x29
#define GMP109_MAG_SI_ZX 0x2a
#define GMP109_MAG_SI_ZY 0x2b
#define GMP109_MAG_SI_ZZ 0x2c

#define GMP109_MAG_OFFX_L 0x2D
#define GMP109_MAG_OFFX_H 0x2E
#define GMP109_MAG_OFFY_L 0x2F
#define GMP109_MAG_OFFY_H 0x30
#define GMP109_MAG_OFFZ_L 0x31
#define GMP109_MAG_OFFZ_H 0x32




/*LSM6DS3H Register Bit definitions*/
#define GMP109_ACC_RANGE_MASK	0x0C
#define GMP109_ACC_RANGE_2g		    0x00
#define GMP109_ACC_RANGE_4g		    0x08
#define GMP109_ACC_RANGE_8g		    0x0C
#define GMP109_ACC_RANGE_16g		    0x04

#define GMP109_ACC_ODR_MASK	0xF0
#define GMP109_ACC_ODR_POWER_DOWN		0x00
#define GMP109_ACC_ODR_13HZ		    0x10
#define GMP109_ACC_ODR_26HZ		    0x20
#define GMP109_ACC_ODR_52HZ		    0x30
#define GMP109_ACC_ODR_104HZ		    0x40
#define GMP109_ACC_ODR_208HZ		    0x50
#define GMP109_ACC_ODR_416HZ		    0x60
#define GMP109_ACC_ODR_833HZ		    0x70
#define GMP109_ACC_ODR_1660HZ		    0x80
#define GMP109_ACC_ODR_3330HZ		    0x90
#define GMP109_ACC_ODR_6660HZ		    0xA0

#define GMP109_GYRO_RANGE_MASK	0x0E
#define GMP109_GYRO_RANGE_125DPS	0x02
#define GMP109_GYRO_RANGE_245DPS	0x00
#define GMP109_GYRO_RANGE_500DPS	0x04
#define GMP109_GYRO_RANGE_1000DPS	0x08
#define GMP109_GYRO_RANGE_2000DPS	0x0c

#define GMP109_GYRO_ODR_MASK	0xf0
#define GMP109_GYRO_ODR_POWER_DOWN	0x00
#define GMP109_GYRO_ODR_13HZ		0x10
#define GMP109_GYRO_ODR_26HZ		0x20
#define GMP109_GYRO_ODR_52HZ		0x30
#define GMP109_GYRO_ODR_104HZ		0x40
#define GMP109_GYRO_ODR_208HZ		0x50
#define GMP109_GYRO_ODR_416HZ		0x60
#define GMP109_GYRO_ODR_833HZ		0x70
#define GMP109_GYRO_ODR_1660HZ		0x80

#define AUTO_INCREMENT 0x80
#define GMP109_CTRL3_C_IFINC 0x04


#define GMP109_ACC_SENSITIVITY_2G		61	/*ug/LSB*/
#define GMP109_ACC_SENSITIVITY_4G		122	/*ug/LSB*/
#define GMP109_ACC_SENSITIVITY_8G		244	/*ug/LSB*/
#define GMP109_ACC_SENSITIVITY_16G		488	/*ug/LSB*/


#define GMP109_ACC_ENABLE_AXIS_MASK 0X38
#define GMP109_ACC_ENABLE_AXIS_X 0x08
#define GMP109_ACC_ENABLE_AXIS_Y 0x10
#define GMP109_ACC_ENABLE_AXIS_Z 0x20



#define GMP109_GYRO_SENSITIVITY_125DPS		4375	/*udps/LSB*/
#define GMP109_GYRO_SENSITIVITY_245DPS		8750	/*udps/LSB*/
#define GMP109_GYRO_SENSITIVITY_500DPS		17500	/*udps/LSB*/
#define GMP109_GYRO_SENSITIVITY_1000DPS	35000	/*udps/LSB*/
#define GMP109_GYRO_SENSITIVITY_2000DPS	70000	/*udps/LSB*/

#define GMP109_GYRO_ENABLE_AXIS_MASK 0x38
#define GMP109_GYRO_ENABLE_AXIS_X 0x08
#define GMP109_GYRO_ENABLE_AXIS_Y 0x10
#define GMP109_GYRO_ENABLE_AXIS_Z 0x20

#define GMP109_ACC_GYRO_FUNC_EN_MASK	0x04
#define GMP109_PEDO_EN_MASK 0x40
enum enum_GMP109_ACC_GYRO_PEDO_EN_t {
	GMP109_ACC_GYRO_PEDO_EN_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_PEDO_EN_ENABLED		 = 0x40,
};
#define GMP109_ACC_GYRO_PEDO_EN_t enum enum_GMP109_ACC_GYRO_PEDO_EN_t

#define GMP109_TILT_EN_MASK 0x20

enum enum_GMP109_ACC_GYRO_TILT_EN_t {
	GMP109_ACC_GYRO_TILT_EN_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_TILT_EN_ENABLED		 = 0x20,
};
#define GMP109_ACC_GYRO_TILT_EN_t enum enum_GMP109_ACC_GYRO_TILT_EN_t

enum enum_GMP109_ACC_GYRO_ROUNT_INT_t {
	GMP109_ACC_GYRO_INT1		 = 0,
	GMP109_ACC_GYRO_INT2		 = 1,
};
#define GMP109_ACC_GYRO_ROUNT_INT_t enum enum_GMP109_ACC_GYRO_ROUNT_INT_t
enum enum_GMP109_ACC_GYRO_FUNC_EN_t {
	GMP109_ACC_GYRO_FUNC_EN_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_FUNC_EN_ENABLED		 = 0x04,
};
#define GMP109_ACC_GYRO_FUNC_EN_t enum enum_GMP109_ACC_GYRO_FUNC_EN_t

enum enum_GMP109_ACC_GYRO_INT2_TILT_t {
	GMP109_ACC_GYRO_INT_TILT_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_INT_TILT_ENABLED		 = 0x02,
};
#define GMP109_ACC_GYRO_INT2_TILT_t enum enum_GMP109_ACC_GYRO_INT2_TILT_t

#define	GMP109_ACC_GYRO_INT_TILT_MASK	0x02
enum enum_GMP109_ACC_GYRO_TILT_t {
	GMP109_ACC_GYRO_TILT_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_TILT_ENABLED		 = 0x02,
};
#define GMP109_ACC_GYRO_TILT_t enum enum_GMP109_ACC_GYRO_TILT_t

#define GMP109_ACC_GYRO_TILT_MASK	0x02

enum enum_GMP109_ACC_GYRO_INT_SIGN_MOT_t {
	GMP109_ACC_GYRO_INT_SIGN_MOT_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_INT_SIGN_MOT_ENABLED		 = 0x40,
};
#define GMP109_ACC_GYRO_INT_SIGN_MOT_t enum enum_GMP109_ACC_GYRO_INT_SIGN_MOT_t

#define	GMP109_ACC_GYRO_INT_SIGN_MOT_MASK	0x40

enum enum_GMP109_ACC_GYRO_SIGN_MOT_t {
	GMP109_ACC_GYRO_SIGN_MOT_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_SIGN_MOT_ENABLED		 = 0x01,
};
#define GMP109_ACC_GYRO_SIGN_MOT_t enum enum_GMP109_ACC_GYRO_SIGN_MOT_t

#define	GMP109_ACC_GYRO_SIGN_MOT_MASK	0x01

enum enum_GMP109_ACC_GYRO_RAM_PAGE_t {
	GMP109_ACC_GYRO_RAM_PAGE_DISABLED		 = 0x00,
	GMP109_ACC_GYRO_RAM_PAGE_ENABLED		 = 0x80,
};
#define GMP109_ACC_GYRO_RAM_PAGE_t enum enum_GMP109_ACC_GYRO_RAM_PAGE_t

#define GMP109_RAM_PAGE_MASK	0x80
#define GMP109_CONFIG_PEDO_THS_MIN          0x0F

enum enum_GMP109_ACC_GYRO_PEDO_RST_STEP_t {
	GMP109_ACC_GYRO_PEDO_RST_STEP_DISABLED	 = 0x00,
	GMP109_ACC_GYRO_PEDO_RST_STEP_ENABLED		 = 0x02,
};
#define GMP109_ACC_GYRO_PEDO_RST_STEP_t enum enum_GMP109_ACC_GYRO_PEDO_RST_STEP_t

#define GMP109_PEDO_RST_STEP_MASK  0x02

enum enum_GMP109_ACC_GYRO_INT_ACTIVE_t {
	GMP109_ACC_GYRO_INT_ACTIVE_HIGH	 = 0x00,
	GMP109_ACC_GYRO_INT_ACTIVE_LOW		 = 0x20,
};
#define GMP109_ACC_GYRO_INT_ACTIVE_t enum enum_GMP109_ACC_GYRO_INT_ACTIVE_t

#define GMP109_ACC_GYRO_INT_ACTIVE_MASK 0x20

enum enum_GMP109_ACC_GYRO_INT_LATCH_CTL_t {
	GMP109_ACC_GYRO_INT_LATCH	  = 0x01,
	GMP109_ACC_GYRO_INT_NO_LATCH	 = 0x00,
};
#define GMP109_ACC_GYRO_INT_LATCH_CTL_t enum enum_GMP109_ACC_GYRO_INT_LATCH_CTL_t

#define GMP109_ACC_GYRO_INT_LATCH_CTL_MASK 0x01

#define GMP109_SIGNICANT_MOTION_INT_STATUS 0x40
#define GMP109_TILT_INT_STATUS 0x20
#define GMP109_STEP_DETECT_INT_STATUS 0x10
#endif



/*------------------------------------------------------------------*/
#endif /*GMP109_H*/

