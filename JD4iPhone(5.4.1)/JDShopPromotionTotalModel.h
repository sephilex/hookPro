//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface JDShopPromotionTotalModel : JDModel
{
    NSString *_promTitle;
    NSString *_promRule;
    NSArray *_promList;
}

@property(retain, nonatomic) NSArray *promList; // @synthesize promList=_promList;
@property(retain, nonatomic) NSString *promRule; // @synthesize promRule=_promRule;
@property(retain, nonatomic) NSString *promTitle; // @synthesize promTitle=_promTitle;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
