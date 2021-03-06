//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ShareItemDelegate-Protocol.h"

@class NSString;

@interface TBShareItemDefaultDataSource : NSObject <ShareItemDelegate>
{
}

- (id)pageTitle;
- (void)getIMShareGoodsAtTabIndex:(int)arg1 WithPageStart:(id)arg2 otherData:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (int)maxCountForShare;
- (id)getShareItem;
- (void)trackUserSelectItemAtTabIndex:(int)arg1;
- (void)trackUserCancelItemAtTabIndex:(int)arg1;
- (id)getParameters;
- (void)sendShareItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

