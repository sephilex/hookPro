//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDButton, JDIcon, JDImageView, UIImageView, UILabel;

@interface FinalSearchImageShopView : UIView
{
    JDImageView *_iconImageView;
    JDIcon *_hasNewWareImageView;
    JDIcon *_hasCouponImageView;
    JDIcon *_hasSeckill;
    UILabel *_shopNameLabel;
    UILabel *_scoreAndFollowLabel;
    UILabel *_followAndDescLabel;
    JDButton *_rightButton;
    JDIcon *_jdShopImageView;
    JDIcon *_popShopImageView;
    UIView *_detailBackgroundView;
    UIImageView *_shopImageView;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

- (void).cxx_destruct;
- (void)loadDataWithModel:(id)arg1;
- (void)createHaveImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
