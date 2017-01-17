#ifndef SILK_DEC_INFO_H
#define SILK_DEC_INFO_H

#ifdef __cplusplus
extern "C"
{
#endif
    
typedef struct {
    int pitch_lag_48kHz;
    int LTP_gain_Q14;
} silk_dec_info;

#ifdef __cplusplus
}
#endif

#endif // SILK_DEC_INFO_H
