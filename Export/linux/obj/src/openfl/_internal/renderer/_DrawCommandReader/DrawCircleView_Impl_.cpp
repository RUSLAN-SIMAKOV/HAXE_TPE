// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawCircleView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawCircleView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da30b9c34d98d85b_557__new,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","_new",0xd771db4e,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",557,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_da30b9c34d98d85b_566_get_x,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","get_x",0x417b0ec2,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",566,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_da30b9c34d98d85b_573_get_y,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","get_y",0x417b0ec3,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",573,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_da30b9c34d98d85b_580_get_radius,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_","get_radius",0xc711b5c8,"openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_.get_radius","openfl/_internal/renderer/DrawCommandReader.hx",580,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void DrawCircleView_Impl__obj::__construct() { }

Dynamic DrawCircleView_Impl__obj::__CreateEmpty() { return new DrawCircleView_Impl__obj; }

void *DrawCircleView_Impl__obj::_hx_vtable = 0;

Dynamic DrawCircleView_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DrawCircleView_Impl__obj > _hx_result = new DrawCircleView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawCircleView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0fe0af4f;
}

 ::openfl::_internal::renderer::DrawCommandReader DrawCircleView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_557__new)
HXDLIN( 557)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 557)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,_new,return )

Float DrawCircleView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_566_get_x)
HXDLIN( 566)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_x,return )

Float DrawCircleView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_573_get_y)
HXDLIN( 573)		return this1->buffer->f->__get((this1->fPos + 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_y,return )

Float DrawCircleView_Impl__obj::get_radius( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_da30b9c34d98d85b_580_get_radius)
HXDLIN( 580)		return this1->buffer->f->__get((this1->fPos + 2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawCircleView_Impl__obj,get_radius,return )


DrawCircleView_Impl__obj::DrawCircleView_Impl__obj()
{
}

bool DrawCircleView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_radius") ) { outValue = get_radius_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DrawCircleView_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DrawCircleView_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class DrawCircleView_Impl__obj::__mClass;

static ::String DrawCircleView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_x",4f,a5,60,91),
	HX_("get_y",50,a5,60,91),
	HX_("get_radius",1b,40,7e,a1),
	::String(null())
};

void DrawCircleView_Impl__obj::__register()
{
	DrawCircleView_Impl__obj _hx_dummy;
	DrawCircleView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl._internal.renderer._DrawCommandReader.DrawCircleView_Impl_",a1,61,f1,77);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawCircleView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DrawCircleView_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DrawCircleView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawCircleView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawCircleView_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
