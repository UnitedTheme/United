#include <gtk/gtk.h>

#include "united_theme.h"

G_DEFINE_DYNAMIC_TYPE(UnitedStyle, united_style, GTK_TYPE_STYLE)

void united_style_register_types(GTypeModule *module)
{
    united_style_register_type(module);
}

static void united_style_init(UnitedStyle *style)
{
}

static void united_style_class_init(UnitedStyleClass *this)
{
    GtkStyleClass *style_class = GTK_STYLE_CLASS(this);

    style_class->copy = NULL;
    style_class->realize = NULL;
    style_class->unrealize = NULL;
    style_class->init_from_rc = NULL;
    style_class->draw_handle = NULL;
    style_class->draw_slider = NULL;
    style_class->draw_shadow_gap = NULL;
    style_class->draw_focus = NULL;
    style_class->draw_box = NULL;
    style_class->draw_shadow = NULL;
    style_class->draw_box_gap = NULL;
    style_class->draw_extension = NULL;
    style_class->draw_option = NULL;
    style_class->draw_check = NULL;
    style_class->draw_flat_box = NULL;
    style_class->draw_vline = NULL;
    style_class->draw_hline = NULL;
    style_class->draw_resize_grip = NULL;
    style_class->draw_tab = NULL;
    style_class->draw_arrow = NULL;
    style_class->draw_layout = NULL;
    style_class->render_icon = NULL;
}

static void united_style_class_finalize(UnitedStyleClass *this)
{
}
