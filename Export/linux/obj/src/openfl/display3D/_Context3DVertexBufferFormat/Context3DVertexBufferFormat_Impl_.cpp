// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DVertexBufferFormat_Context3DVertexBufferFormat_Impl_
#include <openfl/display3D/_Context3DVertexBufferFormat/Context3DVertexBufferFormat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_23_fromString,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","fromString",0x69b9a727,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.fromString","openfl/display3D/Context3DVertexBufferFormat.hx",23,0x4ab2835e)
HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_36_toString,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","toString",0xa34b1ef8,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.toString","openfl/display3D/Context3DVertexBufferFormat.hx",36,0x4ab2835e)
HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_15_boot,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","boot",0x1307bc7e,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.boot","openfl/display3D/Context3DVertexBufferFormat.hx",15,0x4ab2835e)
HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_16_boot,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","boot",0x1307bc7e,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.boot","openfl/display3D/Context3DVertexBufferFormat.hx",16,0x4ab2835e)
HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_17_boot,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","boot",0x1307bc7e,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.boot","openfl/display3D/Context3DVertexBufferFormat.hx",17,0x4ab2835e)
HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_18_boot,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","boot",0x1307bc7e,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.boot","openfl/display3D/Context3DVertexBufferFormat.hx",18,0x4ab2835e)
HX_LOCAL_STACK_FRAME(_hx_pos_512538a9b8c6e1ed_19_boot,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","boot",0x1307bc7e,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.boot","openfl/display3D/Context3DVertexBufferFormat.hx",19,0x4ab2835e)
namespace openfl{
namespace display3D{
namespace _Context3DVertexBufferFormat{

void Context3DVertexBufferFormat_Impl__obj::__construct() { }

Dynamic Context3DVertexBufferFormat_Impl__obj::__CreateEmpty() { return new Context3DVertexBufferFormat_Impl__obj; }

void *Context3DVertexBufferFormat_Impl__obj::_hx_vtable = 0;

Dynamic Context3DVertexBufferFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DVertexBufferFormat_Impl__obj > _hx_result = new Context3DVertexBufferFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DVertexBufferFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20b5151c;
}

 ::Dynamic Context3DVertexBufferFormat_Impl__obj::BYTES_4;

 ::Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_1;

 ::Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_2;

 ::Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_3;

 ::Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_4;

 ::Dynamic Context3DVertexBufferFormat_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_23_fromString)
HXDLIN(  23)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("bytes4",69,55,6f,27)) ){
HXLINE(  25)			return 0;
HXDLIN(  25)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("float1",15,23,56,41)) ){
HXLINE(  26)			return 1;
HXDLIN(  26)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("float2",16,23,56,41)) ){
HXLINE(  27)			return 2;
HXDLIN(  27)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("float3",17,23,56,41)) ){
HXLINE(  28)			return 3;
HXDLIN(  28)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("float4",18,23,56,41)) ){
HXLINE(  29)			return 4;
HXDLIN(  29)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  30)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DVertexBufferFormat_Impl__obj,fromString,return )

::String Context3DVertexBufferFormat_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_36_toString)
HXDLIN(  36)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  38)			return HX_("bytes4",69,55,6f,27);
HXDLIN(  38)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  39)			return HX_("float1",15,23,56,41);
HXDLIN(  39)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  40)			return HX_("float2",16,23,56,41);
HXDLIN(  40)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  41)			return HX_("float3",17,23,56,41);
HXDLIN(  41)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  42)			return HX_("float4",18,23,56,41);
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  43)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  36)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DVertexBufferFormat_Impl__obj,toString,return )


Context3DVertexBufferFormat_Impl__obj::Context3DVertexBufferFormat_Impl__obj()
{
}

bool Context3DVertexBufferFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DVertexBufferFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DVertexBufferFormat_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DVertexBufferFormat_Impl__obj::BYTES_4,HX_("BYTES_4",00,7c,cf,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_1,HX_("FLOAT_1",6e,a7,dc,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_2,HX_("FLOAT_2",6f,a7,dc,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_3,HX_("FLOAT_3",70,a7,dc,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_4,HX_("FLOAT_4",71,a7,dc,69)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DVertexBufferFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::BYTES_4,"BYTES_4");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_1,"FLOAT_1");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_2,"FLOAT_2");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_3,"FLOAT_3");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_4,"FLOAT_4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DVertexBufferFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::BYTES_4,"BYTES_4");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_1,"FLOAT_1");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_2,"FLOAT_2");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_3,"FLOAT_3");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_4,"FLOAT_4");
};

#endif

::hx::Class Context3DVertexBufferFormat_Impl__obj::__mClass;

static ::String Context3DVertexBufferFormat_Impl__obj_sStaticFields[] = {
	HX_("BYTES_4",00,7c,cf,d9),
	HX_("FLOAT_1",6e,a7,dc,69),
	HX_("FLOAT_2",6f,a7,dc,69),
	HX_("FLOAT_3",70,a7,dc,69),
	HX_("FLOAT_4",71,a7,dc,69),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DVertexBufferFormat_Impl__obj::__register()
{
	Context3DVertexBufferFormat_Impl__obj _hx_dummy;
	Context3DVertexBufferFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_",a2,0b,6b,59);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DVertexBufferFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DVertexBufferFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DVertexBufferFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DVertexBufferFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DVertexBufferFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DVertexBufferFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DVertexBufferFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DVertexBufferFormat_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_15_boot)
HXDLIN(  15)		BYTES_4 = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_16_boot)
HXDLIN(  16)		FLOAT_1 = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_17_boot)
HXDLIN(  17)		FLOAT_2 = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_18_boot)
HXDLIN(  18)		FLOAT_3 = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_512538a9b8c6e1ed_19_boot)
HXDLIN(  19)		FLOAT_4 = 4;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DVertexBufferFormat
