#include <cairo/cairo-svg.h>

#include <united.h>

unsigned char *theme_draw_primitive(element_t element, int state, params_t params)
{
    cairo_t *cr;
    cairo_surface_t *surface;
    surface = cairo_image_surface_create(CAIRO_FORMAT_ARGB32, params.width, params.height);
    cr = cairo_create(surface);

    cairo_set_line_width(cr, 1);

    switch (element)
    {
    case ELEMENT_BUTTON:
        if (state & STATE_SUNKEN)
            cairo_set_source_rgb(cr, 0.85, 0.85, 0.85);
        else
            cairo_set_source_rgb(cr, 0.9, 0.9, 0.9);
        cairo_rectangle(cr, 1, 1, params.width - 2, params.height - 2);
        cairo_fill(cr);

        cairo_set_line_width(cr, 2);

        if (state & STATE_SUNKEN)
            cairo_set_source_rgb(cr, 0.3, 0.3, 0.3);
        else
            cairo_set_source_rgb(cr, 1, 1, 1);

        // draw top
        cairo_move_to(cr, 0, 0);
        cairo_line_to(cr, params.width, 0);

        // draw left
        cairo_move_to(cr, 0, 0);
        cairo_line_to(cr, 0, params.height);

        cairo_stroke(cr);

        if (state & STATE_SUNKEN)
            cairo_set_source_rgb(cr, 1, 1, 1);
        else
            cairo_set_source_rgb(cr, 0.4, 0.4, 0.4);

        // draw bottom
        cairo_move_to(cr, 0, params.height);
        cairo_line_to(cr, params.width, params.height);

        // draw right
        cairo_move_to(cr, params.width, 0);
        cairo_line_to(cr, params.width, params.height);

        cairo_stroke(cr);

        break;
    case ELEMENT_INDICATOR_SPIN_UP:
    case ELEMENT_INDICATOR_ARROW_UP:
        cairo_set_source_rgb(cr, 0, 0, 0);
        cairo_move_to(cr, 0, params.height / 4 * 3);
        cairo_line_to(cr, params.width / 2, params.height / 4);
        cairo_line_to(cr, params.width, params.height / 4 * 3);
        cairo_stroke(cr);
        break;
    case ELEMENT_INDICATOR_SPIN_DOWN:
    case ELEMENT_INDICATOR_ARROW_DOWN:
        cairo_set_source_rgb(cr, 0, 0, 0);
        cairo_move_to(cr, 0, params.height / 4);
        cairo_line_to(cr, params.width / 2, params.height / 4 * 3);
        cairo_line_to(cr, params.width, params.height / 4);
        cairo_stroke(cr);
        break;
    case ELEMENT_INDICATOR_CHECKBOX:
        cairo_set_source_rgb(cr, 0.85, 0.85, 0.85);
        cairo_rectangle(cr, 1, 1, params.width - 2, params.height - 2);
        cairo_fill(cr);

        cairo_set_line_width(cr, 2);

        cairo_set_source_rgb(cr, 0.3, 0.3, 0.3);

        // draw top
        cairo_move_to(cr, 0, 0);
        cairo_line_to(cr, params.width, 0);

        // draw left
        cairo_move_to(cr, 0, 0);
        cairo_line_to(cr, 0, params.height);

        cairo_stroke(cr);

        cairo_set_source_rgb(cr, 1, 1, 1);

        // draw bottom
        cairo_move_to(cr, 0, params.height);
        cairo_line_to(cr, params.width, params.height);

        // draw right
        cairo_move_to(cr, params.width, 0);
        cairo_line_to(cr, params.width, params.height);

        cairo_stroke(cr);

        if (state & STATE_ON)
        {
            cairo_set_source_rgb(cr, 0, 0.5, 0);
            cairo_move_to(cr, params.width / 4, params.height / 4);
            cairo_line_to(cr, params.width / 4 * 3, params.height / 4 * 3);

            cairo_move_to(cr, params.width / 4 * 3, params.height / 4);
            cairo_line_to(cr, params.width / 4, params.height / 4 * 3);
            cairo_stroke(cr);
        }
        break;
    case ELEMENT_UNKNOWN:
    default:
        cairo_set_source_rgb(cr, 0.5, 0, 0);
        cairo_rectangle(cr, 0, 0, params.width, params.height);
        cairo_set_line_width(cr, 1);
        cairo_stroke(cr);
    }

    return cairo_image_surface_get_data(surface);
}
