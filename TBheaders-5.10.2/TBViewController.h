//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString;

@interface TBViewController : UIViewController
{
    _Bool _isViewAppearing;	// 8 = 0x8
    _Bool _hasViewAppeared;	// 9 = 0x9
    _Bool _isFirstTime;	// 10 = 0xa
    NSString *_currentThemeName;	// 16 = 0x10
}

@property(retain, nonatomic) NSString *currentThemeName; // @synthesize currentThemeName=_currentThemeName;
- (void).cxx_destruct;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;

@end

