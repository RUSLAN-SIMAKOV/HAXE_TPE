// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth32
#include <lime/graphics/opengl/ext/OES_depth32.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ffc0fa1babf247a6_6_new,"lime.graphics.opengl.ext.OES_depth32","new",0xb9bbf1f0,"lime.graphics.opengl.ext.OES_depth32.new","lime/graphics/opengl/ext/OES_depth32.hx",6,0xef831ba2)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_depth32_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ffc0fa1babf247a6_6_new)
HXDLIN(   6)		this->DEPTH_COMPONENT32_OES = 33191;
            	}

Dynamic OES_depth32_obj::__CreateEmpty() { return new OES_depth32_obj; }

void *OES_depth32_obj::_hx_vtable = 0;

Dynamic OES_depth32_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_depth32_obj > _hx_result = new OES_depth32_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_depth32_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43157a12;
}


OES_depth32_obj::OES_depth32_obj()
{
}

::hx::Val OES_depth32_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { return ::hx::Val( DEPTH_COMPONENT32_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_depth32_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { DEPTH_COMPONENT32_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_depth32_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("DEPTH_COMPONENT32_OES",5e,b1,1c,75));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_depth32_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_depth32_obj,DEPTH_COMPONENT32_OES),HX_("DEPTH_COMPONENT32_OES",5e,b1,1c,75)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_depth32_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_depth32_obj_sMemberFields[] = {
	HX_("DEPTH_COMPONENT32_OES",5e,b1,1c,75),
	::String(null()) };

::hx::Class OES_depth32_obj::__mClass;

void OES_depth32_obj::__register()
{
	OES_depth32_obj _hx_dummy;
	OES_depth32_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_depth32",fe,79,08,bb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_depth32_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_depth32_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_depth32_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_depth32_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
