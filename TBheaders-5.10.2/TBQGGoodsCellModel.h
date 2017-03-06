//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBQGGoodsItem.h"

@class NSString;

@interface TBQGGoodsCellModel : TBQGGoodsItem
{
    _Bool _reminder;	// 256 = 0x100
    _Bool _imageLoaded;	// 257 = 0x101
    _Bool _progressLoaded;	// 258 = 0x102
    _Bool _displayOnTime;	// 259 = 0x103
    NSString *_onTime;	// 264 = 0x108
    long long _status;	// 272 = 0x110
}

+ (id)substringWithHourMinFromTime:(id)arg1;
+ (id)removeSmallDigitalOfDecimal:(id)arg1 bits:(long long)arg2;
+ (id)removeThousandsOfDecimal:(id)arg1;
+ (id)initModelsWithGoodsItems:(id)arg1;
+ (id)initWithModel:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *onTime; // @synthesize onTime=_onTime;
@property(nonatomic, getter=isDisplayOnTime) _Bool displayOnTime; // @synthesize displayOnTime=_displayOnTime;
@property(nonatomic, getter=isProgressLoaded) _Bool progressLoaded; // @synthesize progressLoaded=_progressLoaded;
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(nonatomic, getter=isReminder) _Bool reminder; // @synthesize reminder=_reminder;
- (void).cxx_destruct;
- (id)getCalendarService;
- (void)initStatus;
- (void)setReminderFromCalendar;
- (void)cancelReminder:(CDUnknownBlockType)arg1;
- (void)addReminder:(CDUnknownBlockType)arg1;

@end
