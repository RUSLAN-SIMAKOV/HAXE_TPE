// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_DropEventInfo
#include <lime/_internal/backend/native/DropEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a21879e7650910f2_667_new,"lime._internal.backend.native.DropEventInfo","new",0x21a63a99,"lime._internal.backend.native.DropEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",667,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_a21879e7650910f2_674_clone,"lime._internal.backend.native.DropEventInfo","clone",0x32cf3dd6,"lime._internal.backend.native.DropEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",674,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void DropEventInfo_obj::__construct( ::Dynamic type,::String file){
            	HX_STACKFRAME(&_hx_pos_a21879e7650910f2_667_new)
HXLINE( 668)		this->type = ( (int)(type) );
HXLINE( 669)		this->file = file;
            	}

Dynamic DropEventInfo_obj::__CreateEmpty() { return new DropEventInfo_obj; }

void *DropEventInfo_obj::_hx_vtable = 0;

Dynamic DropEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DropEventInfo_obj > _hx_result = new DropEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DropEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33908375;
}

 ::lime::_internal::backend::native::DropEventInfo DropEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_a21879e7650910f2_674_clone)
HXDLIN( 674)		return  ::lime::_internal::backend::native::DropEventInfo_obj::__alloc( HX_CTX ,this->type,this->file);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DropEventInfo_obj,clone,return )


DropEventInfo_obj::DropEventInfo_obj()
{
}

void DropEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DropEventInfo);
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DropEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(type,"type");
}

::hx::Val DropEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DropEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DropEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("file",7c,ce,bb,43));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DropEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(DropEventInfo_obj,file),HX_("file",7c,ce,bb,43)},
	{::hx::fsInt,(int)offsetof(DropEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DropEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String DropEventInfo_obj_sMemberFields[] = {
	HX_("file",7c,ce,bb,43),
	HX_("type",ba,f2,08,4d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class DropEventInfo_obj::__mClass;

void DropEventInfo_obj::__register()
{
	DropEventInfo_obj _hx_dummy;
	DropEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.DropEventInfo",27,fa,44,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DropEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DropEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DropEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DropEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
