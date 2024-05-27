// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: PV Dashboard

#ifndef _PV_DASHBOARD_UI_H
#define _PV_DASHBOARD_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
  #if __has_include("lvgl.h")
    #include "lvgl.h"
  #elif __has_include("lvgl/lvgl.h")
    #include "lvgl/lvgl.h"
  #else
    #include "lvgl.h"
  #endif
#else
  #include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"

void rotation_Animation( lv_obj_t *TargetObject, int delay);
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t *ui_Screen1;
extern lv_obj_t *ui_Cont_guage_home;
extern lv_obj_t *ui_img_guage_home;
extern lv_obj_t *ui_img_needle_home;
extern lv_obj_t *ui_Label_home_kV;
extern lv_obj_t *ui_Cont_guage_pv;
extern lv_obj_t *ui_img_guage_pv;
extern lv_obj_t *ui_img_needle_pv;
extern lv_obj_t *ui_Label_pv_kV;
extern lv_obj_t *ui_Cont_power;
extern lv_obj_t *ui_img_outline_power;
extern lv_obj_t *ui_Label4;
extern lv_obj_t *ui_Label1;
extern lv_obj_t *ui_Label2;
extern lv_obj_t *ui_Label3;
extern lv_obj_t *ui_Label5;
extern lv_obj_t *ui_Cont_kWh;
extern lv_obj_t *ui_img_outline_kWh;
extern lv_obj_t *ui_Label6;
extern lv_obj_t *ui_Chart_TP;
extern lv_obj_t *ui_Cont_battery;
extern lv_obj_t *ui_img_battery_fill;
extern lv_obj_t *ui_img_battery_knob;
extern lv_obj_t *ui_img_battery_icon;
extern lv_obj_t *ui_Cont_mV_bar;
extern lv_obj_t *ui_img_mv_bar;
extern lv_obj_t *ui_img_mv_bar_knob;
extern lv_obj_t *ui_Cont_TP;
extern lv_obj_t *ui_Label_TP;
extern lv_obj_t *ui_Label_TP1;
extern lv_obj_t *ui_Cont_CH;
extern lv_obj_t *ui_Label_CH;
extern lv_obj_t *ui_Label_CH1;
extern lv_obj_t *ui_Cont_CA;
extern lv_obj_t *ui_Label_CA;
extern lv_obj_t *ui_Label_CA1;
extern lv_obj_t *ui_Cont_Bat_label;
extern lv_obj_t *ui_Label_bat;
extern lv_obj_t *ui_Label_Per;
extern lv_obj_t *ui_Cont_mV_label;
extern lv_obj_t *ui_Label_mV;
extern lv_obj_t *ui_Label_mV1;
extern lv_obj_t *ui____initial_actions0;

LV_IMG_DECLARE( ui_img_images_home_guage_png);   // assets/Images/home guage.png
LV_IMG_DECLARE( ui_img_images_home_needle_png);   // assets/Images/home needle.png
LV_IMG_DECLARE( ui_img_images_pv_guage_png);   // assets/Images/pv guage.png
LV_IMG_DECLARE( ui_img_images_pv_needle_png);   // assets/Images/pv needle.png
LV_IMG_DECLARE( ui_img_images_outline_power_png);   // assets/Images/outline power.png
LV_IMG_DECLARE( ui_img_images_outline_kwh_png);   // assets/Images/outline kWh.png
LV_IMG_DECLARE( ui_img_images_battery_png);   // assets/Images/battery.png
LV_IMG_DECLARE( ui_img_images_battery_knob_png);   // assets/Images/battery knob.png
LV_IMG_DECLARE( ui_img_images_battery_icon_png);   // assets/Images/battery icon.png
LV_IMG_DECLARE( ui_img_images_mv_bar_png);   // assets/Images/mV bar.png
LV_IMG_DECLARE( ui_img_images_mv_bar_knob_png);   // assets/Images/mV bar knob.png


LV_FONT_DECLARE( ui_font_Be13);
LV_FONT_DECLARE( ui_font_Be15);
LV_FONT_DECLARE( ui_font_Be30);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif