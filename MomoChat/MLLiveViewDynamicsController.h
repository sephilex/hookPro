//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLVideoPreviewViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, NSArray, NSString, UITableView;

@interface MLLiveViewDynamicsController : MLVideoPreviewViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_dataList;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didClickSetting;
- (void)back;
- (void)refreshEnd;
- (void)hideHUD;
- (void)showHUD;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)getLiveDynamicsError:(id)arg1;
- (void)getLiveDynamicsFail:(id)arg1;
- (void)getLiveDynamicsSuccess:(id)arg1;
- (void)refreshData;
- (void)addTableView;
- (id)getRoomId:(id)arg1;
- (void)dealloc;
- (void)setupBarItems;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

