//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMMtopRequest.h"

@class NSArray;

@interface GDMDarenHomeMenuRequest : GDMMtopRequest
{
    NSArray *_menuItems;	// 8 = 0x8
}

@property(retain) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void).cxx_destruct;
- (void)startLoadMenuByUserId:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end

