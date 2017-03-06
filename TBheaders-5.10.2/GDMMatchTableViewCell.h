//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GDMFeedFooterView, GDMFeedHeaderView, GDMMatchItemModel, GDMTagImageView, UIButton, UILabel, UIView;

@interface GDMMatchTableViewCell : UITableViewCell
{
    GDMMatchItemModel *_currentItem;	// 8 = 0x8
    GDMFeedHeaderView *_headerView;	// 16 = 0x10
    GDMFeedFooterView *_footerView;	// 24 = 0x18
    UIView *_cutLine;	// 32 = 0x20
    GDMTagImageView *_tagView;	// 40 = 0x28
    UILabel *_contentLabel;	// 48 = 0x30
    UIButton *_detailTouchBtn;	// 56 = 0x38
}

+ (float)height;
+ (double)cellHeightForViewModel:(id)arg1;
@property(retain, nonatomic) UIButton *detailTouchBtn; // @synthesize detailTouchBtn=_detailTouchBtn;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) GDMTagImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIView *cutLine; // @synthesize cutLine=_cutLine;
@property(retain, nonatomic) GDMFeedFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) GDMFeedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GDMMatchItemModel *currentItem; // @synthesize currentItem=_currentItem;
- (void).cxx_destruct;
- (void)contentLabel:(id)arg1 setText:(id)arg2 maxRect:(struct CGRect)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)label:(id)arg1 setText:(id)arg2 maxRect:(struct CGRect)arg3;
- (void)onJumpUrlCallBack:(id)arg1;
- (void)layoutSubviews;
- (void)createDetailTouch;
- (void)createFooterView;
- (void)createContent;
- (void)createDescribe;
- (void)createInfoView;
- (void)setMatchItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end
