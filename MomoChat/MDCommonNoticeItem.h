//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDCommonNoticeItem : NSObject
{
    unsigned long long _type;
    id _noticeData;
}

+ (id)commonNoticeItemWithType:(unsigned long long)arg1 andData:(id)arg2;
@property(retain, nonatomic) id noticeData; // @synthesize noticeData=_noticeData;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

