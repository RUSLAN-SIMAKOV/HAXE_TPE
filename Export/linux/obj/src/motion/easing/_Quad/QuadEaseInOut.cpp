// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing__Quad_QuadEaseInOut
#include <motion/easing/_Quad/QuadEaseInOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_38bf82ca1c21c873_49_new,"motion.easing._Quad.QuadEaseInOut","new",0xf6d78cb3,"motion.easing._Quad.QuadEaseInOut.new","motion/easing/Quad.hx",49,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_38bf82ca1c21c873_56_calculate,"motion.easing._Quad.QuadEaseInOut","calculate",0x7ed8d1f9,"motion.easing._Quad.QuadEaseInOut.calculate","motion/easing/Quad.hx",56,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_38bf82ca1c21c873_66_ease,"motion.easing._Quad.QuadEaseInOut","ease",0xffcd983b,"motion.easing._Quad.QuadEaseInOut.ease","motion/easing/Quad.hx",66,0xc538468c)
namespace motion{
namespace easing{
namespace _Quad{

void QuadEaseInOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_38bf82ca1c21c873_49_new)
            	}

Dynamic QuadEaseInOut_obj::__CreateEmpty() { return new QuadEaseInOut_obj; }

void *QuadEaseInOut_obj::_hx_vtable = 0;

Dynamic QuadEaseInOut_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QuadEaseInOut_obj > _hx_result = new QuadEaseInOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuadEaseInOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x12570a0f;
}

static ::motion::easing::IEasing_obj _hx_motion_easing__Quad_QuadEaseInOut__hx_motion_easing_IEasing= {
	( Float (::hx::Object::*)(Float))&::motion::easing::_Quad::QuadEaseInOut_obj::calculate,
	( Float (::hx::Object::*)(Float,Float,Float,Float))&::motion::easing::_Quad::QuadEaseInOut_obj::ease,
};

void *QuadEaseInOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing__Quad_QuadEaseInOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuadEaseInOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_38bf82ca1c21c873_56_calculate)
HXLINE(  58)		k = (k * ( (Float)(2) ));
HXDLIN(  58)		if ((k < 1)) {
HXLINE(  59)			return ((((Float)0.5) * k) * k);
            		}
HXLINE(  61)		return (((Float)-0.5) * (((k - ( (Float)(1) )) * (k - ( (Float)(3) ))) - ( (Float)(1) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseInOut_obj,calculate,return )

Float QuadEaseInOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_38bf82ca1c21c873_66_ease)
HXLINE(  68)		t = (t / (d / ( (Float)(2) )));
HXDLIN(  68)		if ((t < 1)) {
HXLINE(  69)			return ((((c / ( (Float)(2) )) * t) * t) + b);
            		}
HXLINE(  71)		return (((-(c) / ( (Float)(2) )) * (((t - ( (Float)(1) )) * (t - ( (Float)(3) ))) - ( (Float)(1) ))) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseInOut_obj,ease,return )


::hx::ObjectPtr< QuadEaseInOut_obj > QuadEaseInOut_obj::__new() {
	::hx::ObjectPtr< QuadEaseInOut_obj > __this = new QuadEaseInOut_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< QuadEaseInOut_obj > QuadEaseInOut_obj::__alloc(::hx::Ctx *_hx_ctx) {
	QuadEaseInOut_obj *__this = (QuadEaseInOut_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(QuadEaseInOut_obj), false, "motion.easing._Quad.QuadEaseInOut"));
	*(void **)__this = QuadEaseInOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

QuadEaseInOut_obj::QuadEaseInOut_obj()
{
}

::hx::Val QuadEaseInOut_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *QuadEaseInOut_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *QuadEaseInOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadEaseInOut_obj_sMemberFields[] = {
	HX_("calculate",66,95,6a,05),
	HX_("ease",ee,8b,0c,43),
	::String(null()) };

::hx::Class QuadEaseInOut_obj::__mClass;

void QuadEaseInOut_obj::__register()
{
	QuadEaseInOut_obj _hx_dummy;
	QuadEaseInOut_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.easing._Quad.QuadEaseInOut",41,b7,e8,82);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QuadEaseInOut_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QuadEaseInOut_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadEaseInOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadEaseInOut_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing
} // end namespace _Quad