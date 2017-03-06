//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TableBindViewDelegate.h"

@class MDProfileAvatarsModel, MDProfileTitleView, MUElement, NSMutableArray, NSString, UIView;

@interface MDProfileAvatarsCell : UITableViewCell <TableBindViewDelegate>
{
    NSMutableArray *_avatarsArray;
    MDProfileTitleView *_titleView;
    NSMutableArray *_titleArray;
    NSMutableArray *_subtitleArray;
    double _avatarSpace;
    double _avatarSize;
    UIView *_lineView;
    double _cellHeight;
    MUElement *_arrow;
    MDProfileAvatarsModel *_avatarsModel;
}

@property(retain, nonatomic) MDProfileAvatarsModel *avatarsModel; // @synthesize avatarsModel=_avatarsModel;
@property(retain, nonatomic) MUElement *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) double avatarSize; // @synthesize avatarSize=_avatarSize;
@property(nonatomic) double avatarSpace; // @synthesize avatarSpace=_avatarSpace;
@property(retain, nonatomic) NSMutableArray *subtitleArray; // @synthesize subtitleArray=_subtitleArray;
@property(retain, nonatomic) NSMutableArray *titleArray; // @synthesize titleArray=_titleArray;
@property(retain, nonatomic) MDProfileTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) NSMutableArray *avatarsArray; // @synthesize avatarsArray=_avatarsArray;
- (void).cxx_destruct;
- (void)hideCircleOwnerIconForView:(id)arg1;
- (void)addCircleOwnerIconForView:(id)arg1;
- (void)hideIconForView:(id)arg1;
- (void)addLiveIconForView:(id)arg1;
- (id)arrowWithOffset:(double)arg1;
- (void)handleTap:(id)arg1;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
