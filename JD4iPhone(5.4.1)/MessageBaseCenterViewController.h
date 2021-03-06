//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate.h"
#import "MessageBaseCellDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "UIViewControllerPreviewingDelegate.h"

@class JDStoreNetwork, NSMutableArray, NSString, NewRefreshTableHeaderView, UIButton, UIImageView, UILabel, UITableView, UIView;

@interface MessageBaseCenterViewController : JDViewController <JDBaseToastViewDelegate, UIViewControllerPreviewingDelegate, MessageBaseCellDelegate, NewRefreshTableHeaderViewDelegate>
{
    _Bool _isLogin;
    UIView *_overlayView;
    NewRefreshTableHeaderView *_refreshHeaderView;
    JDStoreNetwork *_msgListNetwork;
    JDStoreNetwork *_delMsgNetwork;
    JDStoreNetwork *_calRedDotNetwork;
    UIButton *_loginButton;
    UIButton *_settingBtn;
    UIImageView *_joySorryImageView;
    UILabel *_joySorryLabel;
    _Bool _shouldDisplayDelCell;
    UIImageView *_msgRedDotView;
    UIImageView *_calRedDotView;
    UITableView *_tableView;
    long long _delIndex;
    NSMutableArray *_listDatas;
}

@property(retain, nonatomic) NSMutableArray *listDatas; // @synthesize listDatas=_listDatas;
@property(nonatomic) long long delIndex; // @synthesize delIndex=_delIndex;
@property(nonatomic) _Bool shouldDisplayDelCell; // @synthesize shouldDisplayDelCell=_shouldDisplayDelCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIImageView *calRedDotView; // @synthesize calRedDotView=_calRedDotView;
@property(retain, nonatomic) UIImageView *msgRedDotView; // @synthesize msgRedDotView=_msgRedDotView;
- (void).cxx_destruct;
- (void)msgMTAMyMessageMessageBoxWithModel:(id)arg1 clickType:(id)arg2;
- (void)tapOutsideTableView:(id)arg1;
- (void)didTapDeleteButtonCell:(id)arg1;
- (void)didHideDeleteButton:(id)arg1;
- (void)willHideDeleteButton:(id)arg1;
- (void)didShowDeleteButton:(id)arg1;
- (void)willShowDeleteButton:(id)arg1;
- (_Bool)shouldDisplayDeleteOption:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)removeNoMessagePrompt;
- (void)showNoMessagePrompt;
- (void)checkCalendarRedDotStatus;
- (void)checkMsgRedPointStatus;
- (void)reconnect;
- (void)didFinishResponse:(id)arg1 requestSetup:(id)arg2 components:(id)arg3 error:(id)arg4;
- (void)deleteMessageRequest;
- (void)requestFetchMessageCotainers;
- (void)refreshData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)gotoPushSettings;
- (void)gotoDongdong;
- (void)gotoMyCalendar;
- (void)gotoMessageCenterControllerWithModel:(id)arg1;
- (void)checkPushStateOfLogisticsWithRowIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)msgBaseCenterdidTapLogin;
- (void)removeLoginButton;
- (void)showLoginButton;
- (void)msgBaseCenterCheckIsLogged;
- (void)msgBaseCenterInitNavigationBar;
- (void)readyAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

