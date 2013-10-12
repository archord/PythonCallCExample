import ctypes

class StarList(ctypes.Structure):
   _fields_ = [("id",ctypes.c_int),
              ("ra",ctypes.c_float),
              ("dec",ctypes.c_float)]

length = (ctypes.c_int)(6)
starlists = (StarList*6)()

i=1;
for tmp in starlists : 
    tmp.id = i
    tmp.ra = i + 0.1
    tmp.dec = i + 1.1
    i=i+1

so = ctypes.CDLL("./dist/Debug/GNU-Linux-x86/libpythonCallCExample.so")
sum = so.sum1
sum(ctypes.byref(starlists), length)

for tmp in starlists : 
    print tmp.dec





