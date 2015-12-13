#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",18,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(18)
	Dynamic tmp = MaxSize;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(18)
	super::__construct(tmp);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(MaxSize);
	return _result_;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > _result_ = new PlayState_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void PlayState_obj::placeEntities( ::String entityName,::Xml entityData){
{
		HX_STACK_FRAME("PlayState","placeEntities",0xcb21ad57,"PlayState.placeEntities","PlayState.hx",26,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entityName,"entityName")
		HX_STACK_ARG(entityData,"entityData")
		HX_STACK_LINE(27)
		::String tmp = entityData->get(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		Dynamic tmp1 = ::Std_obj::parseInt(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		int x = tmp1;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(28)
		::String tmp2 = entityData->get(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(28)
		Dynamic tmp3 = ::Std_obj::parseInt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(28)
		int y = tmp3;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(31)
		bool tmp4 = (entityName == HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(31)
		if ((tmp4)){
			HX_STACK_LINE(33)
			::Player tmp5 = this->_player;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(33)
			int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(33)
			tmp5->set_x(tmp6);
			HX_STACK_LINE(34)
			::Player tmp7 = this->_player;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(34)
			int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(34)
			tmp7->set_y(tmp8);
		}
		else{
			HX_STACK_LINE(36)
			bool tmp5 = (entityName == HX_HCSTRING("coin","\x91","\xb5","\xc4","\x41"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(36)
			if ((tmp5)){
				HX_STACK_LINE(38)
				::flixel::group::FlxTypedGroup tmp6 = this->_grpCoins;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(38)
				int tmp7 = (x + (int)4);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(38)
				int tmp8 = (y + (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(38)
				::Coin tmp9 = ::Coin_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(38)
				tmp6->add(tmp9);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,placeEntities,(void))

Void PlayState_obj::playerTouchCoin( ::Player P,::Coin C){
{
		HX_STACK_FRAME("PlayState","playerTouchCoin",0x7f00763e,"PlayState.playerTouchCoin","PlayState.hx",43,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_ARG(C,"C")
		HX_STACK_LINE(44)
		bool tmp = P->alive;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(44)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(44)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(44)
		if ((tmp1)){
			HX_STACK_LINE(44)
			tmp2 = P->exists;
		}
		else{
			HX_STACK_LINE(44)
			tmp2 = false;
		}
		HX_STACK_LINE(44)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(44)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(44)
		if ((tmp3)){
			HX_STACK_LINE(44)
			tmp4 = C->alive;
		}
		else{
			HX_STACK_LINE(44)
			tmp4 = false;
		}
		HX_STACK_LINE(44)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(44)
		if ((tmp4)){
			HX_STACK_LINE(44)
			tmp5 = C->exists;
		}
		else{
			HX_STACK_LINE(44)
			tmp5 = false;
		}
		HX_STACK_LINE(44)
		if ((tmp5)){
			HX_STACK_LINE(45)
			C->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchCoin,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",52,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		::flixel::addons::editors::ogmo::FlxOgmoLoader tmp = ::flixel::addons::editors::ogmo::FlxOgmoLoader_obj::__new(HX_HCSTRING("assets/data/room-001.oel","\xe0","\x98","\x2c","\x9a"));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(53)
		this->_map = tmp;
		HX_STACK_LINE(55)
		::flixel::addons::editors::ogmo::FlxOgmoLoader tmp1 = this->_map;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(55)
		::flixel::tile::FlxTilemap tmp2 = tmp1->loadTilemap(HX_HCSTRING("assets/images/tiles.png","\x35","\xbc","\xd1","\xf5"),(int)16,(int)16,HX_HCSTRING("walls","\x29","\x0c","\x1f","\xc5"));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(55)
		this->_mWalls = tmp2;
		HX_STACK_LINE(56)
		::flixel::tile::FlxTilemap tmp3 = this->_mWalls;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(56)
		tmp3->setTileProperties((int)1,(int)0,null(),null(),null());
		HX_STACK_LINE(57)
		::flixel::tile::FlxTilemap tmp4 = this->_mWalls;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(57)
		tmp4->setTileProperties((int)2,(int)4369,null(),null(),null());
		HX_STACK_LINE(58)
		::flixel::tile::FlxTilemap tmp5 = this->_mWalls;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(58)
		this->add(tmp5);
		HX_STACK_LINE(60)
		::flixel::group::FlxTypedGroup tmp6 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		this->_grpCoins = tmp6;
		HX_STACK_LINE(61)
		::flixel::group::FlxTypedGroup tmp7 = this->_grpCoins;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		this->add(tmp7);
		HX_STACK_LINE(63)
		::Player tmp8 = ::Player_obj::__new(null(),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(63)
		this->_player = tmp8;
		HX_STACK_LINE(64)
		::flixel::addons::editors::ogmo::FlxOgmoLoader tmp9 = this->_map;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(64)
		Dynamic tmp10 = this->placeEntities_dyn();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(64)
		tmp9->loadEntities(tmp10,HX_HCSTRING("entities","\x41","\x96","\x95","\x92"));
		HX_STACK_LINE(65)
		::Player tmp11 = this->_player;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(65)
		this->add(tmp11);
		HX_STACK_LINE(67)
		::flixel::FlxCamera tmp12 = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(67)
		::Player tmp13 = this->_player;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(67)
		tmp12->follow(tmp13,(int)2,null(),(int)1);
		HX_STACK_LINE(68)
		this->super::create();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",77,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",84,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->super::update();
		HX_STACK_LINE(86)
		::Player tmp = this->_player;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(86)
		::flixel::tile::FlxTilemap tmp1 = this->_mWalls;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		Dynamic tmp2 = ::flixel::FlxObject_obj::separate_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(86)
		::flixel::FlxG_obj::overlap(tmp,tmp1,null(),tmp2);
		HX_STACK_LINE(87)
		::Player tmp3 = this->_player;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(87)
		::flixel::group::FlxTypedGroup tmp4 = this->_grpCoins;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(87)
		Dynamic tmp5 = this->playerTouchCoin_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(87)
		::flixel::FlxG_obj::overlap(tmp3,tmp4,tmp5,null());
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_MEMBER_NAME(_mWalls,"_mWalls");
	HX_MARK_MEMBER_NAME(_grpCoins,"_grpCoins");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_map,"_map");
	HX_VISIT_MEMBER_NAME(_mWalls,"_mWalls");
	HX_VISIT_MEMBER_NAME(_grpCoins,"_grpCoins");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_mWalls") ) { return _mWalls; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_grpCoins") ) { return _grpCoins; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return placeEntities_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerTouchCoin") ) { return playerTouchCoin_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::flixel::addons::editors::ogmo::FlxOgmoLoader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mWalls") ) { _mWalls=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_grpCoins") ) { _grpCoins=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"));
	outFields->push(HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"));
	outFields->push(HX_HCSTRING("_mWalls","\x1b","\xe2","\xa9","\x5b"));
	outFields->push(HX_HCSTRING("_grpCoins","\xfc","\xc6","\xf0","\x74"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6")},
	{hx::fsObject /*::flixel::addons::editors::ogmo::FlxOgmoLoader*/ ,(int)offsetof(PlayState_obj,_map),HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_mWalls),HX_HCSTRING("_mWalls","\x1b","\xe2","\xa9","\x5b")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpCoins),HX_HCSTRING("_grpCoins","\xfc","\xc6","\xf0","\x74")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_player","\x00","\xfd","\x2f","\xa6"),
	HX_HCSTRING("_map","\x9d","\x4f","\x1e","\x3f"),
	HX_HCSTRING("_mWalls","\x1b","\xe2","\xa9","\x5b"),
	HX_HCSTRING("_grpCoins","\xfc","\xc6","\xf0","\x74"),
	HX_HCSTRING("placeEntities","\x28","\xe6","\x91","\x17"),
	HX_HCSTRING("playerTouchCoin","\x4f","\x45","\x8d","\xf2"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
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

