TEMPLATE = app
TARGET = minstall
TRANSLATIONS += translations/mx-minstall_de.ts \
                translations/mx-minstall_es.ts \
		translations/mx-minstall_fr.ts \
       		translations/mx-minstall_pt_BR.ts \
		translations/mx-minstall_ca.ts \
		translations/mx-minstall_nl.ts \
		translations/mx-minstall_pl.ts \ 
                translations/mx-minstall_pt.ts \
                translations/mx-minstall_sv.ts \
                translations/mx-minstall_cs.ts \
                translations/mx-minstall_el.ts \
                translations/mx-minstall_hu.ts \ 
                translations/mx-minstall_ro.ts \
                translations/mx-minstall_uk.ts 
FORMS += memain.ui meinstall.ui 
HEADERS += mmain.h minstall.h 
SOURCES += app.cpp mmain.cpp minstall.cpp 
LIBS += -lcrypt
CONFIG += release warn_on thread qt
