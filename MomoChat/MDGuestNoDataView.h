//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface MDGuestNoDataView : UIView
{
    id <MDGuestNoDataViewDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_registerButton;
    UIButton *_loginButton;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) id <MDGuestNoDataViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loginHandler:(id)arg1;
- (void)registerHandler:(id)arg1;
- (void)configDataSource;
- (void)autolayoutSubviews;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

