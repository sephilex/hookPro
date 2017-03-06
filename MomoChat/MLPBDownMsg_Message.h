//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface MLPBDownMsg_Message : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) double cellHeight;

// Remaining properties
@property(copy, nonatomic) NSString *actions; // @dynamic actions;
@property(nonatomic) int charmV; // @dynamic charmV;
@property(nonatomic) int fortuneV; // @dynamic fortuneV;
@property(copy, nonatomic) NSString *gtag; // @dynamic gtag;
@property(nonatomic) _Bool hasActions; // @dynamic hasActions;
@property(nonatomic) _Bool hasCharmV; // @dynamic hasCharmV;
@property(nonatomic) _Bool hasFortuneV; // @dynamic hasFortuneV;
@property(nonatomic) _Bool hasGtag; // @dynamic hasGtag;
@property(nonatomic) _Bool hasIsShowColon; // @dynamic hasIsShowColon;
@property(nonatomic) _Bool hasIsSysMsg; // @dynamic hasIsSysMsg;
@property(nonatomic) _Bool hasPayImg; // @dynamic hasPayImg;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool isShowColon; // @dynamic isShowColon;
@property(nonatomic) _Bool isSysMsg; // @dynamic isSysMsg;
@property(retain, nonatomic) NSMutableArray *labelsArray; // @dynamic labelsArray;
@property(readonly, nonatomic) unsigned long long labelsArray_Count; // @dynamic labelsArray_Count;
@property(copy, nonatomic) NSString *payImg; // @dynamic payImg;
@property(nonatomic) int style; // @dynamic style;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end
