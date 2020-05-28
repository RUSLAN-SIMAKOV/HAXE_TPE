// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Quad_QuadEaseOut
#include <motion/easing/_Quad/QuadEaseOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_febde912600170d2_82_new,"motion.easing._Quad.QuadEaseOut","new",0x7cd73418,"motion.easing._Quad.QuadEaseOut.new","motion/easing/Quad.hx",82,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_febde912600170d2_91_calculate,"motion.easing._Quad.QuadEaseOut","calculate",0xf687931e,"motion.easing._Quad.QuadEaseOut.calculate","motion/easing/Quad.hx",91,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_febde912600170d2_98_ease,"motion.easing._Quad.QuadEaseOut","ease",0xb9806936,"motion.easing._Quad.QuadEaseOut.ease","motion/easing/Quad.hx",98,0xc538468c)
namespace motion{
namespace easing{
namespace _Quad{

void QuadEaseOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_febde912600170d2_82_new)
            	}

Dynamic QuadEaseOut_obj::__CreateEmpty() { return new QuadEaseOut_obj; }

void *QuadEaseOut_obj::_hx_vtable = 0;

Dynamic QuadEaseOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuadEaseOut_obj > _hx_result = new QuadEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuadEaseOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5291eb74;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Quad_QuadEaseOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Quad::QuadEaseOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Quad::QuadEaseOut_obj::ease,
};

void *QuadEaseOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Quad_QuadEaseOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuadEaseOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_febde912600170d2_91_calculate)
HXDLIN(  91)		return (-(k) * (k - ( (Float)(2) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseOut_obj,calculate,return )

Float QuadEaseOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_febde912600170d2_98_ease)
HXDLIN(  98)		t = (t / d);
HXDLIN(  98)		return (((-(c) * t) * (t - ( (Float)(2) ))) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseOut_obj,ease,return )


::hx::ObjectPtr< QuadEaseOut_obj > QuadEaseOut_obj::__new() {
	::hx::ObjectPtr< QuadEaseOut_obj > __this = new QuadEaseOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< QuadEaseOut_obj > QuadEaseOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	QuadEaseOut_obj *__this = (QuadEaseOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuadEaseOut_obj), false, "motion.easing._Quad.QuadEaseOut"));
	*(void **)__this = QuadEaseOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

QuadEaseOut_obj::QuadEaseOut_obj()
{
}

::hx::Val QuadEaseOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ::hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return ::hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *QuadEaseOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QuadEaseOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadEaseOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class QuadEaseOut_obj::__mClass;

void QuadEaseOut_obj::__register()
{
	QuadEaseOut_obj _hx_dummy;
	QuadEaseOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Quad.QuadEaseOut",26,88,7d,fb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuadEaseOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuadEaseOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadEaseOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadEaseOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Quad
