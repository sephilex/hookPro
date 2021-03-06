//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JDButton, JDIcon, JDImageView, UILabel;

@interface FinalSearchOldShopView : UIView
{
    JDImageView *_iconImageView;
    JDIcon *_hasNewWareImageView;
    JDIcon *_hasCouponImageView;
    JDIcon *_hasSeckill;
    UILabel *_shopNameLabel;
    UILabel *_scoreLabel;
    UILabel *_followLabel;
    JDButton *_rightButton;
    JDIcon *_jdShopImageView;
    JDIcon *_popShopImageView;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

- (void).cxx_destruct;
- (void)iconShowSortwithIconTop:(int)arg1 left:(int)arg2 hasNewWare:(_Bool)arg3 hasCoupon:(_Bool)arg4 hasSeckill:(_Bool)arg5;
- (void)loadDataWithModel:(id)arg1;
- (void)createNoImageView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

