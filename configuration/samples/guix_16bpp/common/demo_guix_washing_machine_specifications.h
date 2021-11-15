/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.1.8.1                                               */
/*  Date (dd.mm.yyyy): 14. 9.2021   Time (hh:mm): 14:09                        */
/*******************************************************************************/


#ifndef _DEMO_GUIX_WASHING_MACHINE_SPECIFICATIONS_H_
#define _DEMO_GUIX_WASHING_MACHINE_SPECIFICATIONS_H_

#include "gx_api.h"

/* Determine if C++ compiler is being used, if so use standard C.              */
#ifdef __cplusplus
extern   "C" {
#endif

/* Define widget ids                                                           */

#define ID_TEMPERATURE_COLD 1
#define ID_TEMPERATURE_HOT 2
#define ID_TEMPERATURE_RADIAL_SLIDER 3
#define ID_WATER_LEVEL_SLIDER 4
#define ID_WATER_LEVEL_EXTRA_HIGH 5
#define ID_WATER_LEVEL_HIGH 6
#define ID_WATER_LEVEL_MEDIUM 7
#define ID_WATER_LEVEL_LOW 8
#define ID_WATER_LEVEL_VERY_LOW 9
#define ID_GARMENTS_ON_RADIAL_SLIDER 10
#define ID_GARMENTS_MODE_DENIM 11
#define ID_GARMENTS_MODE_BABY_CARE 12
#define ID_GARMENTS_MODE_WORKOUT_CLOTHES 13
#define ID_GARMENTS_MODE_LIGHT_COLORS 14
#define ID_GARMENTS_MODE_HAND_WASH 15
#define ID_GARMENTS_MODE_WOOL 16
#define ID_GARMENTS_MODE_SILK 17
#define ID_GARMENTS_MODE_BEDDING 18
#define ID_GARMENTS_MODE_DARK_COLORS 19
#define ID_GARMENTS_MODE_LINEN 20
#define ID_GARMENTS_MODE_SYNTHETICS 21
#define ID_GARMENTS_MODE_COTTON 22
#define ID_WASHER_ON_RADIAL_SLIDER 23
#define ID_WASHER_MODE_NORMAL 24
#define ID_WASHER_MODE_PERM_PRESS 25
#define ID_WASHER_MODE_RINSE_SPIN 26
#define ID_WASHER_MODE_VERY_LIGHT 27
#define ID_WASHER_MODE_NO_SPIN 28
#define ID_WASHER_MODE_SPIN 29
#define ID_WASHER_MODE_QUICK_WASH 30
#define ID_WASHER_MODE_LIGHT 31
#define ID_WASHER_MODE_MEDIUM 32
#define ID_WASHER_MODE_FAST 33
#define ID_WASHER_MODE_VERY_FAST 34
#define ID_WASHER_MODE_SOAK 35
#define ID_BTN_WASHER_ON 36
#define ID_BTN_GARMENTS 37
#define ID_BTN_WATER_LEVEL 38
#define ID_BTN_TEMPERATURE 39
#define ID_BTN_POWER_ON_OFF 40


/* Define animation ids                                                        */

#define GX_NEXT_ANIMATION_ID 1


/* Define user event ids                                                       */

#define GX_NEXT_USER_EVENT_ID GX_FIRST_USER_EVENT


/* Declare properties structures for each utilized widget type                 */

typedef struct GX_STUDIO_WIDGET_STRUCT
{
   GX_CHAR *widget_name;
   USHORT  widget_type;
   USHORT  widget_id;
   #if defined(GX_WIDGET_USER_DATA)
   INT   user_data;
   #endif
   ULONG style;
   ULONG status;
   ULONG control_block_size;
   GX_RESOURCE_ID normal_fill_color_id;
   GX_RESOURCE_ID selected_fill_color_id;
   GX_RESOURCE_ID disabled_fill_color_id;
   UINT (*create_function) (GX_CONST struct GX_STUDIO_WIDGET_STRUCT *, GX_WIDGET *, GX_WIDGET *);
   void (*draw_function) (GX_WIDGET *);
   UINT (*event_function) (GX_WIDGET *, GX_EVENT *);
   GX_RECTANGLE size;
   GX_CONST struct GX_STUDIO_WIDGET_STRUCT *next_widget;
   GX_CONST struct GX_STUDIO_WIDGET_STRUCT *child_widget;
   ULONG control_block_offset;
   GX_CONST void *properties;
} GX_STUDIO_WIDGET;

typedef struct
{
    GX_CONST GX_STUDIO_WIDGET *widget_information;
    GX_WIDGET        *widget;
} GX_STUDIO_WIDGET_ENTRY;

typedef struct
{
    GX_RESOURCE_ID normal_pixelmap_id;
    GX_RESOURCE_ID selected_pixelmap_id;
    GX_RESOURCE_ID disabled_pixelmap_id;
} GX_PIXELMAP_BUTTON_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID normal_pixelmap_id;
    GX_RESOURCE_ID selected_pixelmap_id;
} GX_ICON_PROPERTIES;

typedef struct
{
    int min_val;
    int max_val;
    int current_val;
    int increment;
    GX_VALUE min_travel;
    GX_VALUE max_travel;
    GX_VALUE needle_width;
    GX_VALUE needle_height;
    GX_VALUE needle_inset;
    GX_VALUE needle_hotspot;
    GX_RESOURCE_ID lower_pixelmap;
    GX_RESOURCE_ID upper_pixelmap;
    GX_RESOURCE_ID needle_pixelmap;
} GX_PIXELMAP_SLIDER_PROPERTIES;

typedef struct
{
    GX_VALUE       xcenter;
    GX_VALUE       ycenter;
    USHORT         radius;
    USHORT         track_width;
    GX_VALUE       current_angle;
    GX_VALUE       min_angle;
    GX_VALUE       max_angle;
    GX_RESOURCE_ID background_pixelmap;
    GX_RESOURCE_ID needle_pixelmap;
    USHORT         animation_total_steps;
    USHORT         animation_delay;
    USHORT         animation_style;
    VOID         (*animation_update_callback)(struct GX_RADIAL_SLIDER_STRUCT *slider);
} GX_RADIAL_SLIDER_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
} GX_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    VOID (*format_func)(GX_NUMERIC_PROMPT *, INT);
    INT            numeric_prompt_value;
} GX_NUMERIC_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID wallpaper_id;
} GX_WINDOW_PROPERTIES;


/* Declare top-level control blocks                                            */

typedef struct TEMPERATURE_WINDOW_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PROMPT temperature_window_water_t_cold;
    GX_PROMPT temperature_window_water_t_hot;
    GX_RADIAL_SLIDER temperature_window_radial_slider;
    GX_PROMPT temperature_window_water_label_2;
    GX_PROMPT temperature_window_temperature_label;
    GX_PROMPT temperature_window_temperature_value;
    GX_PROMPT temperature_window_water_label_3;
} TEMPERATURE_WINDOW_CONTROL_BLOCK;

typedef struct WATER_LEVEL_WINDOW_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_ICON water_level_window_water_level_slider_background;
    GX_PIXELMAP_SLIDER water_level_window_water_level_slider;
    GX_PROMPT water_level_window_water_level_label;
    GX_PROMPT water_level_window_water_level_value;
    GX_PROMPT water_level_window_percent_label;
    GX_PROMPT water_level_window_water_level_extra_high;
    GX_PROMPT water_level_window_water_level_high;
    GX_PROMPT water_level_window_water_level_medium;
    GX_PROMPT water_level_window_water_level_low;
    GX_PROMPT water_level_window_water_level_very_low;
} WATER_LEVEL_WINDOW_CONTROL_BLOCK;

typedef struct GARMENTS_WINDOW_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_RADIAL_SLIDER garments_window_radial_slider;
    GX_WINDOW garments_window_icon_window;
    GX_PROMPT garments_window_mode_denim;
    GX_PROMPT garments_window_mode_baby_care;
    GX_PROMPT garments_window_mode_workout_clothes;
    GX_PROMPT garments_window_mode_light_colors;
    GX_PROMPT garments_window_mode_hand_wash;
    GX_PROMPT garments_window_mode_wool;
    GX_PROMPT garments_window_mode_silk;
    GX_PROMPT garments_window_mode_bedding;
    GX_PROMPT garments_window_mode_dark_colors;
    GX_PROMPT garments_window_mode_linen;
    GX_PROMPT garments_window_mode_synthetics;
    GX_PROMPT garments_window_mode_cotton;
} GARMENTS_WINDOW_CONTROL_BLOCK;

typedef struct MAIN_SCREEN_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_ICON main_screen_logo;
    GX_PIXELMAP_BUTTON main_screen_home;
    GX_PROMPT main_screen_time;
    GX_PROMPT main_screen_am_pm;
    GX_PROMPT main_screen_day_of_week;
    GX_PROMPT main_screen_date;
    GX_WINDOW main_screen_washer_on_window;
    GX_RADIAL_SLIDER main_screen_radial_slider;
    GX_PROMPT main_screen_remain_minute_label;
    GX_PROMPT main_screen_remainning_time;
    GX_PROMPT main_screen_remain_hour_label;
    GX_PROMPT main_screen_washer_mode;
    GX_NUMERIC_PROMPT main_screen_remain_hour;
    GX_NUMERIC_PROMPT main_screen_remain_minute;
    GX_PROMPT main_screen_mode_normal;
    GX_PROMPT main_screen_mode_perm_press;
    GX_PROMPT main_screen_mode_rinse_spin;
    GX_PROMPT main_screen_mode_very_light;
    GX_PROMPT main_screen_mode_no_spin;
    GX_PROMPT main_screen_mode_spin;
    GX_PROMPT main_screen_mode_quick_wash;
    GX_PROMPT main_screen_mode_light;
    GX_PROMPT main_screen_mode_medium;
    GX_PROMPT main_screen_mode_fast;
    GX_PROMPT main_screen_mode_very_fast;
    GX_PROMPT main_screen_mode_soak;
    GX_PIXELMAP_BUTTON main_screen_button_washer_on;
    GX_ICON main_screen_washer_on_icon;
    GX_PROMPT main_screen_washer_on_label;
    GX_PROMPT main_screen_page_name;
    GX_PIXELMAP_BUTTON main_screen_button_garments;
    GX_ICON main_screen_garments_icon;
    GX_PROMPT main_screen_garments_label;
    GX_PIXELMAP_BUTTON main_screen_button_water_level;
    GX_ICON main_screen_water_level_icon;
    GX_PROMPT main_screen_water_level_label;
    GX_PROMPT main_screen_water_level_value;
    GX_PROMPT main_screen_prompt_9;
    GX_PIXELMAP_BUTTON main_screen_button_temperature;
    GX_ICON main_screen_temperature_icon;
    GX_PROMPT main_screen_temperature_label;
    GX_PROMPT main_screen_temperature_value;
    GX_PROMPT main_screen_prompt_8;
    GX_PIXELMAP_BUTTON main_screen_button_power_on_off;
    GX_ICON main_screen_power_off_icon;
    GX_PROMPT main_screen_power_off_label;
    GX_ICON main_screen_icon_1;
    GX_PIXELMAP_SLIDER main_screen_pixelmap_slider;
} MAIN_SCREEN_CONTROL_BLOCK;


/* extern statically defined control blocks                                    */

#ifndef GUIX_STUDIO_GENERATED_FILE
extern TEMPERATURE_WINDOW_CONTROL_BLOCK temperature_window;
extern WATER_LEVEL_WINDOW_CONTROL_BLOCK water_level_window;
extern GARMENTS_WINDOW_CONTROL_BLOCK garments_window;
extern MAIN_SCREEN_CONTROL_BLOCK main_screen;
#endif

/* Prototype Dave2D display driver specific functions                          */

UINT _gx_rx_display_driver_setup(GX_DISPLAY *display);
#if defined(GX_TARGET_WIN32) || defined(GX_TARGET_LINUX)
UINT win32_graphics_driver_setup_565rgb(GX_DISPLAY *display);
#else
VOID _gx_display_driver_565rgb_setup(GX_DISPLAY *display, VOID *aux_data,
                           VOID (*toggle_function)(struct GX_CANVAS_STRUCT *canvas,
                           GX_RECTANGLE *dirty_area));
VOID _gx_rx_buffer_toggle(GX_CANVAS *canvas, GX_RECTANGLE *dirty);

#endif

/* Declare event process functions, draw functions, and callback functions     */

UINT temperature_window_event_process(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID temperature_window_draw(GX_WINDOW *widget);
UINT water_level_window_event_process(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID water_level_window_draw(GX_WINDOW *widget);
UINT garments_window_event_process(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID garments_mode_animation_update(GX_RADIAL_SLIDER *slider);
VOID icon_window_draw(GX_WINDOW *widget);
UINT main_screen_event_process(GX_WINDOW *widget, GX_EVENT *event_ptr);
UINT washer_on_window_event_process(GX_WINDOW *widget, GX_EVENT *event_ptr);
VOID washer_mode_animation_update(GX_RADIAL_SLIDER *slider);

/* Declare the GX_STUDIO_DISPLAY_INFO structure                                */


typedef struct GX_STUDIO_DISPLAY_INFO_STRUCT 
{
    GX_CONST GX_CHAR *name;
    GX_CONST GX_CHAR *canvas_name;
    GX_CONST GX_THEME **theme_table;
    GX_CONST GX_STRING **language_table;
    USHORT   theme_table_size;
    USHORT   language_table_size;
    UINT     string_table_size;
    UINT     x_resolution;
    UINT     y_resolution;
    GX_DISPLAY *display;
    GX_CANVAS  *canvas;
    GX_WINDOW_ROOT *root_window;
    GX_COLOR   *canvas_memory;
    ULONG      canvas_memory_size;
    USHORT     rotation_angle;
} GX_STUDIO_DISPLAY_INFO;


/* Declare Studio-generated functions for creating top-level widgets           */

UINT gx_studio_pixelmap_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_icon_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_radial_slider_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_numeric_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_window_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
GX_WIDGET *gx_studio_widget_create(GX_BYTE *storage, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget);
UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *), GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root);

/* Determine if a C++ compiler is being used.  If so, complete the standard
  C conditional started above.                                                 */
#ifdef __cplusplus
}
#endif

#endif                                       /* sentry                         */
