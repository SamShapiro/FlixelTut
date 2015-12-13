#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",13,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(15)
	this->speed = ((Float)200);
	HX_STACK_LINE(19)
	Float tmp = X;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(19)
	Float tmp1 = Y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(19)
	super::__construct(tmp,tmp1,null());
	HX_STACK_LINE(20)
	this->loadGraphic(HX_HCSTRING("assets/images/player.png","\x87","\x88","\x81","\xc6"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::haxe::ds::IntMap tmp2 = this->_facingFlip;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",21,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , false,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(21)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(21)
		tmp2->set((int)1,tmp3);
	}
	HX_STACK_LINE(22)
	{
		HX_STACK_LINE(22)
		::haxe::ds::IntMap tmp2 = this->_facingFlip;		HX_STACK_VAR(tmp2,"tmp2");
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",22,0xa27fc9dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_HCSTRING("x","\x78","\x00","\x00","\x00") , true,false);
					__result->Add(HX_HCSTRING("y","\x79","\x00","\x00","\x00") , false,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(22)
		Dynamic tmp3 = _Function_2_1::Block();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(22)
		tmp2->set((int)16,tmp3);
	}
	HX_STACK_LINE(23)
	::flixel::animation::FlxAnimationController tmp2 = this->animation;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(23)
	tmp2->add(HX_HCSTRING("lr","\x86","\x5e","\x00","\x00"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)3).Add((int)5),(int)6,false);
	HX_STACK_LINE(24)
	::flixel::animation::FlxAnimationController tmp3 = this->animation;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	tmp3->add(HX_HCSTRING("u","\x75","\x00","\x00","\x00"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)6).Add((int)8),(int)6,false);
	HX_STACK_LINE(25)
	::flixel::animation::FlxAnimationController tmp4 = this->animation;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(25)
	tmp4->add(HX_HCSTRING("d","\x64","\x00","\x00","\x00"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)6,false);
	HX_STACK_LINE(27)
	::flixel::util::FlxPoint tmp5 = this->drag;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(27)
	::flixel::util::FlxPoint tmp6 = this->drag;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(27)
	Float tmp7 = tmp6->set_y((int)1600);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(27)
	tmp5->set_x(tmp7);
	HX_STACK_LINE(28)
	this->setSize((int)8,(int)14);
	HX_STACK_LINE(29)
	::flixel::util::FlxPoint tmp8 = this->offset;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(29)
	tmp8->set((int)4,(int)2);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(__o_X,__o_Y);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Player_obj::movement( ){
{
		HX_STACK_FRAME("Player","movement",0x91ad8bbc,"Player.movement","Player.hx",33,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		bool _up = false;		HX_STACK_VAR(_up,"_up");
		HX_STACK_LINE(35)
		bool _down = false;		HX_STACK_VAR(_down,"_down");
		HX_STACK_LINE(36)
		bool _left = false;		HX_STACK_VAR(_left,"_left");
		HX_STACK_LINE(37)
		bool _right = false;		HX_STACK_VAR(_right,"_right");
		HX_STACK_LINE(39)
		::flixel::input::keyboard::FlxKeyboard tmp = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(39)
		bool tmp1 = tmp->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")).Add(HX_HCSTRING("W","\x57","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(39)
		_up = tmp1;
		HX_STACK_LINE(40)
		::flixel::input::keyboard::FlxKeyboard tmp2 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(40)
		bool tmp3 = tmp2->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")).Add(HX_HCSTRING("S","\x53","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(40)
		_down = tmp3;
		HX_STACK_LINE(41)
		::flixel::input::keyboard::FlxKeyboard tmp4 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		bool tmp5 = tmp4->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")).Add(HX_HCSTRING("A","\x41","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		_left = tmp5;
		HX_STACK_LINE(42)
		::flixel::input::keyboard::FlxKeyboard tmp6 = ::flixel::FlxG_obj::keys;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(42)
		bool tmp7 = tmp6->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")).Add(HX_HCSTRING("D","\x44","\x00","\x00","\x00")),(int)1);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		_right = tmp7;
		HX_STACK_LINE(44)
		bool tmp8 = _up;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(44)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(44)
		if ((tmp8)){
			HX_STACK_LINE(44)
			tmp9 = _down;
		}
		else{
			HX_STACK_LINE(44)
			tmp9 = false;
		}
		HX_STACK_LINE(44)
		if ((tmp9)){
			HX_STACK_LINE(45)
			bool tmp10 = _down = false;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(45)
			_up = tmp10;
		}
		HX_STACK_LINE(46)
		bool tmp10 = _left;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(46)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(46)
		if ((tmp10)){
			HX_STACK_LINE(46)
			tmp11 = _right;
		}
		else{
			HX_STACK_LINE(46)
			tmp11 = false;
		}
		HX_STACK_LINE(46)
		if ((tmp11)){
			HX_STACK_LINE(47)
			bool tmp12 = _right = false;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(47)
			_left = tmp12;
		}
		HX_STACK_LINE(49)
		bool tmp12 = _up;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(49)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(49)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(49)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(49)
		if ((tmp14)){
			HX_STACK_LINE(49)
			tmp15 = _down;
		}
		else{
			HX_STACK_LINE(49)
			tmp15 = true;
		}
		HX_STACK_LINE(49)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(49)
		bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(49)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(49)
		if ((tmp17)){
			HX_STACK_LINE(49)
			tmp18 = _left;
		}
		else{
			HX_STACK_LINE(49)
			tmp18 = true;
		}
		HX_STACK_LINE(49)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(49)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(49)
		if ((tmp19)){
			HX_STACK_LINE(49)
			tmp20 = _right;
		}
		else{
			HX_STACK_LINE(49)
			tmp20 = true;
		}
		HX_STACK_LINE(49)
		if ((tmp20)){
			HX_STACK_LINE(51)
			Float mA = (int)0;		HX_STACK_VAR(mA,"mA");
			HX_STACK_LINE(52)
			bool tmp21 = _up;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(52)
			if ((tmp21)){
				HX_STACK_LINE(54)
				mA = (int)-90;
				HX_STACK_LINE(55)
				bool tmp22 = _left;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(55)
				if ((tmp22)){
					HX_STACK_LINE(56)
					hx::SubEq(mA,(int)45);
				}
				else{
					HX_STACK_LINE(57)
					bool tmp23 = _right;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(57)
					if ((tmp23)){
						HX_STACK_LINE(58)
						hx::AddEq(mA,(int)45);
					}
				}
				HX_STACK_LINE(59)
				this->set_facing((int)256);
			}
			else{
				HX_STACK_LINE(61)
				bool tmp22 = _down;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(61)
				if ((tmp22)){
					HX_STACK_LINE(63)
					mA = (int)90;
					HX_STACK_LINE(64)
					bool tmp23 = _left;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(64)
					if ((tmp23)){
						HX_STACK_LINE(65)
						hx::AddEq(mA,(int)45);
					}
					else{
						HX_STACK_LINE(66)
						bool tmp24 = _right;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(66)
						if ((tmp24)){
							HX_STACK_LINE(67)
							hx::SubEq(mA,(int)45);
						}
					}
					HX_STACK_LINE(68)
					this->set_facing((int)4096);
				}
				else{
					HX_STACK_LINE(70)
					bool tmp23 = _left;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(70)
					if ((tmp23)){
						HX_STACK_LINE(72)
						mA = (int)180;
						HX_STACK_LINE(73)
						this->set_facing((int)1);
					}
					else{
						HX_STACK_LINE(75)
						bool tmp24 = _right;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(75)
						if ((tmp24)){
							HX_STACK_LINE(77)
							mA = (int)0;
							HX_STACK_LINE(78)
							this->set_facing((int)16);
						}
					}
				}
			}
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::flixel::util::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(80)
				::flixel::util::FlxPoint point = tmp22;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(80)
				Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(80)
				Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(80)
				Float tmp23 = mA;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(80)
				Float tmp24 = ::Math_obj::PI;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(80)
				Float tmp25 = (Float(tmp24) / Float((int)180));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(80)
				Float tmp26 = -(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(80)
				Float tmp27 = (tmp23 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(80)
				Float radians = tmp27;		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(80)
				while((true)){
					HX_STACK_LINE(80)
					Float tmp28 = radians;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(80)
					Float tmp29 = ::Math_obj::PI;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(80)
					Float tmp30 = -(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(80)
					bool tmp31 = (tmp28 < tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(80)
					bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(80)
					if ((tmp32)){
						HX_STACK_LINE(80)
						break;
					}
					HX_STACK_LINE(80)
					Float tmp33 = ::Math_obj::PI;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(80)
					Float tmp34 = (tmp33 * (int)2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(80)
					hx::AddEq(radians,tmp34);
				}
				HX_STACK_LINE(80)
				while((true)){
					HX_STACK_LINE(80)
					Float tmp28 = radians;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(80)
					Float tmp29 = ::Math_obj::PI;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(80)
					bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(80)
					bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(80)
					if ((tmp31)){
						HX_STACK_LINE(80)
						break;
					}
					HX_STACK_LINE(80)
					Float tmp32 = radians;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(80)
					Float tmp33 = ::Math_obj::PI;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(80)
					Float tmp34 = (tmp33 * (int)2);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(80)
					Float tmp35 = (tmp32 - tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(80)
					radians = tmp35;
				}
				HX_STACK_LINE(80)
				bool tmp28 = (radians < (int)0);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(80)
				if ((tmp28)){
					HX_STACK_LINE(80)
					Float tmp29 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(80)
					Float tmp30 = (((Float).405284735) * radians);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(80)
					Float tmp31 = radians;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(80)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(80)
					Float tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(80)
					sin = tmp33;
					HX_STACK_LINE(80)
					bool tmp34 = (sin < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(80)
					if ((tmp34)){
						HX_STACK_LINE(80)
						Float tmp35 = sin;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(80)
						Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(80)
						Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(80)
						Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(80)
						Float tmp39 = sin;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(80)
						Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(80)
						Float tmp41 = (((Float).225) * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = sin;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						sin = tmp43;
					}
					else{
						HX_STACK_LINE(80)
						Float tmp35 = (sin * sin);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(80)
						Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(80)
						Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(80)
						Float tmp38 = (((Float).225) * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(80)
						Float tmp39 = sin;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(80)
						Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(80)
						sin = tmp40;
					}
				}
				else{
					HX_STACK_LINE(80)
					Float tmp29 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(80)
					Float tmp30 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(80)
					Float tmp31 = radians;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(80)
					Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(80)
					Float tmp33 = (tmp29 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(80)
					sin = tmp33;
					HX_STACK_LINE(80)
					bool tmp34 = (sin < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(80)
					if ((tmp34)){
						HX_STACK_LINE(80)
						Float tmp35 = sin;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(80)
						Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(80)
						Float tmp37 = -(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(80)
						Float tmp38 = (tmp35 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(80)
						Float tmp39 = sin;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(80)
						Float tmp40 = (tmp38 - tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(80)
						Float tmp41 = (((Float).225) * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = sin;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = (tmp41 + tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						sin = tmp43;
					}
					else{
						HX_STACK_LINE(80)
						Float tmp35 = (sin * sin);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(80)
						Float tmp36 = sin;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(80)
						Float tmp37 = (tmp35 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(80)
						Float tmp38 = (((Float).225) * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(80)
						Float tmp39 = sin;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(80)
						Float tmp40 = (tmp38 + tmp39);		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(80)
						sin = tmp40;
					}
				}
				HX_STACK_LINE(80)
				Float tmp29 = ::Math_obj::PI;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(80)
				Float tmp30 = (Float(tmp29) / Float((int)2));		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(80)
				hx::AddEq(radians,tmp30);
				HX_STACK_LINE(80)
				Float tmp31 = radians;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(80)
				Float tmp32 = ::Math_obj::PI;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(80)
				bool tmp33 = (tmp31 > tmp32);		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(80)
				if ((tmp33)){
					HX_STACK_LINE(80)
					Float tmp34 = radians;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(80)
					Float tmp35 = ::Math_obj::PI;		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(80)
					Float tmp36 = (tmp35 * (int)2);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(80)
					Float tmp37 = (tmp34 - tmp36);		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(80)
					radians = tmp37;
				}
				HX_STACK_LINE(80)
				bool tmp34 = (radians < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(80)
				if ((tmp34)){
					HX_STACK_LINE(80)
					Float tmp35 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(80)
					Float tmp36 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(80)
					Float tmp37 = radians;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(80)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(80)
					Float tmp39 = (tmp35 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(80)
					cos = tmp39;
					HX_STACK_LINE(80)
					bool tmp40 = (cos < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(80)
					if ((tmp40)){
						HX_STACK_LINE(80)
						Float tmp41 = cos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = cos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(80)
						Float tmp45 = cos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(80)
						Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(80)
						Float tmp47 = (((Float).225) * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(80)
						Float tmp48 = cos;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(80)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(80)
						cos = tmp49;
					}
					else{
						HX_STACK_LINE(80)
						Float tmp41 = (cos * cos);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = cos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						Float tmp44 = (((Float).225) * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(80)
						Float tmp45 = cos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(80)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(80)
						cos = tmp46;
					}
				}
				else{
					HX_STACK_LINE(80)
					Float tmp35 = (((Float)1.27323954) * radians);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(80)
					Float tmp36 = (((Float)0.405284735) * radians);		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(80)
					Float tmp37 = radians;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(80)
					Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(80)
					Float tmp39 = (tmp35 - tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(80)
					cos = tmp39;
					HX_STACK_LINE(80)
					bool tmp40 = (cos < (int)0);		HX_STACK_VAR(tmp40,"tmp40");
					HX_STACK_LINE(80)
					if ((tmp40)){
						HX_STACK_LINE(80)
						Float tmp41 = cos;		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = cos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = -(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						Float tmp44 = (tmp41 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(80)
						Float tmp45 = cos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(80)
						Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(80)
						Float tmp47 = (((Float).225) * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
						HX_STACK_LINE(80)
						Float tmp48 = cos;		HX_STACK_VAR(tmp48,"tmp48");
						HX_STACK_LINE(80)
						Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
						HX_STACK_LINE(80)
						cos = tmp49;
					}
					else{
						HX_STACK_LINE(80)
						Float tmp41 = (cos * cos);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = cos;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = (tmp41 - tmp42);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						Float tmp44 = (((Float).225) * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(80)
						Float tmp45 = cos;		HX_STACK_VAR(tmp45,"tmp45");
						HX_STACK_LINE(80)
						Float tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
						HX_STACK_LINE(80)
						cos = tmp46;
					}
				}
				HX_STACK_LINE(80)
				Float tmp35 = this->speed;		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(80)
				Float tmp36 = tmp35;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(80)
				Float dx = tmp36;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(80)
				Float tmp37 = (int)0;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(80)
				Float dy = tmp37;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(80)
				bool tmp38 = (point == null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(80)
				if ((tmp38)){
					HX_STACK_LINE(80)
					::flixel::util::FlxPoint tmp39;		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(80)
					{
						HX_STACK_LINE(80)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(80)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(80)
						::flixel::util::FlxPool tmp40 = ::flixel::util::FlxPoint_obj::_pool;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(80)
						::flixel::util::FlxPoint tmp41 = tmp40->get();		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(80)
						Float tmp42 = X;		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(80)
						Float tmp43 = Y;		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(80)
						::flixel::util::FlxPoint tmp44 = tmp41->set(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
						HX_STACK_LINE(80)
						::flixel::util::FlxPoint point1 = tmp44;		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(80)
						point1->_inPool = false;
						HX_STACK_LINE(80)
						tmp39 = point1;
					}
					HX_STACK_LINE(80)
					point = tmp39;
				}
				HX_STACK_LINE(80)
				Float tmp39 = (cos * dx);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(80)
				Float tmp40 = tmp39;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(80)
				Float tmp41 = (sin * dy);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(80)
				Float tmp42 = (tmp40 - tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(80)
				point->set_x(tmp42);
				HX_STACK_LINE(80)
				Float tmp43 = (sin * dx);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(80)
				Float tmp44 = ((int)0 - tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(80)
				Float tmp45 = (cos * dy);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(80)
				Float tmp46 = (tmp44 - tmp45);		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(80)
				point->set_y(tmp46);
				HX_STACK_LINE(80)
				point;
			}
			HX_STACK_LINE(82)
			::flixel::util::FlxPoint tmp22 = this->velocity;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(82)
			Float tmp23 = tmp22->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(82)
			bool tmp24 = (tmp23 != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(82)
			bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(82)
			bool tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(82)
			bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(82)
			if ((tmp26)){
				HX_STACK_LINE(82)
				::flixel::util::FlxPoint tmp28 = this->velocity;		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(82)
				::flixel::util::FlxPoint tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(82)
				::flixel::util::FlxPoint tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(82)
				Float tmp31 = tmp30->y;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(82)
				tmp27 = (tmp31 != (int)0);
			}
			else{
				HX_STACK_LINE(82)
				tmp27 = true;
			}
			HX_STACK_LINE(82)
			bool tmp28;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(82)
			if ((tmp27)){
				HX_STACK_LINE(82)
				int tmp29 = this->touching;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(82)
				int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(82)
				tmp28 = (tmp30 == (int)0);
			}
			else{
				HX_STACK_LINE(82)
				tmp28 = false;
			}
			HX_STACK_LINE(82)
			if ((tmp28)){
				HX_STACK_LINE(84)
				int tmp29 = this->facing;		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(84)
				int _g = tmp29;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(84)
				int tmp30 = _g;		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(84)
				switch( (int)(tmp30)){
					case (int)1: case (int)16: {
						HX_STACK_LINE(87)
						::flixel::animation::FlxAnimationController tmp31 = this->animation;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(87)
						tmp31->play(HX_HCSTRING("lr","\x86","\x5e","\x00","\x00"),null(),null());
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(89)
						::flixel::animation::FlxAnimationController tmp31 = this->animation;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(89)
						tmp31->play(HX_HCSTRING("u","\x75","\x00","\x00","\x00"),null(),null());
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(91)
						::flixel::animation::FlxAnimationController tmp31 = this->animation;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(91)
						tmp31->play(HX_HCSTRING("d","\x64","\x00","\x00","\x00"),null(),null());
					}
					;break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",98,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(99)
		this->movement();
		HX_STACK_LINE(100)
		this->super::update();
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

