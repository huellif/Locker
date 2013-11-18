symbian:{
TARGET.UID3 = 0x20071ae1
LIBS += -lavkon
VERSION = 1.2.0
    my_deployment.pkg_prerules += vendorinfo

    DEPLOYMENT += my_deployment

    vendorinfo += "%{\"huellifSoft\"}" ":\"huellifSoft\""
}
SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()

CONFIG -= qt
default_deployment.pkg_prerules -= pkg_depends_webkit
default_deployment.pkg_prerules -= pkg_depends_qt

INCLUDEPATH = C:\QtSDK\Symbian\SDKs\Symbian1Qt473\epoc32\include\