// Generated by Haxe 4.1.1
#ifndef INCLUDED_motion_easing__Elastic_ElasticEaseOut
#define INCLUDED_motion_easing__Elastic_ElasticEaseOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
HX_DECLARE_CLASS2(motion,easing,IEasing)
HX_DECLARE_CLASS3(motion,easing,_Elastic,ElasticEaseOut)

namespace motion{
namespace easing{
namespace _Elastic{


class HXCPP_CLASS_ATTRIBUTES ElasticEaseOut_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ElasticEaseOut_obj OBJ_;
		ElasticEaseOut_obj();

	public:
		enum { _hx_ClassId = 0x30c37c62 };

		void __construct(Float a,Float p);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="motion.easing._Elastic.ElasticEaseOut")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"motion.easing._Elastic.ElasticEaseOut"); }
		static ::hx::ObjectPtr< ElasticEaseOut_obj > __new(Float a,Float p);
		static ::hx::ObjectPtr< ElasticEaseOut_obj > __alloc(::hx::Ctx *_hx_ctx,Float a,Float p);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ElasticEaseOut_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("ElasticEaseOut",0b,44,9e,f0); }

		Float a;
		Float p;
		Float calculate(Float k);
		::Dynamic calculate_dyn();

		Float ease(Float t,Float b,Float c,Float d);
		::Dynamic ease_dyn();

};

} // end namespace motion
} // end namespace easing
} // end namespace _Elastic

#endif /* INCLUDED_motion_easing__Elastic_ElasticEaseOut */ 