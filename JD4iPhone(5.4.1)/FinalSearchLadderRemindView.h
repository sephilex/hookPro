//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class NSString, UILabel;

@interface FinalSearchLadderRemindView : JDView
{
    NSString *_ladderRemindLabelTitle;
    UILabel *_ladderRemindLabel;
}

@property(retain, nonatomic) UILabel *ladderRemindLabel; // @synthesize ladderRemindLabel=_ladderRemindLabel;
@property(copy, nonatomic) NSString *ladderRemindLabelTitle; // @synthesize ladderRemindLabelTitle=_ladderRemindLabelTitle;
- (void).cxx_destruct;
- (void)setupUI;
- (double)maxAlpha;
- (double)minAlpha;
- (void)setAlpha:(_Bool)arg1 animation:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

