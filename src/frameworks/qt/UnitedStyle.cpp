#include <united.h>

#include "UnitedStyle.h"

UnitedStyle::UnitedStyle()
{
    united_init();
}

void UnitedStyle::drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                             QPainter *painter, const QWidget *widget) const
{
    // widget can be NULL
    /*if (!widget)
    {
        return;
    }*/

    params_t params;
    params.x = option->rect.x();
    params.y = option->rect.y();
    params.width = option->rect.width();
    params.height = option->rect.height();

    int state = 0;

    if (option->state & State_Enabled)
        state |= STATE_ENABLED;
    if (option->state & State_MouseOver)
        state |= STATE_MOUSEOVER;
    if (option->state & State_Sunken)
        state |= STATE_SUNKEN;
    if (option->state & State_Active)
        state |= STATE_ACTIVE;
    if (option->state & State_Enabled)
        state |= STATE_ENABLED;
    if (option->state & State_Selected)
        state |= STATE_SELECTED;

    if (option->state & State_Horizontal)
        state |= STATE_HORIZONTAL;

    // draw arrow
    if (option->state & State_UpArrow)
        state |= STATE_DRAW_ARROW_UP;
    if (option->state & State_DownArrow)
        state |= STATE_DRAW_ARROW_DOWN;

    // checked
    if (option->state & State_On)
        state |= STATE_ON;
    if (option->state & State_Off)
        state |= STATE_OFF;

    // sizes
    if (option->state & State_Small)
        state |= STATE_SIZE_SMALL;
    if (option->state & State_Mini)
        state |= STATE_SIZE_MINI;

    unsigned char *bitmap;

#define DRAW_PRIMITIVE(element) bitmap = draw_primitive(element, state, params); break;

    switch (element)
    {
    case PE_PanelButtonCommand:
        DRAW_PRIMITIVE(ELEMENT_BUTTON)
    case PE_IndicatorCheckBox:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_CHECKBOX)
    case PE_IndicatorArrowUp:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_ARROW_UP)
    case PE_IndicatorArrowDown:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_ARROW_DOWN)
    case PE_IndicatorArrowLeft:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_ARROW_LEFT)
    case PE_IndicatorArrowRight:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_ARROW_RIGHT)
    case PE_IndicatorSpinUp:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_SPIN_UP)
    case PE_IndicatorSpinDown:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_SPIN_DOWN)
    case PE_IndicatorButtonDropDown:
        DRAW_PRIMITIVE(ELEMENT_INDICATOR_ARROW_DOWN)
    default:
        DRAW_PRIMITIVE(ELEMENT_UNKNOWN)
        //QPlastiqueStyle::drawPrimitive(element, option, painter, widget);
        return;
    }

    QImage ci = QImage((uchar *)bitmap, params.width, params.height, QImage::Format_ARGB32);
    painter->drawImage(params.x, params.y, ci);
}
