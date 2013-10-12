import ctypes
array1=(ctypes.c_float*6)(1.1,2.1,3.1,4.1,5.1,6.1)
array2=(ctypes.c_float*6)()
so = ctypes.CDLL("./dist/Debug/GNU-Linux-x86/libpythonCallCExample.so")
sum = so.sum
sum.restype = ctypes.POINTER(ctypes.c_float*6)
array3=sum(array1, array2, 6)
array3.contents
for tmp in array3.contents : 
    print tmp



