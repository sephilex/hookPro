//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface JDMainPageWeakTimer : NSObject
{
    NSTimer *_countTimer;
    id _target;
    SEL _aSelector;
    double _timeInterval;
}

- (void).cxx_destruct;
- (void)countdownTimerFired:(id)arg1;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)stopTimer;
- (void)startTimer;
- (id)initWith:(double)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

