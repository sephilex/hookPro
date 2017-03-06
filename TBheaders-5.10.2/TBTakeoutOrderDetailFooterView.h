//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, TBTakeoutOperationViewModel, TBTakeoutOrderDetailFooterViewModel;

@interface TBTakeoutOrderDetailFooterView : UIView
{
    TBTakeoutOrderDetailFooterViewModel *_viewModel;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSMutableArray *_buttons;	// 24 = 0x18
    UIView *_topLine;	// 32 = 0x20
    TBTakeoutOperationViewModel *_operationViewModel;	// 40 = 0x28
}

@property(retain, nonatomic) TBTakeoutOperationViewModel *operationViewModel; // @synthesize operationViewModel=_operationViewModel;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) __weak TBTakeoutOrderDetailFooterViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dismiss;
- (void)didClickedMoreButton:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (void)configure;
- (id)initWithFrame:(struct CGRect)arg1;

@end
