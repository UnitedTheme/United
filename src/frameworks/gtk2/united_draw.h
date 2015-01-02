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

 void united_style_draw_handle(DRAW_ARGS);
 void united_style_draw_slider(DRAW_ARGS);
 void united_style_draw_shadow_gap(DRAW_ARGS);
 void united_style_draw_focus(DRAW_ARGS);
 void united_style_draw_box(DRAW_ARGS);
 void united_style_draw_shadow(DRAW_ARGS);
 void united_style_draw_box_gap(DRAW_ARGS);
 void united_style_draw_extension(DRAW_ARGS);
 void united_style_draw_option(DRAW_ARGS);
 void united_style_draw_check(DRAW_ARGS);
 void united_style_draw_flat_box(DRAW_ARGS);
 void united_style_draw_vline(DRAW_ARGS);
 void united_style_draw_hline(DRAW_ARGS);
 void united_style_draw_resize_grip(DRAW_ARGS);
 void united_style_draw_tab(DRAW_ARGS);
 void united_style_draw_arrow(DRAW_ARGS);
 void united_style_draw_layout(DRAW_ARGS);
 void united_style_draw_render_icon(DRAW_ARGS);

#endif // UNITED_DRAW_H
