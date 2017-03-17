//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch;
@protocol WATemplateMsgMngSwitchCellDelegate;

__attribute__((visibility("hidden")))
@interface WATemplateMsgMngSwitchCell : UITableViewCell
{
    UILabel *_titleLabel;
    UISwitch *_switchButton;
    id <WATemplateMsgMngSwitchCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WATemplateMsgMngSwitchCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onSwitch:(id)arg1;
- (void)updateSwitchStatus:(_Bool)arg1;
- (void)initSwitchButton;
- (void)initTitleLabel;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
