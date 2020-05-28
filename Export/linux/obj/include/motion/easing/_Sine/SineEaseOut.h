// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing__Sine_SineEaseOut
#define INCLUDED_motion_easing__Sine_SineEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Sine,SineEaseOut)

namespace motion{
namespace easing{
namespace _Sine{


class HXCPP_CLASS_ATTRIBUTES SineEaseOut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SineEaseOut_obj OBJ_;
		SineEaseOut_obj();

	public:
		enum { _hx_ClassId = 0x43601168 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Sine.SineEaseOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Sine.SineEaseOut"); }
		static ::hx::ObjectPtr< SineEaseOut_obj > __new();
		static ::hx::ObjectPtr< SineEaseOut_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SineEaseOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SineEaseOut",53,b2,44,53); }

		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Sine

#endif /* INCLUDED_motion_easing__Sine_SineEaseOut */ 
