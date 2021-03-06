//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDShopCommonErrorViewDelegate.h"
#import "JDShopDynamicDetailViewControllerDelegate.h"

@class JDFooterLoadingView, JDImageView, JDShopCommonErrorView, JDShopDynamicLiveManager, JDShopReceiveCouponManager, JDStoreNetwork, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UITableView, UITapGestureRecognizer, UIView;

@interface JDShopDynamicViewController : JDViewController <JDShopCommonErrorViewDelegate, JDShopDynamicDetailViewControllerDelegate>
{
    UITableView *m_dynamicTableView;
    JDStoreNetwork *m_network;
    NSMutableArray *m_dynamicArray;
    long long m_totalCount;
    _Bool isLoadMore;
    long long m_pageNum;
    JDFooterLoadingView *m_loadMoreView;
    UILabel *m_endView;
    UIView *tableHeaderView;
    UIView *viewHead;
    JDImageView *shopLogoImageView;
    UIImageView *kuangImageView;
    UILabel *shopNameLabel;
    UIButton *followBtn;
    UIButton *goToShopBtn;
    _Bool startDragScroll;
    _Bool noEndDragScroll;
    double startDragContentoffsetY;
    double errorViewCenterY;
    _Bool interactDown;
    long long ticketIndex;
    _Bool isFromStow;
    _Bool _bFromHome;
    _Bool _bHaveBottomToolView;
    _Bool _allowReportPV;
    _Bool _bActionBeforeLogin;
    NSString *m_verderId;
    NSString *m_shopId;
    NSString *m_shopName;
    CDUnknownBlockType _scrollBlock;
    JDShopReceiveCouponManager *_receiveCouponMng;
    NSMutableDictionary *_shopInfoDic;
    JDShopCommonErrorView *_errorView;
    NSString *_commentSwitch;
    UITapGestureRecognizer *_tapTableWhenError;
    JDShopDynamicLiveManager *_liveManager;
}

@property(retain, nonatomic) JDShopDynamicLiveManager *liveManager; // @synthesize liveManager=_liveManager;
@property(retain, nonatomic) UITapGestureRecognizer *tapTableWhenError; // @synthesize tapTableWhenError=_tapTableWhenError;
@property(retain, nonatomic) NSString *commentSwitch; // @synthesize commentSwitch=_commentSwitch;
@property(retain, nonatomic) JDShopCommonErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) NSMutableDictionary *shopInfoDic; // @synthesize shopInfoDic=_shopInfoDic;
@property(retain, nonatomic) JDShopReceiveCouponManager *receiveCouponMng; // @synthesize receiveCouponMng=_receiveCouponMng;
@property(nonatomic) _Bool bActionBeforeLogin; // @synthesize bActionBeforeLogin=_bActionBeforeLogin;
@property(nonatomic) _Bool allowReportPV; // @synthesize allowReportPV=_allowReportPV;
@property(nonatomic) _Bool bHaveBottomToolView; // @synthesize bHaveBottomToolView=_bHaveBottomToolView;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(nonatomic) _Bool bFromHome; // @synthesize bFromHome=_bFromHome;
@property(nonatomic) _Bool isFromStow; // @synthesize isFromStow;
@property(retain, nonatomic) NSString *m_shopName; // @synthesize m_shopName;
@property(retain, nonatomic) NSString *m_shopId; // @synthesize m_shopId;
@property(retain, nonatomic) NSString *m_verderId; // @synthesize m_verderId;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)commentButtonClicked:(id)arg1;
- (void)updateActivityPraiseCount:(_Bool)arg1 shopModel:(id)arg2;
- (void)likeButtonClicked:(id)arg1 isLike:(_Bool)arg2;
- (void)likeLoginSuccess:(id)arg1;
- (void)userCancleLogin:(id)arg1;
- (void)userDidLogin:(id)arg1;
- (void)loginSuccess;
- (void)turnToShopSignView:(id)arg1;
- (void)shopDynamicMoreProducts:(id)arg1;
- (void)shopDynamicProduct:(id)arg1 wareId:(id)arg2 position:(long long)arg3;
- (void)shopDynamicSubject:(id)arg1;
- (id)currentNavigationController;
- (void)safePush:(id)arg1;
- (void)setCouponToTaked:(long long)arg1;
- (void)receiveCoupon:(id)arg1;
- (void)turnToLiveView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadDataAfterError;
- (void)getShopDynamicData;
- (void)showToastResult:(id)arg1 flag:(int)arg2;
- (void)sendActionReuqest:(id)arg1;
- (void)toastActionReuqest;
- (void)followShopInDynamic:(id)arg1;
- (void)clickFollowBtn:(id)arg1;
- (void)setFollowBtnState:(_Bool)arg1;
- (void)changeFollowState:(id)arg1;
- (void)refreshSecKillTimer:(id)arg1;
- (void)clickTableWhenError:(id)arg1;
- (void)attachFooterViewForScrolling;
- (void)removeErrorView;
- (void)showErrorView:(long long)arg1;
- (void)resetSubViewFrame:(struct CGRect)arg1;
- (void)pvParamsLocal;
- (void)recordPV;
- (void)updateAllowReportPV:(id)arg1;
- (void)showFullHeadView:(_Bool)arg1;
- (void)setViewHeadData:(id)arg1;
- (void)enterShopClick;
- (void)backTopButtonPressed:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShopInfo:(id)arg1 shopId:(id)arg2 shopName:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

