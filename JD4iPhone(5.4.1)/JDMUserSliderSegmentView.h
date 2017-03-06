//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface JDMUserSliderSegmentView : UIView
{
    UIButton *xuanzuoBtn;
    UIButton *couponBtn;
    UIButton *ticketBtn;
    UIButton *m_lastSelectedBtn;
    UIView *m_lineView;
    long long m_currentIndex;
    id m_target;
}

@property(nonatomic) id m_target; // @synthesize m_target;
@property(nonatomic) long long m_currentIndex; // @synthesize m_currentIndex;
@property(retain, nonatomic) UIView *m_lineView; // @synthesize m_lineView;
@property(nonatomic) UIButton *m_lastSelectedBtn; // @synthesize m_lastSelectedBtn;
- (void)dealloc;
- (void)segmentSelected:(id)arg1;
- (void)setSelectedItem:(int)arg1;
- (void)configUIWithTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withTitles:(id)arg2 withTarget:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
