// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_symbols_timeline_Frame
#include <openfl/_internal/symbols/timeline/Frame.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_timeline_FrameObject
#include <openfl/_internal/symbols/timeline/FrameObject.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1ad0298f7ef9a7b0_15_new,"openfl._internal.symbols.timeline.Frame","new",0xebb96bf5,"openfl._internal.symbols.timeline.Frame.new","openfl/_internal/symbols/timeline/Frame.hx",15,0xa1f0d979)
namespace openfl{
namespace _internal{
namespace symbols{
namespace timeline{

void Frame_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1ad0298f7ef9a7b0_15_new)
            	}

Dynamic Frame_obj::__CreateEmpty() { return new Frame_obj; }

void *Frame_obj::_hx_vtable = 0;

Dynamic Frame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Frame_obj > _hx_result = new Frame_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Frame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x00ea0c19;
}


Frame_obj::Frame_obj()
{
}

void Frame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Frame);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(script,"script");
	HX_MARK_MEMBER_NAME(scriptSource,"scriptSource");
	HX_MARK_END_CLASS();
}

void Frame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(script,"script");
	HX_VISIT_MEMBER_NAME(scriptSource,"scriptSource");
}

::hx::Val Frame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return ::hx::Val( label ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { return ::hx::Val( script ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return ::hx::Val( objects ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { return ::hx::Val( scriptSource ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Frame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"script") ) { script=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scriptSource") ) { scriptSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Frame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("label",f4,0d,af,6f));
	outFields->push(HX_("objects",d4,68,4f,82));
	outFields->push(HX_("scriptSource",46,0d,c1,c9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Frame_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Frame_obj,label),HX_("label",f4,0d,af,6f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Frame_obj,objects),HX_("objects",d4,68,4f,82)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Frame_obj,script),HX_("script",0b,4e,60,47)},
	{::hx::fsString,(int)offsetof(Frame_obj,scriptSource),HX_("scriptSource",46,0d,c1,c9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Frame_obj_sStaticStorageInfo = 0;
#endif

static ::String Frame_obj_sMemberFields[] = {
	HX_("label",f4,0d,af,6f),
	HX_("objects",d4,68,4f,82),
	HX_("script",0b,4e,60,47),
	HX_("scriptSource",46,0d,c1,c9),
	::String(null()) };

::hx::Class Frame_obj::__mClass;

void Frame_obj::__register()
{
	Frame_obj _hx_dummy;
	Frame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.symbols.timeline.Frame",83,4d,55,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Frame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Frame_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Frame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Frame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
} // end namespace timeline
