//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

__attribute__((visibility("hidden")))
@interface MMTimer : NSObject
{
    _Bool _paused;
    NSTimer *_m_timer;
    NSDate *_pauseStart;
    NSDate *_previousFireDate;
}

+ (id)startTimeCheckWithInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)scheduledNoRetainTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;
@property(retain, nonatomic) NSDate *previousFireDate; // @synthesize previousFireDate=_previousFireDate;
@property(retain, nonatomic) NSDate *pauseStart; // @synthesize pauseStart=_pauseStart;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) NSTimer *m_timer; // @synthesize m_timer=_m_timer;
- (void).cxx_destruct;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)invalidate;
- (void)stopTimeCheck;
- (void)dealloc;

@end
