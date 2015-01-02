#ifndef UNITED_THEME_H
#define UNITED_THEME_H

#include <gtk/gtk.h>

typedef struct
{
    GtkStyle parent;
} UnitedStyle;

typedef struct
{
    GtkStyleClass parent;
} UnitedStyleClass;

G_GNUC_INTERNAL void united_style_register_types(GTypeModule *module);

#endif // UNITED_THEME_H
