// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing__Quint_QuintEaseInOut
#define INCLUDED_motion_easing__Quint_QuintEaseInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Quint,QuintEaseInOut)

namespace motion{
namespace easing{
namespace _Quint{


class HXCPP_CLASS_ATTRIBUTES QuintEaseInOut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef QuintEaseInOut_obj OBJ_;
		QuintEaseInOut_obj();

	public:
		enum { _hx_ClassId = 0x31226be1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Quint.QuintEaseInOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Quint.QuintEaseInOut"); }
		static ::hx::ObjectPtr< QuintEaseInOut_obj > __new();
		static ::hx::ObjectPtr< QuintEaseInOut_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~QuintEaseInOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("QuintEaseInOut",f0,98,35,db); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Quint

#endif /* INCLUDED_motion_easing__Quint_QuintEaseInOut */ 
