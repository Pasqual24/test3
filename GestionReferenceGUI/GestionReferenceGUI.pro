TEMPLATE = app
TARGET = GestionReferenceGUI
QT += core \
    gui
HEADERS += ajouterjournalqt.h \
    ajouterouvrageqt.h \
    gestionreferencegui.h
SOURCES += ajouterjournalqt.cpp \
    ajouterouvrageqt.cpp \
    main.cpp \
    gestionreferencegui.cpp
FORMS += ajouterjournalqt.ui \
    ajouterouvrageqt.ui \
    gestionreferencegui.ui
RESOURCES += 
LIBS += "../Source/Debug/libSource.a"
INCLUDEPATH += "../Source/."
