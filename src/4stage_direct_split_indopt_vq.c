#include "lpcnet_quant.h"
int direct_split_indopt_num_stages = 4;
int direct_split_indopt_m[MAX_STAGES] = {2048, 2048, 2048, 2048, 0};
float direct_split_indopt_vq[MAX_STAGES*NB_BANDS*MAX_ENTRIES] = {
 