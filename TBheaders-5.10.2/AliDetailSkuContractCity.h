//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface AliDetailSkuContractCity : TBJSONModel
{
    _Bool _selected;	// 8 = 0x8
    NSString *_provCode;	// 16 = 0x10
    NSString *_code;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_cityInitial;	// 40 = 0x28
    NSArray *_planIds;	// 48 = 0x30
}

@property(retain, nonatomic) NSArray *planIds; // @synthesize planIds=_planIds;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *cityInitial; // @synthesize cityInitial=_cityInitial;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *provCode; // @synthesize provCode=_provCode;
- (void).cxx_destruct;

@end

