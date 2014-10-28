TEMPLATE = app
TARGET = minstall
TRANSLATIONS += translations/ts/mx-minstall_de.ts \
                translations/ts/mx-minstall_es.ts \
		translations/ts/mx-minstall_fr.ts \
       		translations/ts/mx-minstall_pt_BR.ts \
		translations/ts/mx-minstall_ca.ts \
		translations/ts/mx-minstall_nl.ts \
		translations/ts/mx-minstall_pl.ts \ 
                translations/ts/mx-minstall_pt.ts \
                translations/ts/mx-minstall_sv.ts \
                translations/ts/mx-minstall_cs.ts \
                translations/ts/mx-minstall_el.ts \
                translations/ts/mx-minstall_hu.ts \ 
                translations/ts/mx-minstall_ro.ts \
                translations/ts/mx-minstall_uk.ts 
FORMS += memain.ui meinstall.ui 
HEADERS += mmain.h minstall.h 
SOURCES += app.cpp mmain.cpp minstall.cpp 
LIBS += -lcrypt
CONFIG += release warn_on thread qt
