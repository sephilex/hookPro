//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveBroadCasterItemListView, TBLiveBroadCasterVideoCellViewModel, TBLiveBroadCasterVideoDescView;

@interface TBLiveBroadCasterVideoTableViewCell : TBLiveTableViewCell
{
    TBLiveBroadCasterVideoDescView *_videoDescView;	// 8 = 0x8
    TBLiveBroadCasterItemListView *_itemListView;	// 16 = 0x10
    TBLiveBroadCasterVideoCellViewModel *_viewModel;	// 24 = 0x18
}

@property(retain, nonatomic) TBLiveBroadCasterVideoCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TBLiveBroadCasterItemListView *itemListView; // @synthesize itemListView=_itemListView;
@property(retain, nonatomic) TBLiveBroadCasterVideoDescView *videoDescView; // @synthesize videoDescView=_videoDescView;
- (void).cxx_destruct;
- (void)refreshWithViewModel:(id)arg1;
- (void)updateLayoutConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

