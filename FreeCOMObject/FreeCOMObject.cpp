// FreeCOMObject.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "FreeCOMObject.h"
#include <ole2.h>

// 这是导出变量的一个示例
//FREECOMOBJECT_API int nFreeCOMObject=0;

// 这是导出函数的一个示例。
void ReleaseCOMObject(void* p)
{
    IUnknown* pUnknown = reinterpret_cast<IUnknown*>(p);
    if (pUnknown != nullptr)
    {
        pUnknown->Release();
        //MessageBoxA(0, "a", "v", 0);
    }
}



//// 这是已导出类的构造函数。
//CFreeCOMObject::CFreeCOMObject()
//{
//    return;
//}
