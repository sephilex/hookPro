//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APPortal, NSString;

@protocol APProtalDelegate <NSObject>

@optional
- (void)didFailOfAPPortal:(APPortal *)arg1 errMsg:(NSString *)arg2;
- (void)didSuccessOfAPPortal:(APPortal *)arg1;
- (void)didStartApPortal:(APPortal *)arg1;
- (void)didReadyOfApPortal:(APPortal *)arg1;
@end

