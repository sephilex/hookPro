//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TXCreateOrderItemModel : TBJSONModel
{
    NSString *_result;	// 8 = 0x8
    NSString *_orderId;	// 16 = 0x10
    NSString *_account;	// 24 = 0x18
    NSString *_facePrice;	// 32 = 0x20
    NSString *_itemId;	// 40 = 0x28
    NSString *_payOrderId;	// 48 = 0x30
    NSString *_tbprice;	// 56 = 0x38
    NSString *_sign;	// 64 = 0x40
    NSString *_backUrl;	// 72 = 0x48
    NSString *_alipayUrl;	// 80 = 0x50
    NSString *_success;	// 88 = 0x58
    NSString *_cnDesc;	// 96 = 0x60
    NSString *_desc;	// 104 = 0x68
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *cnDesc; // @synthesize cnDesc=_cnDesc;
@property(copy, nonatomic) NSString *success; // @synthesize success=_success;
@property(copy, nonatomic) NSString *alipayUrl; // @synthesize alipayUrl=_alipayUrl;
@property(copy, nonatomic) NSString *backUrl; // @synthesize backUrl=_backUrl;
@property(copy, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(copy, nonatomic) NSString *tbprice; // @synthesize tbprice=_tbprice;
@property(copy, nonatomic) NSString *payOrderId; // @synthesize payOrderId=_payOrderId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *facePrice; // @synthesize facePrice=_facePrice;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end
