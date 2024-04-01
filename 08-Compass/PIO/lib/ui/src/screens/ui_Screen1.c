// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.0
// LVGL version: 8.3.11
// Project name: compass

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
ui_Screen1 = lv_obj_create(NULL);
lv_obj_clear_flag( ui_Screen1, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_compass = lv_img_create(ui_Screen1);
lv_img_set_src(ui_compass, &ui_img_compass_png);
lv_obj_set_width( ui_compass, LV_SIZE_CONTENT);  /// 721
lv_obj_set_height( ui_compass, LV_SIZE_CONTENT);   /// 104
lv_obj_set_x( ui_compass, -70 );
lv_obj_set_y( ui_compass, 66 );
lv_obj_add_flag( ui_compass, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_compass, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

ui_overlay = lv_img_create(ui_Screen1);
lv_img_set_src(ui_overlay, &ui_img_overlay_png);
lv_obj_set_width( ui_overlay, LV_SIZE_CONTENT);  /// 320
lv_obj_set_height( ui_overlay, LV_SIZE_CONTENT);   /// 170
lv_obj_add_flag( ui_overlay, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_overlay, LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_blend_mode(ui_overlay, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_Container1 = lv_obj_create(ui_Screen1);
lv_obj_remove_style_all(ui_Container1);
lv_obj_set_width( ui_Container1, 158);
lv_obj_set_height( ui_Container1, 54);
lv_obj_set_x( ui_Container1, 0 );
lv_obj_set_y( ui_Container1, -3 );
lv_obj_set_flex_flow(ui_Container1,LV_FLEX_FLOW_ROW);
lv_obj_set_flex_align(ui_Container1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
lv_obj_clear_flag( ui_Container1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE );    /// Flags
lv_obj_set_style_pad_left(ui_Container1, 10, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_Container1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_Container1, 5, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_Container1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_degree = lv_label_create(ui_Container1);
lv_obj_set_height( ui_lbl_degree, 49);
lv_obj_set_width( ui_lbl_degree, LV_SIZE_CONTENT);  /// 74
lv_obj_set_x( ui_lbl_degree, -25 );
lv_obj_set_y( ui_lbl_degree, -1 );
lv_obj_set_align( ui_lbl_degree, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_degree,"0°");
lv_obj_set_style_text_color(ui_lbl_degree, lv_color_hex(0xFF6918), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_lbl_degree, 255, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_align(ui_lbl_degree, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_degree, &ui_font_Mo40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_lbl_direction = lv_label_create(ui_Container1);
lv_obj_set_height( ui_lbl_direction, 49);
lv_obj_set_width( ui_lbl_direction, LV_SIZE_CONTENT);  /// 74
lv_obj_set_x( ui_lbl_direction, -25 );
lv_obj_set_y( ui_lbl_direction, -1 );
lv_obj_set_align( ui_lbl_direction, LV_ALIGN_CENTER );
lv_label_set_text(ui_lbl_direction,"N");
lv_obj_set_style_text_align(ui_lbl_direction, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_lbl_direction, &ui_font_Mo40, LV_PART_MAIN| LV_STATE_DEFAULT);

ui_TextArea1 = lv_textarea_create(ui_Screen1);
lv_obj_set_width( ui_TextArea1, 145);
lv_obj_set_height( ui_TextArea1, 63);
lv_obj_set_x( ui_TextArea1, 165 );
lv_obj_set_y( ui_TextArea1, 5 );
lv_textarea_set_placeholder_text(ui_TextArea1,"...");
lv_obj_set_style_text_align(ui_TextArea1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_text_font(ui_TextArea1, &ui_font_Mo14, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_radius(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_bg_color(ui_TextArea1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_bg_opa(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_border_color(ui_TextArea1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT );
lv_obj_set_style_border_opa(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_left(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_right(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_top(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_bottom(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_row(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);
lv_obj_set_style_pad_column(ui_TextArea1, 0, LV_PART_MAIN| LV_STATE_DEFAULT);


lv_obj_set_style_text_color(ui_TextArea1, lv_color_hex(0xFFFFFF), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT );
lv_obj_set_style_text_opa(ui_TextArea1, 255, LV_PART_TEXTAREA_PLACEHOLDER| LV_STATE_DEFAULT);

ui_indicator = lv_img_create(ui_Screen1);
lv_img_set_src(ui_indicator, &ui_img_indicator_1_png);
lv_obj_set_width( ui_indicator, LV_SIZE_CONTENT);  /// 62
lv_obj_set_height( ui_indicator, LV_SIZE_CONTENT);   /// 17
lv_obj_set_x( ui_indicator, 130 );
lv_obj_set_y( ui_indicator, 117 );
lv_obj_add_flag( ui_indicator, LV_OBJ_FLAG_ADV_HITTEST );   /// Flags
lv_obj_clear_flag( ui_indicator, LV_OBJ_FLAG_SCROLLABLE );    /// Flags

}
