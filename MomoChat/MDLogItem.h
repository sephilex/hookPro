//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface MDLogItem : NSObject
{
    unsigned int autoid;
    int type;
    NSString *text;
    NSDate *time;
}

+ (id)itemFrom:(id)arg1 time:(id)arg2;
@property(retain, nonatomic) NSDate *time; // @synthesize time;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) unsigned int autoid; // @synthesize autoid;
- (void)dealloc;
- (id)init;

@end

