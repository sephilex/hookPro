//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBar.h"

@class MDFullSearchHud, MDNumberSearchHelper, NSMutableArray, UIView;

@interface MMFullSearchBar : MMSearchBar
{
    UIView *_actionView;
    MDNumberSearchHelper *_numberSearchHelper;
    NSMutableArray *_resultArray;
    MDFullSearchHud *_hud;
}

@property(retain, nonatomic) MDFullSearchHud *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) MDNumberSearchHelper *numberSearchHelper; // @synthesize numberSearchHelper=_numberSearchHelper;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)sendSearchText:(id)arg1;
- (void)willShowSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)searchController:(id)arg1 searchBarSearchButtonClicked:(id)arg2;
- (void)searchController:(id)arg1 textDidChange:(id)arg2;
- (void)handleAction:(id)arg1;
- (id)coverViewWith:(struct CGRect)arg1;
- (void)addContactsLoadingObserve;
- (void)dealloc;
- (id)initWithContainerController:(id)arg1;

@end

