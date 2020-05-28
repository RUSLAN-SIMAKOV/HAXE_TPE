// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_HTTPStatusEvent
#include <openfl/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e9f49414be9df9e_126_new,"openfl.events.HTTPStatusEvent","new",0x992d4c1b,"openfl.events.HTTPStatusEvent.new","openfl/events/HTTPStatusEvent.hx",126,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_134_clone,"openfl.events.HTTPStatusEvent","clone",0xe75f33d8,"openfl.events.HTTPStatusEvent.clone","openfl/events/HTTPStatusEvent.hx",134,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_144_toString,"openfl.events.HTTPStatusEvent","toString",0x9713ef11,"openfl.events.HTTPStatusEvent.toString","openfl/events/HTTPStatusEvent.hx",144,0x9d0269d5)
static const ::String _hx_array_data_61c0a2a9_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("status",32,e7,fb,05),HX_("redirected",7b,4e,5a,3e),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_148___init,"openfl.events.HTTPStatusEvent","__init",0x7253e955,"openfl.events.HTTPStatusEvent.__init","openfl/events/HTTPStatusEvent.hx",148,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_53_boot,"openfl.events.HTTPStatusEvent","boot",0x668e4c17,"openfl.events.HTTPStatusEvent.boot","openfl/events/HTTPStatusEvent.hx",53,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_68_boot,"openfl.events.HTTPStatusEvent","boot",0x668e4c17,"openfl.events.HTTPStatusEvent.boot","openfl/events/HTTPStatusEvent.hx",68,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_104_boot,"openfl.events.HTTPStatusEvent","boot",0x668e4c17,"openfl.events.HTTPStatusEvent.boot","openfl/events/HTTPStatusEvent.hx",104,0x9d0269d5)
HX_LOCAL_STACK_FRAME(_hx_pos_3e9f49414be9df9e_105_boot,"openfl.events.HTTPStatusEvent","boot",0x668e4c17,"openfl.events.HTTPStatusEvent.boot","openfl/events/HTTPStatusEvent.hx",105,0x9d0269d5)
namespace openfl{
namespace events{

void HTTPStatusEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_status,::hx::Null< bool >  __o_redirected){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            		int status = __o_status.Default(0);
            		bool redirected = __o_redirected.Default(false);
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_126_new)
HXLINE( 127)		this->status = status;
HXLINE( 128)		this->redirected = redirected;
HXLINE( 130)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic HTTPStatusEvent_obj::__CreateEmpty() { return new HTTPStatusEvent_obj; }

void *HTTPStatusEvent_obj::_hx_vtable = 0;

Dynamic HTTPStatusEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HTTPStatusEvent_obj > _hx_result = new HTTPStatusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool HTTPStatusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x10c88847;
	}
}

 ::openfl::events::Event HTTPStatusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_3e9f49414be9df9e_134_clone)
HXLINE( 135)		 ::openfl::events::HTTPStatusEvent event =  ::openfl::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->status,this->redirected);
HXLINE( 136)		event->target = this->target;
HXLINE( 137)		event->currentTarget = this->currentTarget;
HXLINE( 138)		event->eventPhase = this->eventPhase;
HXLINE( 139)		return event;
            	}


::String HTTPStatusEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_144_toString)
HXDLIN( 144)		return this->_hx___formatToString(HX_("HTTPStatusEvent",e0,4c,1b,fe),::Array_obj< ::String >::fromData( _hx_array_data_61c0a2a9_3,5));
            	}


void HTTPStatusEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_148___init)
HXLINE( 149)		this->super::_hx___init();
HXLINE( 150)		this->status = 0;
HXLINE( 151)		this->redirected = false;
            	}


::String HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS;

::String HTTPStatusEvent_obj::HTTP_STATUS;

 ::lime::utils::ObjectPool HTTPStatusEvent_obj::_hx___pool;


::hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_status,::hx::Null< bool >  __o_redirected) {
	::hx::ObjectPtr< HTTPStatusEvent_obj > __this = new HTTPStatusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_status,__o_redirected);
	return __this;
}

::hx::ObjectPtr< HTTPStatusEvent_obj > HTTPStatusEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_status,::hx::Null< bool >  __o_redirected) {
	HTTPStatusEvent_obj *__this = (HTTPStatusEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HTTPStatusEvent_obj), true, "openfl.events.HTTPStatusEvent"));
	*(void **)__this = HTTPStatusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,__o_status,__o_redirected);
	return __this;
}

HTTPStatusEvent_obj::HTTPStatusEvent_obj()
{
}

void HTTPStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HTTPStatusEvent);
	HX_MARK_MEMBER_NAME(redirected,"redirected");
	HX_MARK_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_MARK_MEMBER_NAME(responseURL,"responseURL");
	HX_MARK_MEMBER_NAME(status,"status");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HTTPStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(redirected,"redirected");
	HX_VISIT_MEMBER_NAME(responseHeaders,"responseHeaders");
	HX_VISIT_MEMBER_NAME(responseURL,"responseURL");
	HX_VISIT_MEMBER_NAME(status,"status");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HTTPStatusEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redirected") ) { return ::hx::Val( redirected ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { return ::hx::Val( responseURL ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { return ::hx::Val( responseHeaders ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HTTPStatusEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
	}
	return false;
}

::hx::Val HTTPStatusEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"redirected") ) { redirected=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"responseURL") ) { responseURL=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"responseHeaders") ) { responseHeaders=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HTTPStatusEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

void HTTPStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("redirected",7b,4e,5a,3e));
	outFields->push(HX_("responseHeaders",c5,0d,ca,43));
	outFields->push(HX_("responseURL",6e,5f,19,86));
	outFields->push(HX_("status",32,e7,fb,05));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HTTPStatusEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(HTTPStatusEvent_obj,redirected),HX_("redirected",7b,4e,5a,3e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HTTPStatusEvent_obj,responseHeaders),HX_("responseHeaders",c5,0d,ca,43)},
	{::hx::fsString,(int)offsetof(HTTPStatusEvent_obj,responseURL),HX_("responseURL",6e,5f,19,86)},
	{::hx::fsInt,(int)offsetof(HTTPStatusEvent_obj,status),HX_("status",32,e7,fb,05)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HTTPStatusEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,HX_("HTTP_RESPONSE_STATUS",79,de,26,00)},
	{::hx::fsString,(void *) &HTTPStatusEvent_obj::HTTP_STATUS,HX_("HTTP_STATUS",49,42,ed,94)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &HTTPStatusEvent_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HTTPStatusEvent_obj_sMemberFields[] = {
	HX_("redirected",7b,4e,5a,3e),
	HX_("responseHeaders",c5,0d,ca,43),
	HX_("responseURL",6e,5f,19,86),
	HX_("status",32,e7,fb,05),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void HTTPStatusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
	HX_MARK_MEMBER_NAME(HTTPStatusEvent_obj::_hx___pool,"__pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HTTPStatusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_RESPONSE_STATUS,"HTTP_RESPONSE_STATUS");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::HTTP_STATUS,"HTTP_STATUS");
	HX_VISIT_MEMBER_NAME(HTTPStatusEvent_obj::_hx___pool,"__pool");
};

#endif

::hx::Class HTTPStatusEvent_obj::__mClass;

static ::String HTTPStatusEvent_obj_sStaticFields[] = {
	HX_("HTTP_RESPONSE_STATUS",79,de,26,00),
	HX_("HTTP_STATUS",49,42,ed,94),
	HX_("__pool",fc,e3,54,f9),
	::String(null())
};

void HTTPStatusEvent_obj::__register()
{
	HTTPStatusEvent_obj _hx_dummy;
	HTTPStatusEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.HTTPStatusEvent",a9,a2,c0,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HTTPStatusEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &HTTPStatusEvent_obj::__SetStatic;
	__mClass->mMarkFunc = HTTPStatusEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HTTPStatusEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HTTPStatusEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HTTPStatusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HTTPStatusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HTTPStatusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HTTPStatusEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HTTPStatusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_53_boot)
HXDLIN(  53)		HTTP_RESPONSE_STATUS = HX_("httpResponseStatus",3b,ae,f6,61);
            	}
{
            	HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_68_boot)
HXDLIN(  68)		HTTP_STATUS = HX_("httpStatus",da,4c,74,0a);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::events::HTTPStatusEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_3e9f49414be9df9e_104_boot)
HXDLIN( 104)			return  ::openfl::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::events::HTTPStatusEvent event){
            			HX_STACKFRAME(&_hx_pos_3e9f49414be9df9e_105_boot)
HXLINE( 105)			event->_hx___init();
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_3e9f49414be9df9e_104_boot)
HXDLIN( 104)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace events
