//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSMutableArray<JDVDanmuUpViewerHeadElement>, NSString;

@interface JDVDanmuUpViewerHeadPictureBody : JSONModel
{
    NSString *groupid;
    NSString *type;
    NSMutableArray<JDVDanmuUpViewerHeadElement> *pictures;
}

@property(retain, nonatomic) NSMutableArray<JDVDanmuUpViewerHeadElement> *pictures; // @synthesize pictures;
@property(retain, nonatomic) NSString *type; // @synthesize type;
@property(retain, nonatomic) NSString *groupid; // @synthesize groupid;
- (void).cxx_destruct;
- (id)init;

@end

