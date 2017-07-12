// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME gallery_framework_testingCint

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "tester.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *galleryfmwkcLcLtester_Dictionary();
   static void galleryfmwkcLcLtester_TClassManip(TClass*);
   static void *new_galleryfmwkcLcLtester(void *p = 0);
   static void *newArray_galleryfmwkcLcLtester(Long_t size, void *p);
   static void delete_galleryfmwkcLcLtester(void *p);
   static void deleteArray_galleryfmwkcLcLtester(void *p);
   static void destruct_galleryfmwkcLcLtester(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::galleryfmwk::tester*)
   {
      ::galleryfmwk::tester *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::galleryfmwk::tester));
      static ::ROOT::TGenericClassInfo 
         instance("galleryfmwk::tester", "tester.h", 44,
                  typeid(::galleryfmwk::tester), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &galleryfmwkcLcLtester_Dictionary, isa_proxy, 4,
                  sizeof(::galleryfmwk::tester) );
      instance.SetNew(&new_galleryfmwkcLcLtester);
      instance.SetNewArray(&newArray_galleryfmwkcLcLtester);
      instance.SetDelete(&delete_galleryfmwkcLcLtester);
      instance.SetDeleteArray(&deleteArray_galleryfmwkcLcLtester);
      instance.SetDestructor(&destruct_galleryfmwkcLcLtester);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::galleryfmwk::tester*)
   {
      return GenerateInitInstanceLocal((::galleryfmwk::tester*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::galleryfmwk::tester*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *galleryfmwkcLcLtester_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::galleryfmwk::tester*)0x0)->GetClass();
      galleryfmwkcLcLtester_TClassManip(theClass);
   return theClass;
   }

   static void galleryfmwkcLcLtester_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_galleryfmwkcLcLtester(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::galleryfmwk::tester : new ::galleryfmwk::tester;
   }
   static void *newArray_galleryfmwkcLcLtester(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::galleryfmwk::tester[nElements] : new ::galleryfmwk::tester[nElements];
   }
   // Wrapper around operator delete
   static void delete_galleryfmwkcLcLtester(void *p) {
      delete ((::galleryfmwk::tester*)p);
   }
   static void deleteArray_galleryfmwkcLcLtester(void *p) {
      delete [] ((::galleryfmwk::tester*)p);
   }
   static void destruct_galleryfmwkcLcLtester(void *p) {
      typedef ::galleryfmwk::tester current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::galleryfmwk::tester

namespace {
  void TriggerDictionaryInitialization_libgallery_framework_testing_Impl() {
    static const char* headers[] = {
"tester.h",
0
    };
    static const char* includePaths[] = {
"/grid/fermiapp/products/larsoft/gallery/v1_03_08/include",
"/grid/fermiapp/products/larsoft/boost/v1_61_0/Linux64bit+2.6-2.12-e10-prof/include",
"/grid/fermiapp/products/larsoft/canvas/v1_05_01/include",
"/grid/fermiapp/products/larsoft/cetlib/v1_21_00/include",
"/grid/fermiapp/products/larsoft/fhiclcpp/v4_02_00/include",
"/grid/fermiapp/products/larsoft/lardataobj/v1_13_00/include",
"/grid/fermiapp/products/larsoft/nusimdata/v1_06_01/include",
"/grid/fermiapp/products/larsoft/larcoreobj/v1_06_02/include",
"/grid/fermiapp/products/larsoft/messagefacility/v1_18_00/include",
"/uboone/app/users/mdeltutt/gf_develop/core",
"/grid/fermiapp/products/larsoft/root/v6_06_08/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/uboone/app/users/mdeltutt/gf_develop/UserDev/Testing/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libgallery_framework_testing dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace galleryfmwk{class __attribute__((annotate("$clingAutoload$tester.h")))  tester;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libgallery_framework_testing dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "tester.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"galleryfmwk::tester", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libgallery_framework_testing",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libgallery_framework_testing_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libgallery_framework_testing_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libgallery_framework_testing() {
  TriggerDictionaryInitialization_libgallery_framework_testing_Impl();
}
