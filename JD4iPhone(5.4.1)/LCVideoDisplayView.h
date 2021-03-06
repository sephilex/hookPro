//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LCNetworkImageView, NSArray, NSString;

@interface LCVideoDisplayView : UIView
{
    int watermarkIndex;
    _Bool _watermarkShowStatus;
    UIView *_videoContentView;
    NSString *_iconUrl;
    long long _watermarkPosition;
    long long _mediaPlayerType;
    LCVideoDisplayView *_subDisplayView;
    NSArray *_watermarkArray;
    LCNetworkImageView *_watermarkImageView;
    struct CGSize _subViewActualSize;
}

@property(retain, nonatomic) LCNetworkImageView *watermarkImageView; // @synthesize watermarkImageView=_watermarkImageView;
@property(nonatomic) _Bool watermarkShowStatus; // @synthesize watermarkShowStatus=_watermarkShowStatus;
@property(retain, nonatomic) NSArray *watermarkArray; // @synthesize watermarkArray=_watermarkArray;
@property(retain, nonatomic) LCVideoDisplayView *subDisplayView; // @synthesize subDisplayView=_subDisplayView;
@property(nonatomic) long long mediaPlayerType; // @synthesize mediaPlayerType=_mediaPlayerType;
@property(nonatomic) long long watermarkPosition; // @synthesize watermarkPosition=_watermarkPosition;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) struct CGSize subViewActualSize; // @synthesize subViewActualSize=_subViewActualSize;
@property(retain, nonatomic) UIView *videoContentView; // @synthesize videoContentView=_videoContentView;
- (void).cxx_destruct;
- (void)loadWatermarkImageImageWithUrl:(id)arg1;
- (void)loadWatermarkImageViewSize;
- (void)layoutSubviewsWithContentMode;
- (void)layoutVideoViewByAspectFill;
- (void)layoutVideoViewByAspectFit;
- (void)layoutVideoViewByScallToFit;
- (void)showWatermarkImageAlternately;
- (void)setCloudVodWatermark;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)stopVideo;
- (void)dealloc;

@end

