//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBSNSTopicPostPhotoModel, UIButton, UIImage, UIImageView;

@interface TBSNSTopicPostSinglePhotoView : UIView
{
    TBSNSTopicPostPhotoModel *_model;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    UIButton *_deleteButton;	// 24 = 0x18
    UIImageView *_imageView;	// 32 = 0x20
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) TBSNSTopicPostPhotoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addDeleteButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setTag:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

