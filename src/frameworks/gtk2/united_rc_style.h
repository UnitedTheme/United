#ifndef UNITED_RC_STYLE_H
#define UNITED_RC_STYLE_H

#include <gtk/gtk.h>

#define UNITED_TYPE_RC_STYLE united_rc_style_get_type()
#define UNITED_RC_STYLE(object) G_TYPE_CHECK_INSTANCE_CAST((object), UNITED_TYPE_RC_STYLE, UnitedRcStyle)

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
