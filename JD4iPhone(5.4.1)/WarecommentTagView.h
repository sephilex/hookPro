//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString;

@interface WarecommentTagView : UIView
{
    UIView *lineView;
    NSArray *_tagArray;
    NSString *_productId;
}

@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(retain, nonatomic) NSArray *tagArray; // @synthesize tagArray=_tagArray;
- (void).cxx_destruct;
- (void)didTapTagsView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

