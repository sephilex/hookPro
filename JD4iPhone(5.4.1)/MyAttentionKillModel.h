//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSMutableArray;

@interface MyAttentionKillModel : SecKillBaseModel
{
    _Bool _isMyAttention;
    NSMutableArray *_resultList;
    NSMutableArray *_productList;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSMutableArray *productList; // @synthesize productList=_productList;
@property(retain, nonatomic) NSMutableArray *resultList; // @synthesize resultList=_resultList;
@property(nonatomic) _Bool isMyAttention; // @synthesize isMyAttention=_isMyAttention;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (id)initWithDic:(id)arg1;

@end

