//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDBaseFeedListViewController.h"

#import "CustomFilterFeedViewDelegate.h"
#import "FeedSiteDelegate.h"
#import "MDFeedListScrollDelegate.h"
#import "MDIAdsControllerDelegate.h"
#import "MDNearbyFeedUnitProtocol.h"
#import "MDNearbySubControllerProtocol.h"
#import "UIActionSheetDelegate.h"

@class FeedSiteDataManager, MDCommunityView, MDFeedListTableHandler, MDIAdsController, MDReleaseEntranceView, NSString, UITableView, UIView;

@interface MDNearbyActivityViewController : MDBaseFeedListViewController <FeedSiteDelegate, MDIAdsControllerDelegate, MDFeedListScrollDelegate, UIActionSheetDelegate, CustomFilterFeedViewDelegate, MDNearbyFeedUnitProtocol, MDNearbySubControllerProtocol>
{
    _Bool _fromSegment;
    _Bool _isFirstLoad;
    _Bool _isFirstConfig;
    UITableView *_tableView;
    id <MomoTapScrollDelegate> _scrollDelegate;
    FeedSiteDataManager *_feedSiteManager;
    MDFeedListTableHandler *_tableHander;
    MDIAdsController *_iadsController;
    UIView *_headContainerView;
    MDCommunityView *_communityView;
    MDReleaseEntranceView *_releaseEntranceView;
}

+ (void)load;
@property(retain, nonatomic) MDReleaseEntranceView *releaseEntranceView; // @synthesize releaseEntranceView=_releaseEntranceView;
@property(nonatomic) _Bool isFirstConfig; // @synthesize isFirstConfig=_isFirstConfig;
@property(nonatomic) _Bool isFirstLoad; // @synthesize isFirstLoad=_isFirstLoad;
@property(retain, nonatomic) MDCommunityView *communityView; // @synthesize communityView=_communityView;
@property(retain, nonatomic) UIView *headContainerView; // @synthesize headContainerView=_headContainerView;
@property(retain, nonatomic) MDIAdsController *iadsController; // @synthesize iadsController=_iadsController;
@property(retain, nonatomic) MDFeedListTableHandler *tableHander; // @synthesize tableHander=_tableHander;
@property(retain, nonatomic) FeedSiteDataManager *feedSiteManager; // @synthesize feedSiteManager=_feedSiteManager;
@property(nonatomic) id <MomoTapScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) _Bool fromSegment; // @synthesize fromSegment=_fromSegment;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollViewWillEndVerticalDragging:(id)arg1 withVelocity:(struct CGPoint)arg2;
- (void)scrollViewDidEndVerticalDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndVerticalScroll:(id)arg1;
- (void)scrollViewDidVerticalScroll:(id)arg1;
- (void)lazyConfigDataIfNeeded;
- (void)reloadDataIfNeeded;
- (void)setScrollToTop:(_Bool)arg1;
- (void)scrollToTop;
- (void)refreshDataAfterUserInit;
- (void)didLogout;
- (void)closeIAdsView:(id)arg1;
- (void)openIAdsView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)locationFailed:(id)arg1;
- (void)tableViewShouldReloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2;
- (void)loadDataFailed:(_Bool)arg1 withErrorMsg:(id)arg2;
- (void)didFinishRequestSiteID:(id)arg1;
- (void)didFinishLoadingData:(id)arg1 clearInvaliData:(_Bool)arg2;
- (void)filterViewControllerClickConfirm:(id)arg1;
- (void)loadDataforRefresh;
- (void)beginLoadData;
- (void)loadMoreData;
- (void)refreshTableHeadView;
- (void)refreshLoadMoreButtonState;
- (void)setFilterHeaderTitle;
- (void)removeBuySvipTipView;
- (void)buySvipTipViewClicked;
- (void)showBuySvipTip;
- (void)showFeedFailTipView;
- (void)configureDataManagerAndTableHandler;
- (void)presentCustomFilterVC;
- (void)refreshFastQueryFilterWithGender:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleFilterEvent;
- (void)handleReleaseFailedState;
- (void)setupReleaseView;
- (void)refreshAfterComment;
- (long long)getCurrentFeedListType;
- (id)getCurrentTableView;
- (void)manualCloseBannerAD;
- (void)handleFeedFlag;
- (void)addNotifications;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)doHandlerFeedFilterAction;
- (id)initNearbyFeedControllerWithInfoDictionary:(id)arg1;
- (id)initFromSegment:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

