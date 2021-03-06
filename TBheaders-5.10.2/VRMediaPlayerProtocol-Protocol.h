//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol VRMediaPlayerProtocol <NSObject>
@property(nonatomic) long long playStatus;
@property(readonly, nonatomic) long long status;
@property(nonatomic) struct __CVBuffer *currentVideoFrame;
- (double)bufferPersent;
- (CDStruct_1b6d18a9)duration;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (void)play;
- (void)pause;
- (_Bool)retrievePixelBufferToDraw;
- (void)setupVideoPlaybackForURL:(NSURL *)arg1;
- (id)initWithVideoPath:(NSURL *)arg1;

@optional
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
- (_Bool)recoverPlayerItem;
- (void)stop;
@end

