//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class B2CInfoDTO, BuyerInfoDTO, C2CInfoDTO, NSArray, NSDate, NSNumber, NSString, UserSettingBO;

@interface WXContactProfileV2 : NSObject
{
    _Bool _shop_freepostage;	// 8 = 0x8
    NSString *_longUid;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_signature;	// 32 = 0x20
    NSString *_avatar;	// 40 = 0x28
    NSString *_gender;	// 48 = 0x30
    NSString *_region;	// 56 = 0x38
    NSString *_country;	// 64 = 0x40
    NSString *_province;	// 72 = 0x48
    NSString *_city;	// 80 = 0x50
    NSString *_district;	// 88 = 0x58
    NSString *_phone_num;	// 96 = 0x60
    NSString *_md5_phone;	// 104 = 0x68
    NSString *_mobile;	// 112 = 0x70
    long long _verify_flag;	// 120 = 0x78
    NSString *_verify_question;	// 128 = 0x80
    NSString *_verify_answer;	// 136 = 0x88
    NSString *_bg_image;	// 144 = 0x90
    long long _vip_level;	// 152 = 0x98
    long long _identity;	// 160 = 0xa0
    NSString *_shop_name;	// 168 = 0xa8
    NSString *_shop_url;	// 176 = 0xb0
    long long _shop_relation;	// 184 = 0xb8
    NSDate *_shop_createtime;	// 192 = 0xc0
    long long _shop_discount;	// 200 = 0xc8
    NSString *_shop_point;	// 208 = 0xd0
    NSNumber *_buyer_rank;	// 216 = 0xd8
    NSString *_buyer_rank_image;	// 224 = 0xe0
    NSNumber *_pub_id;	// 232 = 0xe8
    NSString *_pub_nick;	// 240 = 0xf0
    NSString *_pub_desc;	// 248 = 0xf8
    long long _pub_follow_flag;	// 256 = 0x100
    NSNumber *_ali_clerk_flag;	// 264 = 0x108
    NSNumber *_seller_channel;	// 272 = 0x110
    UserSettingBO *_settings;	// 280 = 0x118
    BuyerInfoDTO *_buyer_info;	// 288 = 0x120
    C2CInfoDTO *_c2c_info;	// 296 = 0x128
    B2CInfoDTO *_b2c_info;	// 304 = 0x130
    NSArray *_ext;	// 312 = 0x138
}

@property(retain, nonatomic) NSArray *ext; // @synthesize ext=_ext;
@property(retain, nonatomic) B2CInfoDTO *b2c_info; // @synthesize b2c_info=_b2c_info;
@property(retain, nonatomic) C2CInfoDTO *c2c_info; // @synthesize c2c_info=_c2c_info;
@property(retain, nonatomic) BuyerInfoDTO *buyer_info; // @synthesize buyer_info=_buyer_info;
@property(retain, nonatomic) UserSettingBO *settings; // @synthesize settings=_settings;
@property(nonatomic) NSNumber *seller_channel; // @synthesize seller_channel=_seller_channel;
@property(nonatomic) NSNumber *ali_clerk_flag; // @synthesize ali_clerk_flag=_ali_clerk_flag;
@property(nonatomic) long long pub_follow_flag; // @synthesize pub_follow_flag=_pub_follow_flag;
@property(retain, nonatomic) NSString *pub_desc; // @synthesize pub_desc=_pub_desc;
@property(retain, nonatomic) NSString *pub_nick; // @synthesize pub_nick=_pub_nick;
@property(retain, nonatomic) NSNumber *pub_id; // @synthesize pub_id=_pub_id;
@property(retain, nonatomic) NSString *buyer_rank_image; // @synthesize buyer_rank_image=_buyer_rank_image;
@property(retain, nonatomic) NSNumber *buyer_rank; // @synthesize buyer_rank=_buyer_rank;
@property(nonatomic) _Bool shop_freepostage; // @synthesize shop_freepostage=_shop_freepostage;
@property(retain, nonatomic) NSString *shop_point; // @synthesize shop_point=_shop_point;
@property(nonatomic) long long shop_discount; // @synthesize shop_discount=_shop_discount;
@property(retain, nonatomic) NSDate *shop_createtime; // @synthesize shop_createtime=_shop_createtime;
@property(nonatomic) long long shop_relation; // @synthesize shop_relation=_shop_relation;
@property(retain, nonatomic) NSString *shop_url; // @synthesize shop_url=_shop_url;
@property(retain, nonatomic) NSString *shop_name; // @synthesize shop_name=_shop_name;
@property(nonatomic) long long identity; // @synthesize identity=_identity;
@property(nonatomic) long long vip_level; // @synthesize vip_level=_vip_level;
@property(retain, nonatomic) NSString *bg_image; // @synthesize bg_image=_bg_image;
@property(retain, nonatomic) NSString *verify_answer; // @synthesize verify_answer=_verify_answer;
@property(retain, nonatomic) NSString *verify_question; // @synthesize verify_question=_verify_question;
@property(nonatomic) long long verify_flag; // @synthesize verify_flag=_verify_flag;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *md5_phone; // @synthesize md5_phone=_md5_phone;
@property(retain, nonatomic) NSString *phone_num; // @synthesize phone_num=_phone_num;
@property(retain, nonatomic) NSString *district; // @synthesize district=_district;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *longUid; // @synthesize longUid=_longUid;
- (void).cxx_destruct;
- (void)dealloc;

@end
