// Generated by Haxe 4.1.1
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginFillView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,BeginFillView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES BeginFillView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BeginFillView_Impl__obj OBJ_;
		BeginFillView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x215e1a57 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_"); }

		inline static ::hx::ObjectPtr< BeginFillView_Impl__obj > __new() {
			::hx::ObjectPtr< BeginFillView_Impl__obj > __this = new BeginFillView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BeginFillView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			BeginFillView_Impl__obj *__this = (BeginFillView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BeginFillView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.BeginFillView_Impl_"));
			*(void **)__this = BeginFillView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BeginFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BeginFillView_Impl_",11,09,a8,37); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static int get_color( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_color_dyn();

		static Float get_alpha( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_alpha_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_BeginFillView_Impl_ */ 
