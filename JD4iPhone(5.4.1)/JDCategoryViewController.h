//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class NSMutableArray, UITableView;

@interface JDCategoryViewController : JDViewController
{
    UITableView *m_tableView;
    NSMutableArray *dinamicSections;
    NSMutableArray *m_butArray;
    _Bool firstLoad;
    id <JDShopDelegate> delegate;
}

@property(nonatomic) id <JDShopDelegate> delegate; // @synthesize delegate;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)categoryBtnClick:(id)arg1;
- (void)searchFirstLevel:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)removeSection:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)showCategoryViewWithCategory:(id)arg1;
- (void)showCategoryViewData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (void)dealloc;

@end
