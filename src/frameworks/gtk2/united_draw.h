#ifndef UNITED_DRAW_H
#define UNITED_DRAW_H

#include <gtk/gtk.h>

#define DRAW_ARGS GtkStyle *style, \
                  GdkWindow *window, \
                  GtkStateType state_type, \
                  GtkShadowType shadow_type, \
                  GdkRectangle *area, \
                  GtkWidget *widget, \
                  const gchar *detail, \
                  gint x, gint y, gint width, gint height

void united_style_draw_handle(DRAW_ARGS, GtkOrientation orientation);
void united_style_draw_slider(DRAW_ARGS, GtkOrientation orientation);
void united_style_draw_shadow_gap(DRAW_ARGS, GtkPositionType gap_side, gint gap_x, gint gap_width);
void united_style_draw_focus(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, const gchar *detail, gint x, gint y, gint width, gint height);
void united_style_draw_box(DRAW_ARGS, GtkPositionType gap_side, gint gap_x, gint gap_width);
void united_style_draw_shadow(DRAW_ARGS);
void united_style_draw_box_gap(DRAW_ARGS, GtkPositionType gap_side, gint gap_x, gint gap_width);
void united_style_draw_extension(DRAW_ARGS, GtkPositionType gap_side);
void united_style_draw_option(DRAW_ARGS);
void united_style_draw_check(DRAW_ARGS);
void united_style_draw_flat_box(DRAW_ARGS);
void united_style_draw_vline(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, gchar *detail, gint y1, gint y2, gint x);
void united_style_draw_hline(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, gchar *detail, gint x1, gint x2, gint y);
void united_style_draw_resize_grip(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GdkRectangle *area, GtkWidget *widget, const gchar *detail, GdkWindowEdge edge, gint x, gint y, gint width, gint height);
void united_style_draw_tab(DRAW_ARGS);
void united_style_draw_arrow(GtkStyle *style, GdkWindow *window, GtkStateType state_type, GtkShadowType shadow, GdkRectangle *area, GtkWidget *widget, const gchar *detail, GtkArrowType arrow_type, gboolean fill, gint x, gint y, gint width, gint height);
void united_style_draw_layout(GtkStyle *style,
                              GdkWindow *window,
                              GtkStateType state_type,
                              gboolean use_text,
                              GdkRectangle *area,
                              GtkWidget *widget,
                              const gchar *detail, gint x, gint y, PangoLayout *layout);
GdkPixbuf *united_style_draw_render_icon(GtkStyle *style,
                                         const GtkIconSource *source,
                                         GtkTextDirection direction,
                                         GtkStateType state,
                                         GtkIconSize size,
                                         GtkWidget *widget,
                                         const char *detail);

#endif // UNITED_DRAW_H
