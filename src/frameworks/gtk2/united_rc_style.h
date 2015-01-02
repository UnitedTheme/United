#ifndef UNITED_RC_STYLE_H
#define UNITED_RC_STYLE_H

#include <gtk/gtk.h>

#define UNITED_TYPE_RC_STYLE united_rc_style_get_type()

typedef struct
{
    GtkRcStyle parent;
} UnitedRcStyle;

typedef struct
{
    GtkRcStyleClass parent;
} UnitedRcStyleClass;

G_GNUC_INTERNAL void united_rc_style_register_types(GTypeModule *module);
G_GNUC_INTERNAL GType united_rc_style_get_type(void);

#endif // UNITED_RC_STYLE_H
