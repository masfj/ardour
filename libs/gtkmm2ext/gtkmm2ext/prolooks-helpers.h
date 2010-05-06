/* Helpers.c generated by valac, the Vala compiler */

/* 
    Copyright 2009 by Hans Baier
    License: LGPLv2+ 
*/

#ifndef __prolooks_helpers_h__
#define __prolooks_helpers_h__

#include <glib.h>
#include <glib-object.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <cairo.h>
#include <gdk/gdk.h>
#include <gdk-pixbuf/gdk-pixdata.h>
#include <gobject/gvaluecollector.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CAIRO_TYPE_COLOR (cairo_color_get_type ())
#define CAIRO_COLOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), CAIRO_TYPE_COLOR, CairoColor))
#define CAIRO_COLOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), CAIRO_TYPE_COLOR, CairoColorClass))
#define CAIRO_IS_COLOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CAIRO_TYPE_COLOR))
#define CAIRO_IS_COLOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), CAIRO_TYPE_COLOR))
#define CAIRO_COLOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), CAIRO_TYPE_COLOR, CairoColorClass))

typedef struct _CairoColor CairoColor;
typedef struct _CairoColorClass CairoColorClass;
typedef struct _CairoColorPrivate CairoColorPrivate;

#define PROLOOKS_TYPE_HSL (prolooks_hsl_get_type ())
#define PROLOOKS_HSL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PROLOOKS_TYPE_HSL, ProlooksHSL))
#define PROLOOKS_HSL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PROLOOKS_TYPE_HSL, ProlooksHSLClass))
#define PROLOOKS_IS_HSL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PROLOOKS_TYPE_HSL))
#define PROLOOKS_IS_HSL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PROLOOKS_TYPE_HSL))
#define PROLOOKS_HSL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PROLOOKS_TYPE_HSL, ProlooksHSLClass))

typedef struct _ProlooksHSL ProlooksHSL;
typedef struct _ProlooksHSLClass ProlooksHSLClass;
#define _prolooks_hsl_unref0(var) ((var == NULL) ? NULL : (var = (prolooks_hsl_unref (var), NULL)))
#define _cairo_color_unref0(var) ((var == NULL) ? NULL : (var = (cairo_color_unref (var), NULL)))
typedef struct _CairoParamSpecColor CairoParamSpecColor;

#define PROLOOKS_TYPE_BUTTON_STATE (prolooks_button_state_get_type ())

#define PROLOOKS_TYPE_BUTTON_TYPE (prolooks_button_type_get_type ())
#define _cairo_pattern_destroy0(var) ((var == NULL) ? NULL : (var = (cairo_pattern_destroy (var), NULL)))
typedef struct _ProlooksHSLPrivate ProlooksHSLPrivate;
typedef struct _ProlooksParamSpecHSL ProlooksParamSpecHSL;

#define PROLOOKS_TYPE_HSV (prolooks_hsv_get_type ())
#define PROLOOKS_HSV(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), PROLOOKS_TYPE_HSV, ProlooksHSV))
#define PROLOOKS_HSV_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), PROLOOKS_TYPE_HSV, ProlooksHSVClass))
#define PROLOOKS_IS_HSV(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), PROLOOKS_TYPE_HSV))
#define PROLOOKS_IS_HSV_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), PROLOOKS_TYPE_HSV))
#define PROLOOKS_HSV_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), PROLOOKS_TYPE_HSV, ProlooksHSVClass))

typedef struct _ProlooksHSV ProlooksHSV;
typedef struct _ProlooksHSVClass ProlooksHSVClass;
typedef struct _ProlooksHSVPrivate ProlooksHSVPrivate;
typedef struct _ProlooksParamSpecHSV ProlooksParamSpecHSV;

struct _CairoColor {
	GTypeInstance parent_instance;
	volatile int ref_count;
	CairoColorPrivate * priv;
};

struct _CairoColorClass {
	GTypeClass parent_class;
	void (*finalize) (CairoColor *self);
};

struct _CairoColorPrivate {
	double _red;
	double _green;
	double _blue;
	double _alpha;
};

struct _CairoParamSpecColor {
	GParamSpec parent_instance;
};

typedef enum  {
	PROLOOKS_BUTTON_STATE_NORMAL,
	PROLOOKS_BUTTON_STATE_PRESSED
} ProlooksButtonState;

typedef enum  {
	PROLOOKS_BUTTON_TYPE_PRESS_BUTTON,
	PROLOOKS_BUTTON_TYPE_TOGGLE_BUTTON
} ProlooksButtonType;

struct _ProlooksHSL {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ProlooksHSLPrivate * priv;
};

struct _ProlooksHSLClass {
	GTypeClass parent_class;
	void (*finalize) (ProlooksHSL *self);
};

struct _ProlooksHSLPrivate {
	double _hue;
	double _saturation;
	double _lightness;
};

struct _ProlooksParamSpecHSL {
	GParamSpec parent_instance;
};

struct _ProlooksHSV {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ProlooksHSVPrivate * priv;
};

struct _ProlooksHSVClass {
	GTypeClass parent_class;
	void (*finalize) (ProlooksHSV *self);
};

struct _ProlooksHSVPrivate {
	double _hue;
	double _saturation;
	double _value;
};

struct _ProlooksParamSpecHSV {
	GParamSpec parent_instance;
};


static gpointer cairo_color_parent_class = NULL;
static gpointer prolooks_hsl_parent_class = NULL;
static gpointer prolooks_hsv_parent_class = NULL;

gpointer cairo_color_ref (gpointer instance);
void cairo_color_unref (gpointer instance);
GParamSpec* cairo_param_spec_color (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void cairo_value_set_color (GValue* value, gpointer v_object);
void cairo_value_take_color (GValue* value, gpointer v_object);
gpointer cairo_value_get_color (const GValue* value);
GType cairo_color_get_type (void);
#define CAIRO_COLOR_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), CAIRO_TYPE_COLOR, CairoColorPrivate))
enum  {
	CAIRO_COLOR_DUMMY_PROPERTY
};
void cairo_color_set_red (CairoColor* self, double value);
void cairo_color_set_green (CairoColor* self, double value);
void cairo_color_set_blue (CairoColor* self, double value);
void cairo_color_set_alpha (CairoColor* self, double value);
CairoColor* cairo_color_new (double red, double green, double blue, double alpha);
CairoColor* cairo_color_construct (GType object_type, double red, double green, double blue, double alpha);
double cairo_color_get_red (CairoColor* self);
double cairo_color_get_green (CairoColor* self);
double cairo_color_get_blue (CairoColor* self);
double cairo_color_get_alpha (CairoColor* self);
CairoColor* cairo_color_copy (CairoColor* self);
void cairo_color_set_from_string (CairoColor* self, const char* webcolor);
CairoColor* cairo_color_new_from_string (const char* webcolor);
CairoColor* cairo_color_construct_from_string (GType object_type, const char* webcolor);
ProlooksHSL* prolooks_hsl_new (void);
ProlooksHSL* prolooks_hsl_construct (GType object_type);
gpointer prolooks_hsl_ref (gpointer instance);
void prolooks_hsl_unref (gpointer instance);
GParamSpec* prolooks_param_spec_hsl (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void prolooks_value_set_hsl (GValue* value, gpointer v_object);
void prolooks_value_take_hsl (GValue* value, gpointer v_object);
gpointer prolooks_value_get_hsl (const GValue* value);
GType prolooks_hsl_get_type (void);
void prolooks_hsl_from_cairo_color (ProlooksHSL* self, CairoColor* color);
double prolooks_hsl_get_lightness (ProlooksHSL* self);
void prolooks_hsl_set_lightness (ProlooksHSL* self, double value);
double prolooks_hsl_get_saturation (ProlooksHSL* self);
void prolooks_hsl_set_saturation (ProlooksHSL* self, double value);
CairoColor* prolooks_hsl_to_cairo_color (ProlooksHSL* self);
CairoColor* cairo_color_shade (CairoColor* self, double shade_factor);
void cairo_color_set_to (CairoColor* self, CairoColor* a_color);
void cairo_color_set_as_source_in (CairoColor* self, cairo_t* cr);
void cairo_color_add_color_stop_to (CairoColor* self, cairo_pattern_t* p, double offset);
CairoColor* prolooks_gdk_color_to_cairo (GdkColor* color);
void prolooks_color_from_string (const char* webcolor, GdkColor* result);
static void cairo_color_finalize (CairoColor* obj);
GType prolooks_button_state_get_type (void);
GType prolooks_button_type_get_type (void);
void prolooks_set_line_width_from_device (cairo_t* cr);
char* prolooks_color_to_string (GdkColor* color);
CairoColor* prolooks_cairo_color_from_string (const char* webcolor);
void prolooks_set_source_color (cairo_t* cr, GdkColor* color, double alpha);
void prolooks_gdk_color_to_cairo_color (GdkColor* color, double* red, double* green, double* blue);
void prolooks_cairo_color_to_gdk (CairoColor* cairo_color, GdkColor* result);
void prolooks_set_source_color_string (cairo_t* cr, const char* color, double alpha);
void prolooks_add_color_stop (cairo_pattern_t* p, double offset, GdkColor* color, double alpha);
void prolooks_add_color_stop_str (cairo_pattern_t* p, double offset, const char* color, double alpha);
cairo_pattern_t* prolooks_create_gradient (double x1, double y1, double x2, double y2, GdkColor* start, GdkColor* stop, double alpha_start, double alpha_stop);
cairo_pattern_t* prolooks_create_gradient_str (double x1, double y1, double x2, double y2, const char* start, const char* stop, double alpha_start, double alpha_stop);
void prolooks_rounded_rect (cairo_t* cr, double x, double y, double w, double h, double radius_x, double radius_y);
void prolooks_background_gradient (cairo_t* cr, double w, double h);
double prolooks_modula (double number, double divisor);
#define PROLOOKS_HSL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PROLOOKS_TYPE_HSL, ProlooksHSLPrivate))
enum  {
	PROLOOKS_HSL_DUMMY_PROPERTY
};
double prolooks_hsl_get_hue (ProlooksHSL* self);
char* prolooks_hsl_to_string (ProlooksHSL* self);
void prolooks_hsl_to_gdk_color (ProlooksHSL* self, GdkColor* result);
void prolooks_hsl_from_gdk_color (ProlooksHSL* self, GdkColor* color);
void prolooks_hsl_set_hue (ProlooksHSL* self, double value);
static void prolooks_hsl_finalize (ProlooksHSL* obj);
gpointer prolooks_hsv_ref (gpointer instance);
void prolooks_hsv_unref (gpointer instance);
GParamSpec* prolooks_param_spec_hsv (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void prolooks_value_set_hsv (GValue* value, gpointer v_object);
void prolooks_value_take_hsv (GValue* value, gpointer v_object);
gpointer prolooks_value_get_hsv (const GValue* value);
GType prolooks_hsv_get_type (void);
#define PROLOOKS_HSV_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), PROLOOKS_TYPE_HSV, ProlooksHSVPrivate))
enum  {
	PROLOOKS_HSV_DUMMY_PROPERTY
};
double prolooks_hsv_get_hue (ProlooksHSV* self);
double prolooks_hsv_get_saturation (ProlooksHSV* self);
double prolooks_hsv_get_value (ProlooksHSV* self);
char* prolooks_hsv_to_string (ProlooksHSV* self);
void prolooks_hsv_from_gdk_color (ProlooksHSV* self, GdkColor* color);
ProlooksHSV* prolooks_hsv_new_for_gdk_color (GdkColor* color);
ProlooksHSV* prolooks_hsv_construct_for_gdk_color (GType object_type, GdkColor* color);
void prolooks_hsv_from_cairo_color (ProlooksHSV* self, CairoColor* color);
ProlooksHSV* prolooks_hsv_new_for_cairo_color (CairoColor* color);
ProlooksHSV* prolooks_hsv_construct_for_cairo_color (GType object_type, CairoColor* color);
CairoColor* prolooks_hsv_to_cairo_color (ProlooksHSV* self);
void prolooks_hsv_to_gdk_color (ProlooksHSV* self, GdkColor* result);
void prolooks_hsv_set_value (ProlooksHSV* self, double value);
void prolooks_hsv_set_hue (ProlooksHSV* self, double value);
void prolooks_hsv_set_saturation (ProlooksHSV* self, double value);
ProlooksHSV* prolooks_hsv_new (void);
ProlooksHSV* prolooks_hsv_construct (GType object_type);
static void prolooks_hsv_finalize (ProlooksHSV* obj);
void prolooks_shade_color (GdkColor* orig, double shade_ratio, GdkColor* result);
GdkPixbuf* prolooks_cairo_image_surface_to_pixbuf (cairo_surface_t* surface);

#ifdef __cplusplus
} // extern "C" 
#endif

#endif /* __prolooks_helpers_h__ */
