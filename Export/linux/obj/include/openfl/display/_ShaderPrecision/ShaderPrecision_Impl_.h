// Generated by Haxe 4.1.1
#ifndef INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_
#define INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_ShaderPrecision,ShaderPrecision_Impl_)

namespace openfl{
namespace display{
namespace _ShaderPrecision{


class HXCPP_CLASS_ATTRIBUTES ShaderPrecision_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderPrecision_Impl__obj OBJ_;
		ShaderPrecision_Impl__obj();

	public:
		enum { _hx_ClassId = 0x60117f2d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._ShaderPrecision.ShaderPrecision_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._ShaderPrecision.ShaderPrecision_Impl_"); }

		inline static ::hx::ObjectPtr< ShaderPrecision_Impl__obj > __new() {
			::hx::ObjectPtr< ShaderPrecision_Impl__obj > __this = new ShaderPrecision_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ShaderPrecision_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			ShaderPrecision_Impl__obj *__this = (ShaderPrecision_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ShaderPrecision_Impl__obj), false, "openfl.display._ShaderPrecision.ShaderPrecision_Impl_"));
			*(void **)__this = ShaderPrecision_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderPrecision_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderPrecision_Impl_",99,de,34,15); }

		static void __boot();
		static  ::Dynamic FAST;
		static  ::Dynamic FULL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderPrecision

#endif /* INCLUDED_openfl_display__ShaderPrecision_ShaderPrecision_Impl_ */ 
