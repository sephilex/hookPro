//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBQGItemModel;

@interface TBQGWeatherExtendModel : TBJSONModel
{
    NSString *_barBgc;	// 8 = 0x8
    NSString *_bgc;	// 16 = 0x10
    NSString *_icon;	// 24 = 0x18
    NSString *_weather;	// 32 = 0x20
    NSString *_city;	// 40 = 0x28
    NSString *_linkText;	// 48 = 0x30
    NSString *_linkUrl;	// 56 = 0x38
    NSArray<TBQGItemModel> *_items;	// 64 = 0x40
    NSString *_pricePrefix;	// 72 = 0x48
}

@property(retain, nonatomic) NSString *pricePrefix; // @synthesize pricePrefix=_pricePrefix;
@property(retain, nonatomic) NSArray<TBQGItemModel> *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *weather; // @synthesize weather=_weather;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *bgc; // @synthesize bgc=_bgc;
@property(retain, nonatomic) NSString *barBgc; // @synthesize barBgc=_barBgc;
- (void).cxx_destruct;

@end
