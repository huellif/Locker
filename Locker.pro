symbian:{
TARGET.UID3 = 0x20071ae1
LIBS += -lavkon
my_deployment.pkg_prerules += vendorinfo
DEPLOYMENT += my_deployment
vendorinfo += "%{\"huellifSoft\"}" ":\"huellifSoft\""
ICON = Locker.svg
}

SOURCES += main.cpp
VERSION = 1.3.0
CONFIG -= qt
default_deployment.pkg_prerules -= pkg_depends_webkit
default_deployment.pkg_prerules -= pkg_depends_qt

INCLUDEPATH += C:/QtSDK/Symbian/SDKs/SymbianSR1Qt474/epoc32/include/
INCLUDEPATH += C:/QtSDK/Symbian/SDKs/SymbianSR1Qt474/epoc32/include/platform/
INCLUDEPATH += C:/QtSDK/Symbian/SDKs/SymbianSR1Qt474/epoc32/include/platform/mw/
INCLUDEPATH += C:/QtSDK/Symbian/SDKs/SymbianSR1Qt474/epoc32/include/mw/
INCLUDEPATH += C:/QtSDK/Symbian/SDKs/SymbianSR1Qt474/epoc32/include/bafl/
