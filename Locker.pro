symbian:{
TARGET.UID3 = 0x20071ae1
LIBS += -lavkon
}

SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()
