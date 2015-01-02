#include <gtk/gtk.h>

#include "united_rc_style.h"

G_DEFINE_DYNAMIC_TYPE(UnitedRcStyle, united_rc_style, GTK_TYPE_RC_STYLE)

void united_rc_style_register_types(GTypeModule *module)
{
    united_rc_style_register_type(module);
}

static void united_rc_style_init(UnitedRcStyle *rc)
{
    printf("united_rc_style_init();\n");
}

static void united_rc_style_class_init(UnitedRcStyleClass *this)
{
}

static void united_rc_style_class_finalize(UnitedRcStyleClass *this)
{
}
