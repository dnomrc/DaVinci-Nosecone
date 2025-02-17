#ifndef BMP390_H__
#define BMP390_H__

#include "usr_common_porting.h"

#if defined(USE_BMP390)

#define PRESSURE_SAMPLING_RATE		BMP3_NO_OVERSAMPLING
#define TEMPERATURE_SAMPLING_RATE	BMP3_NO_OVERSAMPLING

#define OUTPUT_RATE			BMP3_ODR_100_HZ
#define IIR_FILTER_COEFF 	BMP3_IIR_FILTER_COEFF_7

//#define OUTPUT_RATE			BMP3_ODR_25_HZ
//#define IIR_FILTER_COEFF 	BMP3_IIR_FILTER_COEFF_15

void BMP390_Init(void);
struct bmp3_data bmp390_getdata(void);
struct bmp3_data bmp390_data_check(struct bmp3_data data);
double convert_Pa_to_meter(double pressure_Pa);
double convert_mhPa_to_meter(int32_t pressure_mhPa);
int32_t convert_Pa_to_mhPa(double pressure_Pa);

#endif

#endif

