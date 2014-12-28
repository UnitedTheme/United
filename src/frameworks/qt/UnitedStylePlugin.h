#ifndef UNITEDTHEMEPLUGIN_H
#define UNITEDTHEMEPLUGIN_H

#include <QStylePlugin>


class UnitedStylePlugin : public QStylePlugin
{
    Q_OBJECT
#if QT_VERSION >= 0x050000
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QStyleFactoryInterface" FILE "United.json")
#endif // QT_VERSION >= 0x050000

public:
    QStringList keys() const;
    QStyle *create(const QString &key);
};

#endif // UNITEDTHEMEPLUGIN_H
