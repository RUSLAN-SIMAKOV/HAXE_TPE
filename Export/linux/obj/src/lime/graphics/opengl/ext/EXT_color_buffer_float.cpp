// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_color_buffer_float
#include <lime/graphics/opengl/ext/EXT_color_buffer_float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ecf68149cf78b389_6_new,"lime.graphics.opengl.ext.EXT_color_buffer_float","new",0x9b72bb4b,"lime.graphics.opengl.ext.EXT_color_buffer_float.new","lime/graphics/opengl/ext/EXT_color_buffer_float.hx",6,0x5ba385a3)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_color_buffer_float_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ecf68149cf78b389_6_new)
            	}

Dynamic EXT_color_buffer_float_obj::__CreateEmpty() { return new EXT_color_buffer_float_obj; }

void *EXT_color_buffer_float_obj::_hx_vtable = 0;

Dynamic EXT_color_buffer_float_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EXT_color_buffer_float_obj > _hx_result = new EXT_color_buffer_float_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_color_buffer_float_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x747a4a45;
}


EXT_color_buffer_float_obj::EXT_color_buffer_float_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EXT_color_buffer_float_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EXT_color_buffer_float_obj_sStaticStorageInfo = 0;
#endif

::hx::Class EXT_color_buffer_float_obj::__mClass;

void EXT_color_buffer_float_obj::__register()
{
	EXT_color_buffer_float_obj _hx_dummy;
	EXT_color_buffer_float_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.EXT_color_buffer_float",d9,b9,72,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EXT_color_buffer_float_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_color_buffer_float_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_color_buffer_float_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
