TEMPLATE = app
TARGET = GestionBibliographieGUI
QT += core \
    gui
HEADERS += ajouterjournal.h \
    referenceqt.h \
    gestionbibliographiegui.h
SOURCES += ajouterjournal.cpp \
    referenceqt.cpp \
    main.cpp \
    gestionbibliographiegui.cpp
FORMS += ajouterjournal.ui \
    referenceqt.ui \
    gestionbibliographiegui.ui
RESOURCES += 
LIBS += "../Source/Debug/libSource.a"
INCLUDEPATH += "../Source/."
