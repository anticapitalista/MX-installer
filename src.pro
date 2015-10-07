QT       += core gui widgets

TEMPLATE = app
TARGET = minstall
TRANSLATIONS += translations/mx-installer_ca.ts \
                translations/mx-installer_cs.ts \
                translations/mx-installer_de.ts \
                translations/mx-installer_el.ts \
                translations/mx-installer_es.ts \
                translations/mx-installer_fr.ts \
                translations/mx-installer_hu.ts \
                translations/mx-installer_it.ts \
                translations/mx-installer_ja.ts \
                translations/mx-installer_nl.ts \
                translations/mx-installer_pl.ts \
                translations/mx-installer_pt_BR.ts \
                translations/mx-installer_pt.ts \
                translations/mx-installer_ro.ts \
                translations/mx-installer_ru.ts \
                translations/mx-installer_sv.ts \
                translations/mx-installer_uk.ts
FORMS += memain.ui meinstall.ui
HEADERS += mmain.h minstall.h
SOURCES += app.cpp mmain.cpp minstall.cpp
LIBS += -lcrypt
CONFIG += release warn_on thread qt
