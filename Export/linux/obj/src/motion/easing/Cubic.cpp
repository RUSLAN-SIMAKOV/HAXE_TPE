// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_Cubic
#include <motion/easing/Cubic.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Cubic_CubicEaseIn
#include <motion/easing/_Cubic/CubicEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing__Cubic_CubicEaseInOut
#include <motion/easing/_Cubic/CubicEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing__Cubic_CubicEaseOut
#include <motion/easing/_Cubic/CubicEaseOut.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1b98614182daa726_12_boot,"motion.easing.Cubic","boot",0x9e8098a1,"motion.easing.Cubic.boot","motion/easing/Cubic.hx",12,0x157bb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_1b98614182daa726_13_boot,"motion.easing.Cubic","boot",0x9e8098a1,"motion.easing.Cubic.boot","motion/easing/Cubic.hx",13,0x157bb7df)
HX_LOCAL_STACK_FRAME(_hx_pos_1b98614182daa726_14_boot,"motion.easing.Cubic","boot",0x9e8098a1,"motion.easing.Cubic.boot","motion/easing/Cubic.hx",14,0x157bb7df)
namespace motion{
namespace easing{

void Cubic_obj::__construct() { }

Dynamic Cubic_obj::__CreateEmpty() { return new Cubic_obj; }

void *Cubic_obj::_hx_vtable = 0;

Dynamic Cubic_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Cubic_obj > _hx_result = new Cubic_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Cubic_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76772229;
}

::Dynamic Cubic_obj::easeIn;

::Dynamic Cubic_obj::easeInOut;

::Dynamic Cubic_obj::easeOut;


Cubic_obj::Cubic_obj()
{
}

bool Cubic_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { outValue = ( easeIn ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { outValue = ( easeOut ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { outValue = ( easeInOut ); return true; }
	}
	return false;
}

bool Cubic_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"easeIn") ) { easeIn=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"easeOut") ) { easeOut=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"easeInOut") ) { easeInOut=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Cubic_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Cubic_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Cubic_obj::easeIn,HX_("easeIn",73,23,3a,88)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Cubic_obj::easeInOut,HX_("easeInOut",db,9e,bd,46)},
	{::hx::fsObject /* ::Dynamic */ ,(void *) &Cubic_obj::easeOut,HX_("easeOut",40,75,a9,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Cubic_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cubic_obj::easeIn,"easeIn");
	HX_MARK_MEMBER_NAME(Cubic_obj::easeInOut,"easeInOut");
	HX_MARK_MEMBER_NAME(Cubic_obj::easeOut,"easeOut");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Cubic_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cubic_obj::easeIn,"easeIn");
	HX_VISIT_MEMBER_NAME(Cubic_obj::easeInOut,"easeInOut");
	HX_VISIT_MEMBER_NAME(Cubic_obj::easeOut,"easeOut");
};

#endif

::hx::Class Cubic_obj::__mClass;

static ::String Cubic_obj_sStaticFields[] = {
	HX_("easeIn",73,23,3a,88),
	HX_("easeInOut",db,9e,bd,46),
	HX_("easeOut",40,75,a9,aa),
	::String(null())
};

void Cubic_obj::__register()
{
	Cubic_obj _hx_dummy;
	Cubic_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing.Cubic",5f,a2,45,31);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cubic_obj::__GetStatic;
	__mClass->mSetStaticField = &Cubic_obj::__SetStatic;
	__mClass->mMarkFunc = Cubic_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Cubic_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Cubic_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Cubic_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Cubic_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Cubic_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Cubic_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_1b98614182daa726_12_boot)
HXDLIN(  12)		easeIn =  ::motion::easing::_Cubic::CubicEaseIn_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1b98614182daa726_13_boot)
HXDLIN(  13)		easeInOut =  ::motion::easing::_Cubic::CubicEaseInOut_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_1b98614182daa726_14_boot)
HXDLIN(  14)		easeOut =  ::motion::easing::_Cubic::CubicEaseOut_obj::__alloc( HX_CTX );
            	}
}

} // end namespace motion
} // end namespace easing
