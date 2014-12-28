United
======

United is an attempt for unified Linux (and other X11-based like BSD-family) visual appearance.
The general idea is to ask libUnited for theme bitmaps, size hints and similar things by native frameworks code and to show it to user in the same way everywhere.
It's also easier to create themes -- you just do it once!

Architecture
============

Every GUI Toolkit library have it's own shared library for theming.
In Qt it's called "Qt Plugin", in GTK it's called "Engine". All of them asks libUnited for bitmap with certain parameters. libUnited "redirects" request for themeloader (what can be single theme, or full "engine" similar to gtk engines or to QtCurve which has it's own subthemes). Then themeloader draws control and finally returns bitmap to Qt/GTK/anything
