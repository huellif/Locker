symbian:{
TARGET.UID3 = 0x20071ae1
LIBS += -lavkon -lapparc -lapgrfx
VERSION = 1.1.0
    my_deployment.pkg_prerules += vendorinfo

    DEPLOYMENT += my_deployment

    vendorinfo += "%{\"huellifSoft\"}" ":\"huellifSoft\""
}
SOURCES += main.cpp

include(deployment.pri)
qtcAddDeployment()
