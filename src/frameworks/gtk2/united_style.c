#include <gtk/gtk.h>

#include <united.h>

#include "united_style.h"
#include "united_draw.h"

G_DEFINE_DYNAMIC_TYPE(UnitedStyle, united_style, GTK_TYPE_STYLE)

static void united_style_copy(GtkStyle *style, GtkStyle *src)
{
    UnitedStyle *cl_style = UNITED_STYLE(style);
    UnitedStyle *cl_src = UNITED_STYLE(src);

    GTK_STYLE_CLASS(united_style_parent_class)->copy(style, src);
}

static void united_style_realize(GtkStyle *style)
{
    GTK_STYLE_CLASS(united_style_parent_class)->realize(style);
}

static void united_style_unrealize(GtkStyle *style)
{
    GTK_STYLE_CLASS(united_style_parent_class)->unrealize(style);
}

static void united_style_init_from_rc(GtkStyle *style, GtkRcStyle *rc_style)
{
}

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

    style_class->copy = united_style_copy;
    style_class->realize = united_style_realize;
    style_class->unrealize = united_style_unrealize;
    style_class->init_from_rc = united_style_init_from_rc;
    style_class->draw_handle = united_style_draw_handle;
    style_class->draw_slider = united_style_draw_slider;
    style_class->draw_shadow_gap = united_style_draw_shadow_gap;
    style_class->draw_focus = united_style_draw_focus;
    style_class->draw_box = united_style_draw_box;
    style_class->draw_shadow = united_style_draw_shadow;
    style_class->draw_box_gap = united_style_draw_box_gap;
    style_class->draw_extension = united_style_draw_extension;
    style_class->draw_option = united_style_draw_option;
    style_class->draw_check = united_style_draw_check;
    style_class->draw_flat_box = united_style_draw_flat_box;
    style_class->draw_vline = united_style_draw_vline;
    style_class->draw_hline = united_style_draw_hline;
    style_class->draw_resize_grip = united_style_draw_resize_grip;
    style_class->draw_tab = united_style_draw_tab;
//    style_class->draw_arrow = united_style_draw_arrow;
    style_class->draw_layout = united_style_draw_layout;
//    style_class->render_icon = united_style_draw_render_icon;
}

static void united_style_class_finalize(UnitedStyleClass *this)
{
}
