// Generated by Haxe 4.1.1
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_LineToView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_LineToView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,LineToView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES LineToView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LineToView_Impl__obj OBJ_;
		LineToView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5b905f4e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.LineToView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.LineToView_Impl_"); }

		inline static ::hx::ObjectPtr< LineToView_Impl__obj > __new() {
			::hx::ObjectPtr< LineToView_Impl__obj > __this = new LineToView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< LineToView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			LineToView_Impl__obj *__this = (LineToView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LineToView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.LineToView_Impl_"));
			*(void **)__this = LineToView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LineToView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LineToView_Impl_",54,58,1f,2c); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static Float get_x( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_x_dyn();

		static Float get_y( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_y_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_LineToView_Impl_ */ 
