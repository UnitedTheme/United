#ifndef UNITED_H
#define UNITED_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ELEMENT_UNKNOWN,
    ELEMENT_BUTTON,
    ELEMENT_FRAME,
    ELEMENT_TAB,
    ELEMENT_INDICATOR_CHECKBOX,
    ELEMENT_INDICATOR_ARROW_UP,
    ELEMENT_INDICATOR_ARROW_DOWN,
    ELEMENT_INDICATOR_ARROW_LEFT,
    ELEMENT_INDICATOR_ARROW_RIGHT,
    ELEMENT_INDICATOR_SPIN_UP,
    ELEMENT_INDICATOR_SPIN_DOWN,
} element_t;

typedef enum {
    CONTROL_UNKNOWN,
    CONTROL_SPINBOX,
    CONTROL_COMBOBOX,
    CONTROL_SCROLLBAR,
    CONTROL_SLIDER,
    CONTROL_TOOLBUTTON,
    CONTROL_TITLEBAR,
    CONTROL_GROUPBOX,
    CONTROL_DIAL,
    CONTROL_MDICONTROLS,
} control_t;

typedef enum {
    STATE_NORMAL            = 0x00000000,
    STATE_ENABLED           = 0x00000001,
    STATE_MOUSEOVER         = 0x00000082,
    STATE_SUNKEN            = 0x00000004,
    STATE_ACTIVE            = 0x00000008,
    STATE_SELECTED          = 0x00000010,
    STATE_HORIZONTAL        = 0x00000020,

    // checked
    STATE_ON                = 0x00000040,
    STATE_OFF               = 0x00000080,

    // draw arrows
    STATE_DRAW_ARROW_DOWN   = 0x00000100,
    STATE_DRAW_ARROW_UP     = 0x00000200,

    // sizes
    STATE_SIZE_SMALL        = 0x04000000,
    STATE_SIZE_MINI         = 0x08000000,
} state_t;

typedef struct {
    int x;
    int y;
    int width;
    int height;
} params_t;

unsigned char *draw_primitive(element_t element, int state, params_t params);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // UNITED_H
