//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSJSONModel.h"

@class NSString;

@interface JHSOptionRefreshItemTimeInfo : JHSJSONModel
{
    NSString *_refresh;	// 8 = 0x8
    NSString *_format;	// 16 = 0x10
    NSString *_refreshText;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *refreshText; // @synthesize refreshText=_refreshText;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *refresh; // @synthesize refresh=_refresh;
- (void).cxx_destruct;

@end

