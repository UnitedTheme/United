#include <cairo.h>

#include <united.h>

#include "united_draw.h"

#define DRAW_PRIMITIVE(element) unsigned char *data = draw_primitive(element, state, uparams); \
                                int stride = cairo_format_stride_for_width (CAIRO_FORMAT_ARGB32, width); \
                                cairo_surface_t *extdata = cairo_image_surface_create_for_data(data, CAIRO_FORMAT_ARGB32, width, height, stride); \
                                cairo_set_source_surface(cr, extdata, 0, 0); \
                                cairo_paint(cr);

void united_style_draw_handle(DRAW_ARGS, GtkOrientation orientation)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_slider(DRAW_ARGS, GtkOrientation orientation)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_BUTTON)

    cairo_destroy(cr);
}

void united_style_draw_shadow_gap(DRAW_ARGS, GtkPositionType gap_side, gint gap_x, gint gap_width)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_focus(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, const gchar *detail, gint x, gint y, gint width, gint height)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_box(DRAW_ARGS, GtkPositionType gap_side, gint gap_x, gint gap_width)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    if (state_type == GTK_STATE_ACTIVE) state |= STATE_SUNKEN;
    if (state_type == GTK_STATE_PRELIGHT) state |= STATE_MOUSEOVER;
//    if (state_type == GTK_STATE_INSENSITIVE) state |= STATE_INACTIVE;
    DRAW_PRIMITIVE(ELEMENT_BUTTON)

    cairo_destroy(cr);
}

void united_style_draw_shadow(DRAW_ARGS)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_box_gap(DRAW_ARGS, GtkPositionType gap_side, gint gap_x, gint gap_width)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_extension(DRAW_ARGS, GtkPositionType gap_side)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_option(DRAW_ARGS)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_check(DRAW_ARGS)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate (cr, x, y);
    params_t uparams;
    uparams.x = 0;
    uparams.y = 0;
    uparams.width = width;
    uparams.height = height;

    int state;
    if (shadow_type == GTK_SHADOW_IN) state |= STATE_ON;

    DRAW_PRIMITIVE(ELEMENT_INDICATOR_CHECKBOX)

    cairo_destroy(cr);
}

void united_style_draw_flat_box(DRAW_ARGS)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_vline(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, gchar *detail, gint y1, gint y2, gint x)
{
}

void united_style_draw_hline(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, gchar *detail, gint x1, gint x2, gint y)
{
}

void united_style_draw_resize_grip(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, const gchar *detail, GdkWindowEdge edge, gint x, gint y, gint width, gint height)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_tab(DRAW_ARGS)
{
    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);
}

void united_style_draw_arrow(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GtkShadowType shadow, GdkRectangle *area, GtkWidget *widget, const gchar *detail, GtkArrowType arrow_type, gboolean fill, gint x, gint y, gint width, gint height)
{
}

void united_style_draw_layout(GtkStyle *style,
                              GdkWindow *window,
                              GtkStateType state_type,
                              gboolean use_text,
                              GdkRectangle *area,
                              GtkWidget *widget,
                              const gchar *detail, gint x, gint y, PangoLayout *layout)
{
    GdkGC *gc;

    g_return_if_fail(GTK_IS_STYLE (style));
    g_return_if_fail(window != NULL);

    gc = use_text ? style->text_gc[state_type] : style->fg_gc[state_type];

    if (area)
        gdk_gc_set_clip_rectangle(gc, area);

    GdkColor etched;

    etched.red = (int) (0xff * 65535);
    etched.green = (int) (0x00 * 65535);
    etched.blue = (int) (0x12 * 65535);

//    gdk_draw_layout_with_colors (window, gc, x + 1, y + 1, layout, &etched, NULL);
    gdk_draw_layout(window, gc, x, y, layout);

    if (area)
        gdk_gc_set_clip_rectangle(gc, NULL);
/*    cairo_t *cr;
    cr = ge_gdk_drawable_to_cairo(window, area);

    int width = gdk_window_get_width(window);
    int height = gdk_window_get_height(window);

    cairo_translate(cr, x, y);
    params_t uparams;
    uparams.width = width;
    uparams.height = height;
    int state = 0;
    DRAW_PRIMITIVE(ELEMENT_UNKNOWN)

    cairo_destroy(cr);*/
}

GdkPixbuf *united_style_draw_render_icon(GtkStyle *style,
                                         const GtkIconSource *source,
                                         GtkTextDirection direction,
                                         GtkStateType state,
                                         GtkIconSize size,
                                         GtkWidget *widget,
                                         const char *detail)
{
    return NULL;
}

