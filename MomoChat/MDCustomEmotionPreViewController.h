//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

@class UIImage, UIImageView;

@interface MDCustomEmotionPreViewController : MDViewController
{
    UIImage *_originImage;
    UIImageView *_preImageView;
    struct CGSize _imagePreViewSize;
}

@property(retain, nonatomic) UIImageView *preImageView; // @synthesize preImageView=_preImageView;
@property(nonatomic) struct CGSize imagePreViewSize; // @synthesize imagePreViewSize=_imagePreViewSize;
@property(retain, nonatomic) UIImage *originImage; // @synthesize originImage=_originImage;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)getPreViewImageFromOriginImage;
- (void)addEmotion;
- (void)back;
- (void)setupSubViews;
- (void)configNaviBar;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 imageSize:(struct CGSize)arg2;

@end
