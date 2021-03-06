//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDBoxBaseModel.h"

@class NSNumber, NSString;

@interface JDBoxSkuRushModel : JDBoxBaseModel
{
    int _buyStatus;
    NSString *_sku;
    NSString *_name;
    NSString *_img;
    NSString *_price;
    NSNumber *_startRemain;
    NSNumber *_endRemain;
    NSString *_leftCornerTop;
    NSString *_leftCornerDown;
    NSString *_leftTag;
    NSNumber *_onSell;
}

@property(nonatomic) int buyStatus; // @synthesize buyStatus=_buyStatus;
@property(copy, nonatomic) NSNumber *onSell; // @synthesize onSell=_onSell;
@property(copy, nonatomic) NSString *leftTag; // @synthesize leftTag=_leftTag;
@property(copy, nonatomic) NSString *leftCornerDown; // @synthesize leftCornerDown=_leftCornerDown;
@property(copy, nonatomic) NSString *leftCornerTop; // @synthesize leftCornerTop=_leftCornerTop;
@property(copy, nonatomic) NSNumber *endRemain; // @synthesize endRemain=_endRemain;
@property(copy, nonatomic) NSNumber *startRemain; // @synthesize startRemain=_startRemain;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
- (_Bool)isHasLeftTag;
- (void)setFastBuyStatus;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end

