// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisComment
#include <lime/media/vorbis/VorbisComment.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#include <lime/media/vorbis/VorbisFile.h>
#endif
#ifndef INCLUDED_lime_media_vorbis_VorbisInfo
#include <lime/media/vorbis/VorbisInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_31beaa65b9069eee_20_new,"lime.media.vorbis.VorbisFile","new",0xdfb0e2d9,"lime.media.vorbis.VorbisFile.new","lime/media/vorbis/VorbisFile.hx",20,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_26_bitrate,"lime.media.vorbis.VorbisFile","bitrate",0x309a3926,"lime.media.vorbis.VorbisFile.bitrate","lime/media/vorbis/VorbisFile.hx",26,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_35_bitrateInstant,"lime.media.vorbis.VorbisFile","bitrateInstant",0x8a77d65b,"lime.media.vorbis.VorbisFile.bitrateInstant","lime/media/vorbis/VorbisFile.hx",35,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_44_clear,"lime.media.vorbis.VorbisFile","clear",0x86fcd446,"lime.media.vorbis.VorbisFile.clear","lime/media/vorbis/VorbisFile.hx",44,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_49_comment,"lime.media.vorbis.VorbisFile","comment",0xb53abd58,"lime.media.vorbis.VorbisFile.comment","lime/media/vorbis/VorbisFile.hx",49,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_68_crosslap,"lime.media.vorbis.VorbisFile","crosslap",0xa548efc2,"lime.media.vorbis.VorbisFile.crosslap","lime/media/vorbis/VorbisFile.hx",68,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_103_info,"lime.media.vorbis.VorbisFile","info",0xd7ce4fd5,"lime.media.vorbis.VorbisFile.info","lime/media/vorbis/VorbisFile.hx",103,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_126_pcmSeek,"lime.media.vorbis.VorbisFile","pcmSeek",0xf459dcab,"lime.media.vorbis.VorbisFile.pcmSeek","lime/media/vorbis/VorbisFile.hx",126,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_135_pcmSeekLap,"lime.media.vorbis.VorbisFile","pcmSeekLap",0x65792070,"lime.media.vorbis.VorbisFile.pcmSeekLap","lime/media/vorbis/VorbisFile.hx",135,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_144_pcmSeekPage,"lime.media.vorbis.VorbisFile","pcmSeekPage",0x6728149a,"lime.media.vorbis.VorbisFile.pcmSeekPage","lime/media/vorbis/VorbisFile.hx",144,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_153_pcmSeekPageLap,"lime.media.vorbis.VorbisFile","pcmSeekPageLap",0x202147e1,"lime.media.vorbis.VorbisFile.pcmSeekPageLap","lime/media/vorbis/VorbisFile.hx",153,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_160_pcmTell,"lime.media.vorbis.VorbisFile","pcmTell",0xf5031964,"lime.media.vorbis.VorbisFile.pcmTell","lime/media/vorbis/VorbisFile.hx",160,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_174_pcmTotal,"lime.media.vorbis.VorbisFile","pcmTotal",0x74554931,"lime.media.vorbis.VorbisFile.pcmTotal","lime/media/vorbis/VorbisFile.hx",174,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_190_rawSeek,"lime.media.vorbis.VorbisFile","rawSeek",0x3ccfde79,"lime.media.vorbis.VorbisFile.rawSeek","lime/media/vorbis/VorbisFile.hx",190,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_199_rawSeekLap,"lime.media.vorbis.VorbisFile","rawSeekLap",0x7c23b362,"lime.media.vorbis.VorbisFile.rawSeekLap","lime/media/vorbis/VorbisFile.hx",199,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_206_rawTell,"lime.media.vorbis.VorbisFile","rawTell",0x3d791b32,"lime.media.vorbis.VorbisFile.rawTell","lime/media/vorbis/VorbisFile.hx",206,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_220_rawTotal,"lime.media.vorbis.VorbisFile","rawTotal",0x9320dba3,"lime.media.vorbis.VorbisFile.rawTotal","lime/media/vorbis/VorbisFile.hx",220,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_234_read,"lime.media.vorbis.VorbisFile","read",0xddba62bd,"lime.media.vorbis.VorbisFile.read","lime/media/vorbis/VorbisFile.hx",234,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_247_readFloat,"lime.media.vorbis.VorbisFile","readFloat",0x4099c59f,"lime.media.vorbis.VorbisFile.readFloat","lime/media/vorbis/VorbisFile.hx",247,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_261_seekable,"lime.media.vorbis.VorbisFile","seekable",0x752565f9,"lime.media.vorbis.VorbisFile.seekable","lime/media/vorbis/VorbisFile.hx",261,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_270_serialNumber,"lime.media.vorbis.VorbisFile","serialNumber",0x80c9aa44,"lime.media.vorbis.VorbisFile.serialNumber","lime/media/vorbis/VorbisFile.hx",270,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_279_streams,"lime.media.vorbis.VorbisFile","streams",0x2a0f1eec,"lime.media.vorbis.VorbisFile.streams","lime/media/vorbis/VorbisFile.hx",279,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_288_timeSeek,"lime.media.vorbis.VorbisFile","timeSeek",0x09e25f0c,"lime.media.vorbis.VorbisFile.timeSeek","lime/media/vorbis/VorbisFile.hx",288,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_297_timeSeekLap,"lime.media.vorbis.VorbisFile","timeSeekLap",0xa2cb90af,"lime.media.vorbis.VorbisFile.timeSeekLap","lime/media/vorbis/VorbisFile.hx",297,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_306_timeSeekPage,"lime.media.vorbis.VorbisFile","timeSeekPage",0xd1f7db7b,"lime.media.vorbis.VorbisFile.timeSeekPage","lime/media/vorbis/VorbisFile.hx",306,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_315_timeSeekPageLap,"lime.media.vorbis.VorbisFile","timeSeekPageLap",0x95aa43a0,"lime.media.vorbis.VorbisFile.timeSeekPageLap","lime/media/vorbis/VorbisFile.hx",315,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_324_timeTell,"lime.media.vorbis.VorbisFile","timeTell",0x0a8b9bc5,"lime.media.vorbis.VorbisFile.timeTell","lime/media/vorbis/VorbisFile.hx",324,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_333_timeTotal,"lime.media.vorbis.VorbisFile","timeTotal",0x363edbb0,"lime.media.vorbis.VorbisFile.timeTotal","lime/media/vorbis/VorbisFile.hx",333,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_75_fromBytes,"lime.media.vorbis.VorbisFile","fromBytes",0xdf3ca5da,"lime.media.vorbis.VorbisFile.fromBytes","lime/media/vorbis/VorbisFile.hx",75,0x1b5471d8)
HX_LOCAL_STACK_FRAME(_hx_pos_31beaa65b9069eee_89_fromFile,"lime.media.vorbis.VorbisFile","fromFile",0xbeb7f3ed,"lime.media.vorbis.VorbisFile.fromFile","lime/media/vorbis/VorbisFile.hx",89,0x1b5471d8)
namespace lime{
namespace media{
namespace vorbis{

void VorbisFile_obj::__construct( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_20_new)
HXDLIN(  20)		this->handle = handle;
            	}

Dynamic VorbisFile_obj::__CreateEmpty() { return new VorbisFile_obj; }

void *VorbisFile_obj::_hx_vtable = 0;

Dynamic VorbisFile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VorbisFile_obj > _hx_result = new VorbisFile_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VorbisFile_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x05bcd751;
}

int VorbisFile_obj::bitrate(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_26_bitrate)
HXDLIN(  26)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_bitrate(::hx::DynamicPtr(this->handle),bitstream);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,bitrate,return )

int VorbisFile_obj::bitrateInstant(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_35_bitrateInstant)
HXDLIN(  35)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_bitrate_instant(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,bitrateInstant,return )

void VorbisFile_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_44_clear)
HXDLIN(  44)		::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_clear(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,clear,(void))

 ::lime::media::vorbis::VorbisComment VorbisFile_obj::comment(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_31beaa65b9069eee_49_comment)
HXLINE(  51)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_comment(::hx::DynamicPtr(this->handle),bitstream);
HXLINE(  53)		if (::hx::IsNotNull( data )) {
HXLINE(  55)			 ::lime::media::vorbis::VorbisComment comment =  ::lime::media::vorbis::VorbisComment_obj::__alloc( HX_CTX );
HXLINE(  56)			comment->userComments = ( (::Array< ::String >)(( ( ::Dynamic)(data) )->__Field(HX_("userComments",9f,aa,f5,57),::hx::paccDynamic)) );
HXLINE(  57)			comment->vendor = ( (::String)(( ( ::Dynamic)(data) )->__Field(HX_("vendor",88,e5,96,9e),::hx::paccDynamic)) );
HXLINE(  58)			return comment;
            		}
HXLINE(  62)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,comment,return )

int VorbisFile_obj::crosslap( ::lime::media::vorbis::VorbisFile other){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_68_crosslap)
HXDLIN(  68)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_crosslap(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(other->handle))) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,crosslap,return )

 ::lime::media::vorbis::VorbisInfo VorbisFile_obj::info(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_GC_STACKFRAME(&_hx_pos_31beaa65b9069eee_103_info)
HXLINE( 105)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_info(::hx::DynamicPtr(this->handle),bitstream);
HXLINE( 107)		if (::hx::IsNotNull( data )) {
HXLINE( 109)			 ::lime::media::vorbis::VorbisInfo info =  ::lime::media::vorbis::VorbisInfo_obj::__alloc( HX_CTX );
HXLINE( 110)			info->bitrateLower = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("bitrateLower",94,f0,d0,09),::hx::paccDynamic)) );
HXLINE( 111)			info->bitrateNominal = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("bitrateNominal",6f,84,28,68),::hx::paccDynamic)) );
HXLINE( 112)			info->bitrateUpper = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("bitrateUpper",f5,0f,10,39),::hx::paccDynamic)) );
HXLINE( 113)			info->channels = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("channels",50,aa,ee,6a),::hx::paccDynamic)) );
HXLINE( 114)			info->rate = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("rate",e0,52,a4,4b),::hx::paccDynamic)) );
HXLINE( 115)			info->version = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("version",18,e7,f1,7c),::hx::paccDynamic)) );
HXLINE( 116)			return info;
            		}
HXLINE( 120)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,info,return )

int VorbisFile_obj::pcmSeek( cpp::Int64Struct pos){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_126_pcmSeek)
HXDLIN( 126)		 ::Dynamic _hx_tmp = this->handle;
HXDLIN( 126)		int _hx_tmp1 = _hx_int64_low(pos);
HXDLIN( 126)		int _hx_tmp2 = _hx_int64_high(pos);
HXDLIN( 126)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_pcm_seek(::hx::DynamicPtr(_hx_tmp),::hx::DynamicPtr(_hx_tmp1),::hx::DynamicPtr(_hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeek,return )

int VorbisFile_obj::pcmSeekLap( cpp::Int64Struct pos){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_135_pcmSeekLap)
HXDLIN( 135)		 ::Dynamic _hx_tmp = this->handle;
HXDLIN( 135)		int _hx_tmp1 = _hx_int64_low(pos);
HXDLIN( 135)		int _hx_tmp2 = _hx_int64_high(pos);
HXDLIN( 135)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_pcm_seek_lap(::hx::DynamicPtr(_hx_tmp),::hx::DynamicPtr(_hx_tmp1),::hx::DynamicPtr(_hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeekLap,return )

int VorbisFile_obj::pcmSeekPage( cpp::Int64Struct pos){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_144_pcmSeekPage)
HXDLIN( 144)		 ::Dynamic _hx_tmp = this->handle;
HXDLIN( 144)		int _hx_tmp1 = _hx_int64_low(pos);
HXDLIN( 144)		int _hx_tmp2 = _hx_int64_high(pos);
HXDLIN( 144)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_pcm_seek_page(::hx::DynamicPtr(_hx_tmp),::hx::DynamicPtr(_hx_tmp1),::hx::DynamicPtr(_hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeekPage,return )

int VorbisFile_obj::pcmSeekPageLap( cpp::Int64Struct pos){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_153_pcmSeekPageLap)
HXDLIN( 153)		 ::Dynamic _hx_tmp = this->handle;
HXDLIN( 153)		int _hx_tmp1 = _hx_int64_low(pos);
HXDLIN( 153)		int _hx_tmp2 = _hx_int64_high(pos);
HXDLIN( 153)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_pcm_seek_page_lap(::hx::DynamicPtr(_hx_tmp),::hx::DynamicPtr(_hx_tmp1),::hx::DynamicPtr(_hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmSeekPageLap,return )

 cpp::Int64Struct VorbisFile_obj::pcmTell(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_160_pcmTell)
HXLINE( 162)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_pcm_tell(::hx::DynamicPtr(this->handle));
HXLINE( 164)		if (::hx::IsNotNull( data )) {
HXLINE( 166)			return _hx_int64_make(( (int)(( ( ::Dynamic)(data) )->__Field(HX_("high",62,37,0e,45),::hx::paccDynamic)) ),( (int)(( ( ::Dynamic)(data) )->__Field(HX_("low",94,54,52,00),::hx::paccDynamic)) ));
            		}
HXLINE( 170)		return ( ::cpp::Int64Struct(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,pcmTell,return )

 cpp::Int64Struct VorbisFile_obj::pcmTotal(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_174_pcmTotal)
HXLINE( 176)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_pcm_total(::hx::DynamicPtr(this->handle),bitstream);
HXLINE( 178)		if (::hx::IsNotNull( data )) {
HXLINE( 180)			return _hx_int64_make(( (int)(( ( ::Dynamic)(data) )->__Field(HX_("high",62,37,0e,45),::hx::paccDynamic)) ),( (int)(( ( ::Dynamic)(data) )->__Field(HX_("low",94,54,52,00),::hx::paccDynamic)) ));
            		}
HXLINE( 184)		return ( ::cpp::Int64Struct(0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,pcmTotal,return )

int VorbisFile_obj::rawSeek( cpp::Int64Struct pos){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_190_rawSeek)
HXDLIN( 190)		 ::Dynamic _hx_tmp = this->handle;
HXDLIN( 190)		int _hx_tmp1 = _hx_int64_low(pos);
HXDLIN( 190)		int _hx_tmp2 = _hx_int64_high(pos);
HXDLIN( 190)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_raw_seek(::hx::DynamicPtr(_hx_tmp),::hx::DynamicPtr(_hx_tmp1),::hx::DynamicPtr(_hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,rawSeek,return )

int VorbisFile_obj::rawSeekLap( cpp::Int64Struct pos){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_199_rawSeekLap)
HXDLIN( 199)		 ::Dynamic _hx_tmp = this->handle;
HXDLIN( 199)		int _hx_tmp1 = _hx_int64_low(pos);
HXDLIN( 199)		int _hx_tmp2 = _hx_int64_high(pos);
HXDLIN( 199)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_raw_seek_lap(::hx::DynamicPtr(_hx_tmp),::hx::DynamicPtr(_hx_tmp1),::hx::DynamicPtr(_hx_tmp2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,rawSeekLap,return )

 cpp::Int64Struct VorbisFile_obj::rawTell(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_206_rawTell)
HXLINE( 208)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_raw_tell(::hx::DynamicPtr(this->handle));
HXLINE( 210)		if (::hx::IsNotNull( data )) {
HXLINE( 212)			return _hx_int64_make(( (int)(( ( ::Dynamic)(data) )->__Field(HX_("high",62,37,0e,45),::hx::paccDynamic)) ),( (int)(( ( ::Dynamic)(data) )->__Field(HX_("low",94,54,52,00),::hx::paccDynamic)) ));
            		}
HXLINE( 216)		return ( ::cpp::Int64Struct(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,rawTell,return )

 cpp::Int64Struct VorbisFile_obj::rawTotal(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_220_rawTotal)
HXLINE( 222)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_raw_total(::hx::DynamicPtr(this->handle),bitstream);
HXLINE( 224)		if (::hx::IsNotNull( data )) {
HXLINE( 226)			return _hx_int64_make(( (int)(( ( ::Dynamic)(data) )->__Field(HX_("high",62,37,0e,45),::hx::paccDynamic)) ),( (int)(( ( ::Dynamic)(data) )->__Field(HX_("low",94,54,52,00),::hx::paccDynamic)) ));
            		}
HXLINE( 230)		return ( ::cpp::Int64Struct(0));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,rawTotal,return )

int VorbisFile_obj::read( ::haxe::io::Bytes buffer,int position,::hx::Null< int >  __o_length,::hx::Null< bool >  __o_bigEndianPacking,::hx::Null< int >  __o_wordSize,::hx::Null< bool >  __o__hx_signed){
            		int length = __o_length.Default(4096);
            		bool bigEndianPacking = __o_bigEndianPacking.Default(false);
            		int wordSize = __o_wordSize.Default(2);
            		bool _hx_signed = __o__hx_signed.Default(true);
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_234_read)
HXLINE( 236)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_read(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(buffer),position,length,bigEndianPacking,wordSize,_hx_signed);
HXLINE( 237)		if (::hx::IsNull( data )) {
HXLINE( 237)			return 0;
            		}
HXLINE( 238)		this->bitstream = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("bitstream",0d,e5,01,1f),::hx::paccDynamic)) );
HXLINE( 239)		return ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC6(VorbisFile_obj,read,return )

int VorbisFile_obj::readFloat( ::haxe::io::Bytes pcmChannels,int samples){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_247_readFloat)
HXLINE( 249)		 ::hx::Object * data = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_read_float(::hx::DynamicPtr(this->handle),::hx::DynamicPtr(pcmChannels),samples);
HXLINE( 250)		if (::hx::IsNull( data )) {
HXLINE( 250)			return 0;
            		}
HXLINE( 251)		this->bitstream = ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("bitstream",0d,e5,01,1f),::hx::paccDynamic)) );
HXLINE( 252)		return ( (int)(( ( ::Dynamic)(data) )->__Field(HX_("returnValue",a1,4c,95,3e),::hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC2(VorbisFile_obj,readFloat,return )

bool VorbisFile_obj::seekable(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_261_seekable)
HXDLIN( 261)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_seekable(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,seekable,return )

int VorbisFile_obj::serialNumber(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_270_serialNumber)
HXDLIN( 270)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_serial_number(::hx::DynamicPtr(this->handle),bitstream);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,serialNumber,return )

int VorbisFile_obj::streams(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_279_streams)
HXDLIN( 279)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_streams(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,streams,return )

int VorbisFile_obj::timeSeek(Float s){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_288_timeSeek)
HXDLIN( 288)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_time_seek(::hx::DynamicPtr(this->handle),s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeek,return )

int VorbisFile_obj::timeSeekLap(Float s){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_297_timeSeekLap)
HXDLIN( 297)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_time_seek_lap(::hx::DynamicPtr(this->handle),s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeekLap,return )

int VorbisFile_obj::timeSeekPage(Float s){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_306_timeSeekPage)
HXDLIN( 306)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_time_seek_page(::hx::DynamicPtr(this->handle),s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeekPage,return )

int VorbisFile_obj::timeSeekPageLap(Float s){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_315_timeSeekPageLap)
HXDLIN( 315)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_time_seek_page_lap(::hx::DynamicPtr(this->handle),s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeSeekPageLap,return )

Float VorbisFile_obj::timeTell(){
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_324_timeTell)
HXDLIN( 324)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_time_tell(::hx::DynamicPtr(this->handle));
            	}


HX_DEFINE_DYNAMIC_FUNC0(VorbisFile_obj,timeTell,return )

Float VorbisFile_obj::timeTotal(::hx::Null< int >  __o_bitstream){
            		int bitstream = __o_bitstream.Default(-1);
            	HX_STACKFRAME(&_hx_pos_31beaa65b9069eee_333_timeTotal)
HXDLIN( 333)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_time_total(::hx::DynamicPtr(this->handle),bitstream);
            	}


HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,timeTotal,return )

 ::lime::media::vorbis::VorbisFile VorbisFile_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_GC_STACKFRAME(&_hx_pos_31beaa65b9069eee_75_fromBytes)
HXLINE(  77)		 ::hx::Object * handle = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_from_bytes(::hx::DynamicPtr(bytes));
HXLINE(  79)		if (::hx::IsNotNull( handle )) {
HXLINE(  81)			return  ::lime::media::vorbis::VorbisFile_obj::__alloc( HX_CTX ,( ( ::Dynamic)(handle) ));
            		}
HXLINE(  85)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,fromBytes,return )

 ::lime::media::vorbis::VorbisFile VorbisFile_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_31beaa65b9069eee_89_fromFile)
HXLINE(  91)		 ::hx::Object * handle = ::lime::_internal::backend::native::NativeCFFI_obj::lime_vorbis_file_from_file(path);
HXLINE(  93)		if (::hx::IsNotNull( handle )) {
HXLINE(  95)			return  ::lime::media::vorbis::VorbisFile_obj::__alloc( HX_CTX ,( ( ::Dynamic)(handle) ));
            		}
HXLINE(  99)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(VorbisFile_obj,fromFile,return )


::hx::ObjectPtr< VorbisFile_obj > VorbisFile_obj::__new( ::Dynamic handle) {
	::hx::ObjectPtr< VorbisFile_obj > __this = new VorbisFile_obj();
	__this->__construct(handle);
	return __this;
}

::hx::ObjectPtr< VorbisFile_obj > VorbisFile_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic handle) {
	VorbisFile_obj *__this = (VorbisFile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VorbisFile_obj), true, "lime.media.vorbis.VorbisFile"));
	*(void **)__this = VorbisFile_obj::_hx_vtable;
	__this->__construct(handle);
	return __this;
}

VorbisFile_obj::VorbisFile_obj()
{
}

void VorbisFile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VorbisFile);
	HX_MARK_MEMBER_NAME(bitstream,"bitstream");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_END_CLASS();
}

void VorbisFile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitstream,"bitstream");
	HX_VISIT_MEMBER_NAME(handle,"handle");
}

::hx::Val VorbisFile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info_dyn() ); }
		if (HX_FIELD_EQ(inName,"read") ) { return ::hx::Val( read_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bitrate") ) { return ::hx::Val( bitrate_dyn() ); }
		if (HX_FIELD_EQ(inName,"comment") ) { return ::hx::Val( comment_dyn() ); }
		if (HX_FIELD_EQ(inName,"pcmSeek") ) { return ::hx::Val( pcmSeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"pcmTell") ) { return ::hx::Val( pcmTell_dyn() ); }
		if (HX_FIELD_EQ(inName,"rawSeek") ) { return ::hx::Val( rawSeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"rawTell") ) { return ::hx::Val( rawTell_dyn() ); }
		if (HX_FIELD_EQ(inName,"streams") ) { return ::hx::Val( streams_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"crosslap") ) { return ::hx::Val( crosslap_dyn() ); }
		if (HX_FIELD_EQ(inName,"pcmTotal") ) { return ::hx::Val( pcmTotal_dyn() ); }
		if (HX_FIELD_EQ(inName,"rawTotal") ) { return ::hx::Val( rawTotal_dyn() ); }
		if (HX_FIELD_EQ(inName,"seekable") ) { return ::hx::Val( seekable_dyn() ); }
		if (HX_FIELD_EQ(inName,"timeSeek") ) { return ::hx::Val( timeSeek_dyn() ); }
		if (HX_FIELD_EQ(inName,"timeTell") ) { return ::hx::Val( timeTell_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitstream") ) { return ::hx::Val( bitstream ); }
		if (HX_FIELD_EQ(inName,"readFloat") ) { return ::hx::Val( readFloat_dyn() ); }
		if (HX_FIELD_EQ(inName,"timeTotal") ) { return ::hx::Val( timeTotal_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pcmSeekLap") ) { return ::hx::Val( pcmSeekLap_dyn() ); }
		if (HX_FIELD_EQ(inName,"rawSeekLap") ) { return ::hx::Val( rawSeekLap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pcmSeekPage") ) { return ::hx::Val( pcmSeekPage_dyn() ); }
		if (HX_FIELD_EQ(inName,"timeSeekLap") ) { return ::hx::Val( timeSeekLap_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"serialNumber") ) { return ::hx::Val( serialNumber_dyn() ); }
		if (HX_FIELD_EQ(inName,"timeSeekPage") ) { return ::hx::Val( timeSeekPage_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitrateInstant") ) { return ::hx::Val( bitrateInstant_dyn() ); }
		if (HX_FIELD_EQ(inName,"pcmSeekPageLap") ) { return ::hx::Val( pcmSeekPageLap_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"timeSeekPageLap") ) { return ::hx::Val( timeSeekPageLap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool VorbisFile_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val VorbisFile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"bitstream") ) { bitstream=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VorbisFile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitstream",0d,e5,01,1f));
	outFields->push(HX_("handle",a8,83,fd,b7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VorbisFile_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(VorbisFile_obj,bitstream),HX_("bitstream",0d,e5,01,1f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VorbisFile_obj,handle),HX_("handle",a8,83,fd,b7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VorbisFile_obj_sStaticStorageInfo = 0;
#endif

static ::String VorbisFile_obj_sMemberFields[] = {
	HX_("bitstream",0d,e5,01,1f),
	HX_("handle",a8,83,fd,b7),
	HX_("bitrate",2d,f6,cf,fc),
	HX_("bitrateInstant",34,d8,84,ad),
	HX_("clear",8d,71,5b,48),
	HX_("comment",5f,7a,70,81),
	HX_("crosslap",db,98,18,88),
	HX_("info",6e,38,bb,45),
	HX_("pcmSeek",b2,99,8f,c0),
	HX_("pcmSeekLap",c9,01,58,5a),
	HX_("pcmSeekPage",21,61,4e,b5),
	HX_("pcmSeekPageLap",ba,49,2e,43),
	HX_("pcmTell",6b,d6,38,c1),
	HX_("pcmTotal",4a,f2,24,57),
	HX_("rawSeek",80,9b,05,09),
	HX_("rawSeekLap",bb,94,02,71),
	HX_("rawTell",39,d8,ae,09),
	HX_("rawTotal",bc,84,f0,75),
	HX_("read",56,4b,a7,4b),
	HX_("readFloat",66,12,7e,d3),
	HX_("seekable",12,0f,f5,57),
	HX_("serialNumber",dd,53,26,94),
	HX_("streams",f3,db,44,f6),
	HX_("timeSeek",25,08,b2,ec),
	HX_("timeSeekLap",36,dd,f1,f0),
	HX_("timeSeekPage",14,85,54,e5),
	HX_("timeSeekPageLap",a7,df,fe,1d),
	HX_("timeTell",de,44,5b,ed),
	HX_("timeTotal",77,28,23,c9),
	::String(null()) };

::hx::Class VorbisFile_obj::__mClass;

static ::String VorbisFile_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	::String(null())
};

void VorbisFile_obj::__register()
{
	VorbisFile_obj _hx_dummy;
	VorbisFile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.media.vorbis.VorbisFile",67,82,46,c0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VorbisFile_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VorbisFile_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VorbisFile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VorbisFile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VorbisFile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VorbisFile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace vorbis
