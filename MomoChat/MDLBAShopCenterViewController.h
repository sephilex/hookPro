//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDIAdsControllerDelegate.h"
#import "MDUnreadCounterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MDIAdsController, MDLBAApi, MDLBARechargeHandler, NSDictionary, NSMutableArray, NSString, UILabel, UITableView;

@interface MDLBAShopCenterViewController : MDViewController <UITableViewDataSource, UITableViewDelegate, MDUnreadCounterDelegate, MDIAdsControllerDelegate>
{
    _Bool _isNeedRequestData;
    double shopBalance;
    NSString *shopid;
    UILabel *telTipLabel;
    NSDictionary *dataDictionary;
    UITableView *_tableView;
    NSMutableArray *_cellModels;
    MDLBARechargeHandler *_rechargeHandler;
    MDIAdsController *_iadsController;
    MDLBAApi *_lbaApi;
}

+ (void)checkShopStatusFail:(id)arg1;
+ (void)checkShopStatusError:(id)arg1;
+ (void)checkShopStatusSuccess:(id)arg1;
+ (void)checkShopStatusWithSource:(int)arg1;
@property(nonatomic) _Bool isNeedRequestData; // @synthesize isNeedRequestData=_isNeedRequestData;
@property(retain, nonatomic) MDLBAApi *lbaApi; // @synthesize lbaApi=_lbaApi;
@property(retain, nonatomic) MDIAdsController *iadsController; // @synthesize iadsController=_iadsController;
@property(retain, nonatomic) MDLBARechargeHandler *rechargeHandler; // @synthesize rechargeHandler=_rechargeHandler;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary;
@property(retain, nonatomic) UILabel *telTipLabel; // @synthesize telTipLabel;
@property(retain, nonatomic) NSString *shopid; // @synthesize shopid;
@property(nonatomic) double shopBalance; // @synthesize shopBalance;
- (void)checkPostStateErrored:(id)arg1;
- (void)checkPostStateFailed:(id)arg1;
- (void)checkPostStateSuccessed:(id)arg1;
- (void)checkShopStatusFail:(id)arg1;
- (void)checkShopStatusError:(id)arg1;
- (void)checkShopStatusSuccess:(id)arg1;
- (void)checkShopStatusWithSource:(id)arg1;
- (void)getShopCenterInfoSuccess:(id)arg1;
- (void)getShopCenterInfo:(int)arg1;
- (void)unreadCounterHasBeenClean:(id)arg1;
- (void)unreadCounter:(id)arg1 countChanged:(unsigned long long)arg2 forKey:(id)arg3;
- (void)unreadCounterInited:(id)arg1;
- (void)refreshShopFeedUnreadCountIfNeed;
- (void)unreadCounter:(id)arg1 storeCommentUnreadCountIncreased:(unsigned long long)arg2;
- (void)unreadCounter:(id)arg1 storeCommentUnreadCountDecreased:(unsigned long long)arg2;
- (void)enterShopFeed;
- (void)setupCellModelGroup3;
- (void)setupCellModelGroup2;
- (void)setupCellModelGroup1;
- (void)setupCellModelGroup0;
- (void)setupCellModels;
- (void)storeGroupCellClicked;
- (void)collectUserCellClicked;
- (void)autoReplyCellClicked;
- (void)couponCellClicked;
- (void)dataStatisticsCellClicked;
- (void)dealHistoryCellClicked;
- (void)chargeCellClicked;
- (void)adListCellClicked;
- (void)startPostingAD;
- (void)publishADsCellClicked;
- (void)feedCellClicked;
- (void)shopProfileCellClicked;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshBannerHeight;
- (void)closeIAdsView:(id)arg1;
- (void)openIAdsView:(id)arg1;
- (void)forceRefreshTableView;
- (void)removeADListAlert;
- (void)didReceiveMemoryWarning;
- (void)backAction;
- (void)setupNavBar;
- (void)requestShopBalance;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)refreshList:(id)arg1;
- (void)dealloc;
- (id)initWithShopId:(id)arg1;
- (void)gotoLBAShopCenterViewControllerWithParams:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

