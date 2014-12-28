#include "UnitedStylePlugin.h"
#include "UnitedStyle.h"

QStringList UnitedStylePlugin::keys() const
{
    return QStringList() << "United";
}

QStyle *UnitedStylePlugin::create(const QString &key)
{
    if (key.toLower() == "united")
        return new UnitedStyle;
    return 0;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(UnitedStyle, UnitedStylePlugin)
#endif // QT_VERSION < 0x050000
