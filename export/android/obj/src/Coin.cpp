#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif

Void Coin_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Coin","new",0x704aaf23,"Coin.new","Coin.hx",15,0x01a6c5ad)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(16)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(17)
	this->loadGraphic(HX_HCSTRING("assets/images/coin.png","\xf7","\xe9","\xc5","\x54"),false,(int)8,(int)8,null(),null());
}
;
	return null();
}

//Coin_obj::~Coin_obj() { }

Dynamic Coin_obj::__CreateEmpty() { return  new Coin_obj; }
hx::ObjectPtr< Coin_obj > Coin_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Coin_obj > _result_ = new Coin_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic Coin_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Coin_obj > _result_ = new Coin_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Coin_obj::kill( ){
{
		HX_STACK_FRAME("Coin","kill",0xcf15eb7b,"Coin.kill","Coin.hx",21,0x01a6c5ad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(22)
		this->set_alive(false);
		HX_STACK_LINE(23)
		Float tmp = this->y;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		Float tmp1 = (tmp - (int)16);		HX_STACK_VAR(tmp1,"tmp1");
		struct _Function_1_1{
			inline static Dynamic Block( Float &tmp1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Coin.hx",23,0x01a6c5ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21") , (int)0,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , tmp1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic tmp2 = _Function_1_1::Block(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(23)
		Dynamic tmp3 = ::flixel::tweens::FlxEase_obj::circOut_dyn();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(23)
		Dynamic tmp4 = this->finishKill_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		struct _Function_1_2{
			inline static Dynamic Block( Dynamic &tmp4,Dynamic &tmp3){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Coin.hx",23,0x01a6c5ad)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43") , tmp3,false);
					__result->Add(HX_HCSTRING("complete","\xb9","\x00","\xc8","\x7f") , tmp4,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(23)
		Dynamic tmp5 = _Function_1_2::Block(tmp4,tmp3);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(23)
		::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),tmp2,((Float).33),tmp5);
	}
return null();
}


Void Coin_obj::finishKill( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("Coin","finishKill",0x3e72412e,"Coin.finishKill","Coin.hx",28,0x01a6c5ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(28)
		this->set_exists(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Coin_obj,finishKill,(void))


Coin_obj::Coin_obj()
{
}

Dynamic Coin_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"finishKill") ) { return finishKill_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("kill","\x9e","\xdf","\x09","\x47"),
	HX_HCSTRING("finishKill","\x91","\x71","\x44","\xd3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Coin_obj::__mClass,"__mClass");
};

#endif

hx::Class Coin_obj::__mClass;

void Coin_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Coin","\xb1","\xe1","\x9d","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Coin_obj >;
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

