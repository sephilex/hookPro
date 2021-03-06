//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JIMIBaseVC.h"

#import "JDJIMIBottomViewControllerDelegate.h"
#import "JIMIInputPrefixViewDelegate.h"
#import "JIMINetWorkDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDJIMIBottomViewController, JIMIInputPrefixView, JIMIPrefixQueModel, NSMutableArray, NSOperationQueue, NSString, UITableView;

@interface JIMITalkVC : JIMIBaseVC <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, JIMINetWorkDelegate, JDJIMIBottomViewControllerDelegate, JIMIInputPrefixViewDelegate>
{
    int _currLevel;
    UITableView *_talkTableview;
    JDJIMIBottomViewController *_bottomVC;
    NSMutableArray *_talkArray;
    JIMIPrefixQueModel *_prefixModel;
    NSOperationQueue *_insertQueue;
    NSString *_lastPrefix;
    JIMIInputPrefixView *_prefixView;
}

@property(retain, nonatomic) JIMIInputPrefixView *prefixView; // @synthesize prefixView=_prefixView;
@property(retain, nonatomic) NSString *lastPrefix; // @synthesize lastPrefix=_lastPrefix;
@property(retain, nonatomic) NSOperationQueue *insertQueue; // @synthesize insertQueue=_insertQueue;
@property(retain, nonatomic) JIMIPrefixQueModel *prefixModel; // @synthesize prefixModel=_prefixModel;
@property(retain, nonatomic) NSMutableArray *talkArray; // @synthesize talkArray=_talkArray;
@property(retain, nonatomic) JDJIMIBottomViewController *bottomVC; // @synthesize bottomVC=_bottomVC;
@property(retain, nonatomic) UITableView *talkTableview; // @synthesize talkTableview=_talkTableview;
@property(nonatomic) int currLevel; // @synthesize currLevel=_currLevel;
- (void).cxx_destruct;
- (void)bottomViewShowPrefixText:(id)arg1;
- (void)bottomViewReloadVoiceModel:(id)arg1;
- (void)bottomViewDeleteVoiceModel:(id)arg1;
- (void)bottomViewInsertVoiceModel:(id)arg1;
- (void)prefixView:(id)arg1 didSelectQuestion:(id)arg2 answer:(id)arg3;
- (void)handleAppEnterBackgroundNotification:(id)arg1;
- (void)hideBottombar;
- (void)delayShowAnswer:(id)arg1;
- (void)onconfirm:(long long)arg1 withReason:(id)arg2;
- (void)scrollToRowAtEnd;
- (void)reloadTalkTable;
- (void)onEvaBtnClickedWithType:(long long)arg1 satisfy:(_Bool)arg2;
- (void)deleteModel:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)insertModel:(id)arg1;
- (void)updateRow:(id)arg1;
- (void)updataCellData:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addText:(id)arg1 isMyself:(_Bool)arg2;
- (void)sendText:(id)arg1 withPara:(id)arg2;
- (void)onNetwork:(id)arg1 error:(id)arg2 withNetWork:(id)arg3;
- (void)showPrefixView:(id)arg1;
- (void)onTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)resetJIMITableViewHeight;
- (void)gotoIMSDK;
- (void)rightBtnAction;
- (void)onBack:(id)arg1;
- (void)addImBtn;
- (void)initUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

