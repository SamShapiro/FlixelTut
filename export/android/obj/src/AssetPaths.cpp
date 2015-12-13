#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > _result_ = new AssetPaths_obj();
	_result_->__construct();
	return _result_;}

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::haxe_tutorial__oep;

::String AssetPaths_obj::room_001__oel;

::String AssetPaths_obj::coin__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::sounds_go_here__txt;


AssetPaths_obj::AssetPaths_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &AssetPaths_obj::data_goes_here__txt,HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8")},
	{hx::fsString,(void *) &AssetPaths_obj::haxe_tutorial__oep,HX_HCSTRING("haxe_tutorial__oep","\x03","\xe2","\x7e","\x2f")},
	{hx::fsString,(void *) &AssetPaths_obj::room_001__oel,HX_HCSTRING("room_001__oel","\x89","\x39","\x9d","\xa8")},
	{hx::fsString,(void *) &AssetPaths_obj::coin__png,HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b")},
	{hx::fsString,(void *) &AssetPaths_obj::images_go_here__txt,HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93")},
	{hx::fsString,(void *) &AssetPaths_obj::player__png,HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65")},
	{hx::fsString,(void *) &AssetPaths_obj::tiles__png,HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d")},
	{hx::fsString,(void *) &AssetPaths_obj::music_goes_here__txt,HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f")},
	{hx::fsString,(void *) &AssetPaths_obj::sounds_go_here__txt,HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::haxe_tutorial__oep,"haxe_tutorial__oep");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room_001__oel,"room_001__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::haxe_tutorial__oep,"haxe_tutorial__oep");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room_001__oel,"room_001__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
};

#endif

hx::Class AssetPaths_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("data_goes_here__txt","\xec","\x22","\x23","\xe8"),
	HX_HCSTRING("haxe_tutorial__oep","\x03","\xe2","\x7e","\x2f"),
	HX_HCSTRING("room_001__oel","\x89","\x39","\x9d","\xa8"),
	HX_HCSTRING("coin__png","\x58","\x3a","\xfc","\x5b"),
	HX_HCSTRING("images_go_here__txt","\x70","\x18","\x1f","\x93"),
	HX_HCSTRING("player__png","\x88","\xf2","\xe2","\x65"),
	HX_HCSTRING("tiles__png","\xe4","\x9d","\x3e","\x1d"),
	HX_HCSTRING("music_goes_here__txt","\xd1","\xaa","\xc8","\x0f"),
	HX_HCSTRING("sounds_go_here__txt","\xe4","\xa8","\xcb","\x02"),
	::String(null()) };

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("AssetPaths","\x3e","\x0f","\xe6","\x60");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AssetPaths_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void AssetPaths_obj::__boot()
{
	data_goes_here__txt= HX_HCSTRING("assets/data/data-goes-here.txt","\x5f","\x4b","\xb2","\x8e");
	haxe_tutorial__oep= HX_HCSTRING("assets/data/haxe_tutorial.oep","\xaa","\x9f","\x93","\xe9");
	room_001__oel= HX_HCSTRING("assets/data/room-001.oel","\xe0","\x98","\x2c","\x9a");
	coin__png= HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54");
	images_go_here__txt= HX_HCSTRING("assets/images/images-go-here.txt","\x0d","\x1d","\x45","\xa6");
	player__png= HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6");
	tiles__png= HX_HCSTRING("assets/images/tiles.png","\x35","\xbc","\xd1","\xf5");
	music_goes_here__txt= HX_HCSTRING("assets/music/music-goes-here.txt","\x6b","\x32","\x60","\x47");
	sounds_go_here__txt= HX_HCSTRING("assets/sounds/sounds-go-here.txt","\x8d","\xb6","\x3d","\xa7");
}

