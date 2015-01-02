#include <gmodule.h>
#include <gtk/gtk.h>

void theme_init(GTypeModule *module)
{
    united_style_register_types(module);
}

void theme_exit(void)
{
}

GtkRcStyle *theme_create_rc_style(void)
{
    return NULL;
}
