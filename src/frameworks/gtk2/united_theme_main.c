#include <gmodule.h>
#include <gtk/gtk.h>

#include <united.h>

#include "united_style.h"
#include "united_rc_style.h"

void theme_init(GTypeModule *module)
{
    united_init();

    united_rc_style_register_types(module);
    united_style_register_types(module);
}

void theme_exit(void)
{
}

GtkRcStyle *theme_create_rc_style(void)
{
    return GTK_RC_STYLE(g_object_new(UNITED_TYPE_RC_STYLE, NULL));
}
