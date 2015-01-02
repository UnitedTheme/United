#include <gtk/gtk.h>

#include "united_style.h"
#include "united_rc_style.h"

G_DEFINE_DYNAMIC_TYPE(UnitedRcStyle, united_rc_style, GTK_TYPE_RC_STYLE)

static GtkStyle *united_rc_style_create_style(GtkRcStyle *rc_style)
{
    return GTK_STYLE(g_object_new(UNITED_TYPE_STYLE, NULL));
}

void united_rc_style_register_types(GTypeModule *module)
{
    united_rc_style_register_type(module);
}

static void united_rc_style_init(UnitedRcStyle *rc)
{
}

static void united_rc_style_class_init(UnitedRcStyleClass *this)
{
    GtkRcStyleClass *rc = GTK_RC_STYLE_CLASS(this);
    rc->create_style = united_rc_style_create_style;
}

static void united_rc_style_class_finalize(UnitedRcStyleClass *this)
{
}
