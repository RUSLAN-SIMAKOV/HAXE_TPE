// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing_Quint
#define INCLUDED_motion_easing_Quint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS2(motion,easing,Quint)

namespace motion{
namespace easing{


class HXCPP_CLASS_ATTRIBUTES Quint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Quint_obj OBJ_;
		Quint_obj();

	public:
		enum { _hx_ClassId = 0x15a7ada2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing.Quint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing.Quint"); }

		inline static ::hx::ObjectPtr< Quint_obj > __new() {
			::hx::ObjectPtr< Quint_obj > __this = new Quint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Quint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Quint_obj *__this = (Quint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Quint_obj), false, "motion.easing.Quint"));
			*(void **)__this = Quint_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Quint_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Quint",6b,00,1b,f1); }

		static void __boot();
		static ::Dynamic easeIn;
		static ::Dynamic easeInOut;
		static ::Dynamic easeOut;
};

} // end namespace motion
} // end namespace easing

#endif /* INCLUDED_motion_easing_Quint */ 
