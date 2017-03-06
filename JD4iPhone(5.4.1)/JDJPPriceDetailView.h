//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FlightClassInfoModel, FlightInfoModel, JDJPIntCabinPriceModel, NSArray, NSString, UITableView;

@interface JDJPPriceDetailView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    long long depIndex;
    long long arrIndex;
    long long insuIndex;
    long long invoiceIndex;
    long long couponIndex;
    long long xingchengIndex;
    long long fapiaoIndex;
    long long insuFapiaoIndex;
    UITableView *DataTable;
    UIView *maskView;
    UIView *navMaskView;
    _Bool _isInt;
    _Bool _showXingcheng;
    _Bool _showFapiao;
    _Bool _showInsuFapiao;
    int _transferCount;
    UIView *_navView;
    NSArray *_boarderArray;
    NSArray *_insuranceArray;
    FlightClassInfoModel *_beginClassModel;
    FlightClassInfoModel *_endClassModel;
    FlightInfoModel *_beginFlightInfoModel;
    FlightInfoModel *_endFlightInfoModel;
    JDJPIntCabinPriceModel *_cabinPriceModel;
    long long _xingcheng;
    long long _fapiao;
    long long _coupon;
}

@property(nonatomic) int transferCount; // @synthesize transferCount=_transferCount;
@property(nonatomic) long long coupon; // @synthesize coupon=_coupon;
@property(nonatomic) long long fapiao; // @synthesize fapiao=_fapiao;
@property(nonatomic) long long xingcheng; // @synthesize xingcheng=_xingcheng;
@property(nonatomic) _Bool showInsuFapiao; // @synthesize showInsuFapiao=_showInsuFapiao;
@property(nonatomic) _Bool showFapiao; // @synthesize showFapiao=_showFapiao;
@property(nonatomic) _Bool showXingcheng; // @synthesize showXingcheng=_showXingcheng;
@property(nonatomic) _Bool isInt; // @synthesize isInt=_isInt;
@property(retain, nonatomic) JDJPIntCabinPriceModel *cabinPriceModel; // @synthesize cabinPriceModel=_cabinPriceModel;
@property(retain, nonatomic) FlightInfoModel *endFlightInfoModel; // @synthesize endFlightInfoModel=_endFlightInfoModel;
@property(retain, nonatomic) FlightInfoModel *beginFlightInfoModel; // @synthesize beginFlightInfoModel=_beginFlightInfoModel;
@property(retain, nonatomic) FlightClassInfoModel *endClassModel; // @synthesize endClassModel=_endClassModel;
@property(retain, nonatomic) FlightClassInfoModel *beginClassModel; // @synthesize beginClassModel=_beginClassModel;
@property(retain, nonatomic) NSArray *insuranceArray; // @synthesize insuranceArray=_insuranceArray;
@property(retain, nonatomic) NSArray *boarderArray; // @synthesize boarderArray=_boarderArray;
@property(retain, nonatomic) UIView *navView; // @synthesize navView=_navView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)intPriceModel:(id)arg1;
- (int)childCount;
- (int)adultCount;
- (_Bool)hasChild;
- (void)layoutSubviews;
- (void)hideWithoutAnimation;
- (void)hide;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
