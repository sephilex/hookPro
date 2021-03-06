//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

@interface JDHybridOperation : NSOperation
{
    unsigned long long backgroundTask;
    _Bool _shouldContinueWhenAppEntersBackground;
    int _type;
    NSString *_zipPath;
    NSString *_moduleName;
    CDUnknownBlockType _downBlock;
}

+ (_Bool)isMultitaskingSupported;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldContinueWhenAppEntersBackground; // @synthesize shouldContinueWhenAppEntersBackground=_shouldContinueWhenAppEntersBackground;
@property(copy, nonatomic) CDUnknownBlockType downBlock; // @synthesize downBlock=_downBlock;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(copy, nonatomic) NSString *zipPath; // @synthesize zipPath=_zipPath;
- (_Bool)unzipAndDeleteFile:(id)arg1;
- (_Bool)downloadPluginFininshed:(id)arg1;
- (void)updateSetting:(id)arg1;
- (void)updateDownloadStatus;
- (void)main;
- (void)dealloc;

@end

