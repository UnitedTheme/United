#ifndef UNITEDSTYLE_H
#define UNITEDSTYLE_H

#include <QCommonStyle>
#if QT_VERSION < 0x050000
#include <QPlastiqueStyle>
//#else

#endif

#if QT_VERSION < 0x050000
#include <QtGui>
#else
#include <QtWidgets>
#endif

class QPalette;

class UnitedStyle : public QCommonStyle
{
    Q_OBJECT

public:
    UnitedStyle();

    void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                       QPainter *painter, const QWidget *widget) const;

};

#endif // UNITEDSTYLE_H
