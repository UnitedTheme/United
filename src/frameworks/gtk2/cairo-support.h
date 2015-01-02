#ifndef CAIRO_SUPPORT_H
#define CAIRO_SUPPORT_H

#include <cairo.h>
#include <gtk/gtk.h>

G_GNUC_INTERNAL cairo_t *ge_gdk_drawable_to_cairo(GdkDrawable *window, GdkRectangle *area);

#endif
