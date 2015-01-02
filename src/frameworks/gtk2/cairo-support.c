#include "cairo-support.h"

cairo_t *ge_gdk_drawable_to_cairo(GdkDrawable *window, GdkRectangle *area)
{
    cairo_t *cr;

    g_return_val_if_fail(window != NULL, NULL);

    cr = (cairo_t *)gdk_cairo_create(window);
    cairo_set_line_width(cr, 1.0);
    cairo_set_line_cap(cr, CAIRO_LINE_CAP_SQUARE);
    cairo_set_line_join(cr, CAIRO_LINE_JOIN_MITER);

    if (area)
    {
        cairo_rectangle(cr, area->x, area->y, area->width, area->height);
        cairo_clip_preserve(cr);
        cairo_new_path(cr);
    }

    return cr;
}
