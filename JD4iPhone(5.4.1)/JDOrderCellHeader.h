//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

#import "UICopyLabelDelegate.h"

@class JDButton, NSString;

@interface JDOrderCellHeader : JDView <UICopyLabelDelegate>
{
    JDButton *remainderBtn;
    double headerHeight;
}

@property(nonatomic) double headerHeight; // @synthesize headerHeight;
- (void).cxx_destruct;
- (void)didFinishedTextCopy:(id)arg1;
- (void)updateRemaindBtnState;
- (void)remainderBtnClicked:(id)arg1;
- (void)mobileBtnClicked:(id)arg1;
- (void)updateUIError:(double)arg1;
- (double)getHeaderHeight;
- (id)initWithFrame:(struct CGRect)arg1 orderInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
