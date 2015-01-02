#ifndef UNITED_STYLE_H
#define UNITED_STYLE_H

#include <gtk/gtk.h>

#define UNITED_TYPE_STYLE united_style_get_type()
#define UNITED_STYLE(object) G_TYPE_CHECK_INSTANCE_CAST((object), UNITED_TYPE_STYLE, UnitedStyle)

typedef struct
{
    GtkStyle parent;
} UnitedStyle;

typedef struct
{
    GtkStyleClass parent;
} UnitedStyleClass;

G_GNUC_INTERNAL void united_style_register_types(GTypeModule *module);
G_GNUC_INTERNAL GType united_style_get_type(void);

#endif // UNITED_THEME_H
