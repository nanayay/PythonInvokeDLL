import ctypes
import os

cdllHandle = ctypes.cdll.LoadLibrary(os.path.join(os.getcwd(), r'..\\', r'Debug', r'DLL.dll'))
x = cdllHandle.fnDLL()
print x

windllHandle = ctypes.windll.LoadLibrary(os.path.join(os.getcwd(), r'..\\', r'Debug', r'DLL.dll'))
y = windllHandle.fnDLL2()
print y

z = cdllHandle.fnDLL3()
print z

