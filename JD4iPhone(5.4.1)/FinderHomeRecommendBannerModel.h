//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FinderContentModel.h"

@class NSArray, NSString;

@interface FinderHomeRecommendBannerModel : FinderContentModel
{
    NSString *_mId;
    NSString *_title;
    long long _titleHide;
    NSArray *_content;
    NSString *_moodImg;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *moodImg; // @synthesize moodImg=_moodImg;
@property(retain, nonatomic) NSArray *content; // @synthesize content=_content;
@property(nonatomic) long long titleHide; // @synthesize titleHide=_titleHide;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mId; // @synthesize mId=_mId;
- (void).cxx_destruct;
- (double)cellHeight;

@end

