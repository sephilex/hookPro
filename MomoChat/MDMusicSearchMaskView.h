//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MDMusicSearchMaskView : UIView
{
    UIImageView *_iconImageView;
    UILabel *_descLabel;
    id <MDMusicSearchMaskViewDelegate> _delegate;
}

@property(nonatomic) id <MDMusicSearchMaskViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void)didTapSearchCancel:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
