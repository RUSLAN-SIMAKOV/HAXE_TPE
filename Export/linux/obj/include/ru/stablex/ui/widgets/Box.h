// Generated by Haxe 4.1.1
#ifndef INCLUDED_ru_stablex_ui_widgets_Box
#define INCLUDED_ru_stablex_ui_widgets_Box

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_ru_stablex_ui_widgets_Widget
#include <ru/stablex/ui/widgets/Widget.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(ru,stablex,TweenSprite)
HX_DECLARE_CLASS4(ru,stablex,ui,events,WidgetEvent)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Box)
HX_DECLARE_CLASS4(ru,stablex,ui,widgets,Widget)

namespace ru{
namespace stablex{
namespace ui{
namespace widgets{


class HXCPP_CLASS_ATTRIBUTES Box_obj : public  ::ru::stablex::ui::widgets::Widget_obj
{
	public:
		typedef  ::ru::stablex::ui::widgets::Widget_obj super;
		typedef Box_obj OBJ_;
		Box_obj();

	public:
		enum { _hx_ClassId = 0x1210c5aa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ru.stablex.ui.widgets.Box")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ru.stablex.ui.widgets.Box"); }
		static ::hx::ObjectPtr< Box_obj > __new();
		static ::hx::ObjectPtr< Box_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Box_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Box",eb,75,32,00); }

		bool vertical;
		Float paddingLeft;
		Float paddingRight;
		Float paddingTop;
		Float paddingBottom;
		Float childPadding;
		::String align;
		bool autoWidth;
		bool autoHeight;
		bool unifyChildren;
		bool intPositions;
		bool _processingChildResize;
		Float _objWidth( ::openfl::display::DisplayObject obj);
		::Dynamic _objWidth_dyn();

		Float _objHeight( ::openfl::display::DisplayObject obj);
		::Dynamic _objHeight_dyn();

		void _setObjX( ::openfl::display::DisplayObject obj,Float x);
		::Dynamic _setObjX_dyn();

		void _setObjY( ::openfl::display::DisplayObject obj,Float y);
		::Dynamic _setObjY_dyn();

		virtual void refresh();

		Float _calcWidth();
		::Dynamic _calcWidth_dyn();

		Float _calcHeight();
		::Dynamic _calcHeight_dyn();

		void _resizeWithPercent( ::ru::stablex::ui::widgets::Widget parent);

		virtual void alignElements();
		::Dynamic alignElements_dyn();

		void _unifyChildren();
		::Dynamic _unifyChildren_dyn();

		void _vAlignTop();
		::Dynamic _vAlignTop_dyn();

		void _vAlignMiddle();
		::Dynamic _vAlignMiddle_dyn();

		void _vAlignBottom();
		::Dynamic _vAlignBottom_dyn();

		void _hAlignLeft();
		::Dynamic _hAlignLeft_dyn();

		void _hAlignRight();
		::Dynamic _hAlignRight_dyn();

		void _hAlignCenter();
		::Dynamic _hAlignCenter_dyn();

		 ::openfl::display::DisplayObject addChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject addChildAt( ::openfl::display::DisplayObject child,int idx);

		 ::openfl::display::DisplayObject removeChild( ::openfl::display::DisplayObject child);

		 ::openfl::display::DisplayObject removeChildAt(int idx);

		void _onChildResize( ::ru::stablex::ui::events::WidgetEvent e);
		::Dynamic _onChildResize_dyn();

		Float get_contentHeight();

		Float get_contentWidth();

		bool set_autoSize(bool as);
		::Dynamic set_autoSize_dyn();

		Float set_w(Float w);

		Float set_widthPt(Float wp);

		Float set_heightPt(Float hp);

		Float set_h(Float h);

		Float set_padding(Float p);
		::Dynamic set_padding_dyn();

};

} // end namespace ru
} // end namespace stablex
} // end namespace ui
} // end namespace widgets

#endif /* INCLUDED_ru_stablex_ui_widgets_Box */ 