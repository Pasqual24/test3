TEMPLATE = app
TARGET = GestionReferenceGUI
QT += core \
    gui
HEADERS += supprimerreferenceqt.h \
    afficherbibliographieqt.h \
    ajouterjournalqt.h \
    ajouterouvrageqt.h \
    gestionreferencegui.h
SOURCES += supprimerreferenceqt.cpp \
    afficherbibliographieqt.cpp \
    ajouterjournalqt.cpp \
    ajouterouvrageqt.cpp \
    main.cpp \
    gestionreferencegui.cpp
FORMS += supprimerreferenceqt.ui \
    afficherbibliographieqt.ui \
    ajouterjournalqt.ui \
    ajouterouvrageqt.ui \
    gestionreferencegui.ui
RESOURCES += 
LIBS += "../Source/Debug/libSource.a"
INCLUDEPATH += "../Source/."
