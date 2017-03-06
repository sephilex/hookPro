//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol TBLiveDetailProductItemModel;

@interface TBLiveBroadCasterVideoCellViewModel : NSObject
{
    NSString *_videoId;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_totalJoinCountString;	// 24 = 0x18
    NSString *_liveStatusIconPath;	// 32 = 0x20
    NSString *_nativeFeedDetailUrl;	// 40 = 0x28
    NSString *_recommendItemNum;	// 48 = 0x30
    NSArray<TBLiveDetailProductItemModel> *_itemList;	// 56 = 0x38
}

@property(retain, nonatomic) NSArray<TBLiveDetailProductItemModel> *itemList; // @synthesize itemList=_itemList;
@property(copy, nonatomic) NSString *recommendItemNum; // @synthesize recommendItemNum=_recommendItemNum;
@property(copy, nonatomic) NSString *nativeFeedDetailUrl; // @synthesize nativeFeedDetailUrl=_nativeFeedDetailUrl;
@property(copy, nonatomic) NSString *liveStatusIconPath; // @synthesize liveStatusIconPath=_liveStatusIconPath;
@property(copy, nonatomic) NSString *totalJoinCountString; // @synthesize totalJoinCountString=_totalJoinCountString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;

@end
