//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class TBNavigationController;

@interface UIViewController (TBNavigationController)
@property(nonatomic) _Bool tbIsDismissingVC;
- (void)switchFinished;
- (void)backPanGestureDone;
- (_Bool)forbidbackPanGestureRecognized;
- (_Bool)backPanGestureRecoginzed;
- (void)backSwapGestureRecognized;
@property(readonly, nonatomic) TBNavigationController *tbNavigationController;
@end

