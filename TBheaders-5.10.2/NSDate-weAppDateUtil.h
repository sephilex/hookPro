//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (weAppDateUtil)
+ (id)weappGetDateStringSinceDate:(unsigned long long)arg1;
+ (id)weappGetDateStrLong:(double)arg1;
+ (id)weappGetDateStringForTodayYesterdayWithGmtOccured:(id)arg1;
- (id)weappGetTodayZeroDate;
- (id)weappGetTodayZeroDateString;
- (id)weappIntervalSinceNow:(unsigned long long)arg1;
- (id)weappSetTimeInt:(double)arg1 setTimeFormat:(id)arg2 setTimeZome:(id)arg3;
- (id)weappGetDateStringForTodayYesterday;
- (id)weappStringFromDate;
- (id)weappFormate:(id)arg1;
- (long long)weappDay;
- (long long)weappMonth;
- (long long)weappYear;
- (id)weappComponents;
@end
