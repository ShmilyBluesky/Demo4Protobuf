# all platforms
INCLUDEPATH += $$PWD/include

win32{
# mingw
*mingw*{
LIBS += -L$$PWD/lib/windows_mingw -lprotobuf
}
# vs
else{
LIBS += -L$$PWD/lib/windows_vs -lprotobuf
}
}
# linux
unix{
LIBS += -L$$PWD/lib/linux -lprotobuf
}