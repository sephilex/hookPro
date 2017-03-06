//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "MessageSubscribeCellDelegaet.h"

@class JDStoreNetwork, NSMutableArray, NSString, UITableView;

@interface MessageSubscribeViewController : JDViewController <MessageSubscribeCellDelegaet>
{
    JDStoreNetwork *_shopListNetwork;
    UITableView *_tableView;
    NSMutableArray *_dataArr;
}

@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didSubscribeShop:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)removeNoOneShopView;
- (void)showNoOneShopView;
- (void)didFinishResponse:(id)arg1 requestSetup:(id)arg2 components:(id)arg3 error:(id)arg4;
- (void)reconnect;
- (void)requestShieldShopList;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
