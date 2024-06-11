nmake clean
perl Configure VC-WIN64A --debug --prefix=D:\Programmes\Bulid_libraries\DLL\x64\Debug --openssldir=D:\Programmes\Bulid_libraries\SLL
nmake
nmake test
nmake install_sw
nmake clean

nmake clean
perl Configure VC-WIN64A --debug --prefix=D:\Programmes\Bulid_libraries\Lib\x64\Debug --openssldir=D:\Programmes\Bulid_libraries\SLL no-shared
nmake
nmake test
nmake install_sw
nmake clean
