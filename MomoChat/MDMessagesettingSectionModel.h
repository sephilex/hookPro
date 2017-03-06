//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDMessagesettingSectionModel : NSObject
{
    NSString *_headerString;
    NSString *_footerString;
    NSArray *_settingModelArray;
}

@property(copy, nonatomic) NSArray *settingModelArray; // @synthesize settingModelArray=_settingModelArray;
@property(copy, nonatomic) NSString *footerString; // @synthesize footerString=_footerString;
@property(copy, nonatomic) NSString *headerString; // @synthesize headerString=_headerString;
- (void).cxx_destruct;
- (double)headerSectionHeight;
- (double)footerSectionHeight;

@end
