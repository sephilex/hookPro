//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSString;

@interface WanderShopCircleBannerModel : JDModel
{
    _Bool _isInsert;
    NSString *data;
    NSString *bannerUrl;
    NSString *type;
    long long insertIndex;
    long long _index;
}

@property(nonatomic) _Bool isInsert; // @synthesize isInsert=_isInsert;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long insertIndex; // @synthesize insertIndex;
@property(copy, nonatomic) NSString *type; // @synthesize type;
@property(copy, nonatomic) NSString *bannerUrl; // @synthesize bannerUrl;
@property(copy, nonatomic) NSString *data; // @synthesize data;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (void)dealloc;

@end
