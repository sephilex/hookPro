//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutStoreDetailModel : TBJSONModel
{
    _Bool _newRestaurant;	// 8 = 0x8
    _Bool _onlinePayment;	// 9 = 0x9
    NSString *_storeId;	// 16 = 0x10
    NSString *_dataSource;	// 24 = 0x18
    NSString *_supportInsurance;	// 32 = 0x20
    NSArray *_activityList;	// 40 = 0x28
    NSString *_notice;	// 48 = 0x30
    NSString *_distRst;	// 56 = 0x38
    NSString *_saleCount;	// 64 = 0x40
    NSString *_addressText;	// 72 = 0x48
    NSString *_storeDesc;	// 80 = 0x50
    NSString *_deliverAmount;	// 88 = 0x58
    NSString *_starPicUrl;	// 96 = 0x60
    NSString *_sellerId;	// 104 = 0x68
    NSString *_deliverTime;	// 112 = 0x70
    NSArray *_activities;	// 120 = 0x78
    NSString *_agentFee;	// 128 = 0x80
    NSArray *_categorys;	// 136 = 0x88
    NSString *_outId;	// 144 = 0x90
    NSString *_valid;	// 152 = 0x98
    NSString *_name;	// 160 = 0xa0
    NSString *_invoiceMinAmount;	// 168 = 0xa8
    NSString *_longitude;	// 176 = 0xb0
    NSString *_noAgentFeeTotal;	// 184 = 0xb8
    NSString *_deliverSpent;	// 192 = 0xc0
    NSString *_city;	// 200 = 0xc8
    NSString *_alreadyBought;	// 208 = 0xd0
    NSArray *_servingTime;	// 216 = 0xd8
    NSString *_starLevel;	// 224 = 0xe0
    NSString *_mobile;	// 232 = 0xe8
    NSString *_categoryIds;	// 240 = 0xf0
    NSString *_busyLevel;	// 248 = 0xf8
    NSString *_isBookable;	// 256 = 0x100
    NSString *_timeEnsure;	// 264 = 0x108
    NSString *_storeClosed;	// 272 = 0x110
    NSString *_payOnDelivery;	// 280 = 0x118
    NSString *_premium;	// 288 = 0x120
    NSString *_invoice;	// 296 = 0x128
    NSString *_shopStatus;	// 304 = 0x130
    NSString *_licenseImage;	// 312 = 0x138
    NSArray *_itemList;	// 320 = 0x140
    NSString *_overArea;	// 328 = 0x148
    NSString *_shopId;	// 336 = 0x150
    NSString *_shopLogo;	// 344 = 0x158
    NSString *_serviceLicenseImage;	// 352 = 0x160
    NSString *_latitude;	// 360 = 0x168
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *serviceLicenseImage; // @synthesize serviceLicenseImage=_serviceLicenseImage;
@property(copy, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *overArea; // @synthesize overArea=_overArea;
@property(copy, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
@property(copy, nonatomic) NSString *licenseImage; // @synthesize licenseImage=_licenseImage;
@property(copy, nonatomic) NSString *shopStatus; // @synthesize shopStatus=_shopStatus;
@property(copy, nonatomic) NSString *invoice; // @synthesize invoice=_invoice;
@property(copy, nonatomic) NSString *premium; // @synthesize premium=_premium;
@property(copy, nonatomic) NSString *payOnDelivery; // @synthesize payOnDelivery=_payOnDelivery;
@property(copy, nonatomic) NSString *storeClosed; // @synthesize storeClosed=_storeClosed;
@property(copy, nonatomic) NSString *timeEnsure; // @synthesize timeEnsure=_timeEnsure;
@property(copy, nonatomic) NSString *isBookable; // @synthesize isBookable=_isBookable;
@property(copy, nonatomic) NSString *busyLevel; // @synthesize busyLevel=_busyLevel;
@property(copy, nonatomic) NSString *categoryIds; // @synthesize categoryIds=_categoryIds;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *starLevel; // @synthesize starLevel=_starLevel;
@property(copy, nonatomic) NSArray *servingTime; // @synthesize servingTime=_servingTime;
@property(copy, nonatomic) NSString *alreadyBought; // @synthesize alreadyBought=_alreadyBought;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *deliverSpent; // @synthesize deliverSpent=_deliverSpent;
@property(copy, nonatomic) NSString *noAgentFeeTotal; // @synthesize noAgentFeeTotal=_noAgentFeeTotal;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *invoiceMinAmount; // @synthesize invoiceMinAmount=_invoiceMinAmount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *valid; // @synthesize valid=_valid;
@property(nonatomic) _Bool onlinePayment; // @synthesize onlinePayment=_onlinePayment;
@property(copy, nonatomic) NSString *outId; // @synthesize outId=_outId;
@property(copy, nonatomic) NSArray *categorys; // @synthesize categorys=_categorys;
@property(copy, nonatomic) NSString *agentFee; // @synthesize agentFee=_agentFee;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSString *deliverTime; // @synthesize deliverTime=_deliverTime;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *starPicUrl; // @synthesize starPicUrl=_starPicUrl;
@property(copy, nonatomic) NSString *deliverAmount; // @synthesize deliverAmount=_deliverAmount;
@property(nonatomic) _Bool newRestaurant; // @synthesize newRestaurant=_newRestaurant;
@property(copy, nonatomic) NSString *storeDesc; // @synthesize storeDesc=_storeDesc;
@property(copy, nonatomic) NSString *addressText; // @synthesize addressText=_addressText;
@property(copy, nonatomic) NSString *saleCount; // @synthesize saleCount=_saleCount;
@property(copy, nonatomic) NSString *distRst; // @synthesize distRst=_distRst;
@property(copy, nonatomic) NSString *notice; // @synthesize notice=_notice;
@property(copy, nonatomic) NSArray *activityList; // @synthesize activityList=_activityList;
@property(copy, nonatomic) NSString *supportInsurance; // @synthesize supportInsurance=_supportInsurance;
@property(copy, nonatomic) NSString *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

