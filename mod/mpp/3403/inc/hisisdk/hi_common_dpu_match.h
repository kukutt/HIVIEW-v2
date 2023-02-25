/*
  Copyright (c), 2001-2021, Shenshu Tech. Co., Ltd.
 */

#ifndef __HI_COMMON_DPU_MATCH_H__
#define __HI_COMMON_DPU_MATCH_H__

#include "hi_common.h"
#include "hi_errno.h"
#include "hi_debug.h"
#include "hi_common_video.h"
#include "ot_common_dpu_match.h"


#ifdef __cplusplus
extern "C" {
#endif

#define HI_DPU_MATCH_LEFT_PIPE OT_DPU_MATCH_LEFT_PIPE
#define HI_DPU_MATCH_RIGHT_PIPE OT_DPU_MATCH_RIGHT_PIPE
#define HI_DPU_MATCH_PENALTY_COEF_NUM OT_DPU_MATCH_PENALTY_COEF_NUM
typedef ot_dpu_match_grp hi_dpu_match_grp;
typedef ot_dpu_match_pipe hi_dpu_match_pipe;
typedef ot_dpu_match_chn hi_dpu_match_chn;
#define HI_ERR_DPU_MATCH_SYS_TIMEOUT OT_ERR_DPU_MATCH_SYS_TIMEOUT
#define HI_ERR_DPU_MATCH_OPEN_FILE OT_ERR_DPU_MATCH_OPEN_FILE
#define HI_ERR_DPU_MATCH_READ_FILE OT_ERR_DPU_MATCH_READ_FILE
#define HI_ERR_DPU_MATCH_WRITE_FILE OT_ERR_DPU_MATCH_WRITE_FILE
#define HI_ERR_DPU_MATCH_BUTT OT_ERR_DPU_MATCH_BUTT
typedef ot_dpu_match_err_code hi_dpu_match_err_code;
#define HI_ERR_DPU_MATCH_NULL_PTR OT_ERR_DPU_MATCH_NULL_PTR
#define HI_ERR_DPU_MATCH_NOT_READY OT_ERR_DPU_MATCH_NOT_READY
#define HI_ERR_DPU_MATCH_INVALID_DEV_ID OT_ERR_DPU_MATCH_INVALID_DEV_ID
#define HI_ERR_DPU_MATCH_INVALID_CHN_ID OT_ERR_DPU_MATCH_INVALID_CHN_ID
#define HI_ERR_DPU_MATCH_INVALID_GRP_ID OT_ERR_DPU_MATCH_INVALID_GRP_ID
#define HI_ERR_DPU_MATCH_EXIST OT_ERR_DPU_MATCH_EXIST
#define HI_ERR_DPU_MATCH_UNEXIST OT_ERR_DPU_MATCH_UNEXIST
#define HI_ERR_DPU_MATCH_NOT_SUPPORT OT_ERR_DPU_MATCH_NOT_SUPPORT
#define HI_ERR_DPU_MATCH_NOT_PERM OT_ERR_DPU_MATCH_NOT_PERM
#define HI_ERR_DPU_MATCH_NO_MEM OT_ERR_DPU_MATCH_NO_MEM
#define HI_ERR_DPU_MATCH_NO_BUF OT_ERR_DPU_MATCH_NO_BUF
#define HI_ERR_DPU_MATCH_ILLEGAL_PARAM OT_ERR_DPU_MATCH_ILLEGAL_PARAM
#define HI_ERR_DPU_MATCH_BUSY OT_ERR_DPU_MATCH_BUSY
#define HI_ERR_DPU_MATCH_BUF_EMPTY OT_ERR_DPU_MATCH_BUF_EMPTY
#define HI_ERR_DPU_MATCH_SYS_TIMEOUT OT_ERR_DPU_MATCH_SYS_TIMEOUT
#define HI_ERR_DPU_MATCH_OPEN_FILE OT_ERR_DPU_MATCH_OPEN_FILE
#define HI_ERR_DPU_MATCH_READ_FILE OT_ERR_DPU_MATCH_READ_FILE
#define HI_ERR_DPU_MATCH_WRITE_FILE OT_ERR_DPU_MATCH_WRITE_FILE
typedef ot_dpu_match_mem_info hi_dpu_match_mem_info;
typedef ot_dpu_match_frame_info hi_dpu_match_frame_info;
#define HI_DPU_MATCH_MASK_DEFAULT_MODE OT_DPU_MATCH_MASK_DEFAULT_MODE
#define HI_DPU_MATCH_MASK_1X1_MODE OT_DPU_MATCH_MASK_1X1_MODE
#define HI_DPU_MATCH_MASK_3X3_MODE OT_DPU_MATCH_MASK_3X3_MODE
#define HI_DPU_MATCH_MASK_5X5_MODE OT_DPU_MATCH_MASK_5X5_MODE
#define HI_DPU_MATCH_MASK_7X7_MODE OT_DPU_MATCH_MASK_7X7_MODE
#define HI_DPU_MATCH_MASK_9X9_MODE OT_DPU_MATCH_MASK_9X9_MODE
#define HI_DPU_MATCH_MASK_MODE_BUTT OT_DPU_MATCH_MASK_MODE_BUTT
typedef ot_dpu_match_mask_mode hi_dpu_match_mask_mode;
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D0_A9 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D0_A9
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D1_A8 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D1_A8
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D2_A7 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D2_A7
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D3_A6 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D3_A6
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D4_A5 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D4_A5
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D5_A4 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D5_A4
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D6_A3 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D6_A3
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D7_A2 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D7_A2
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D8_A1 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D8_A1
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_D9_A0 OT_DPU_MATCH_DENSITY_ACCURACY_MODE_D9_A0
#define HI_DPU_MATCH_DENSITY_ACCURACY_MODE_BUTT OT_DPU_MATCH_DENSITY_ACCURACY_MODE_BUTT
typedef ot_dpu_match_density_accuracy_mode hi_dpu_match_density_accuracy_mode;
#define HI_DPU_MATCH_SPEED_ACCURACY_MODE_SPEED OT_DPU_MATCH_SPEED_ACCURACY_MODE_SPEED
#define HI_DPU_MATCH_SPEED_ACCURACY_MODE_ACCURACY OT_DPU_MATCH_SPEED_ACCURACY_MODE_ACCURACY
#define HI_DPU_MATCH_SPEED_ACCURACY_MODE_BUTT OT_DPU_MATCH_SPEED_ACCURACY_MODE_BUTT
typedef ot_dpu_match_speed_accuracy_mode hi_dpu_match_speed_accuracy_mode;
#define HI_DPU_MATCH_DISPARITY_SUBPIXEL_DISABLE OT_DPU_MATCH_DISPARITY_SUBPIXEL_DISABLE
#define HI_DPU_MATCH_DISPARITY_SUBPIXEL_ENABLE OT_DPU_MATCH_DISPARITY_SUBPIXEL_ENABLE
#define HI_DPU_MATCH_DISPARITY_SUBPIXEL_BUTT OT_DPU_MATCH_DISPARITY_SUBPIXEL_BUTT
typedef ot_dpu_match_disparity_subpixel hi_dpu_match_disparity_subpixel;
typedef ot_dpu_match_grp_attr hi_dpu_match_grp_attr;
typedef ot_dpu_match_chn_attr hi_dpu_match_chn_attr;
typedef ot_dpu_match_cost_param hi_dpu_match_cost_param;

#ifdef __cplusplus
}
#endif
#endif /* __HI_COMMON_DPU_MATCH_H__ */