symbian:{
TARGET.UID3 = 0x20071ae1
LIBS += -lavkon -lcone

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
