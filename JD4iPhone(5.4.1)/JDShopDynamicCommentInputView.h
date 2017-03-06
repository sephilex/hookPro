//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSNumber, NSString, UIButton, UILabel, UITextView;

@interface JDShopDynamicCommentInputView : UIView <UITextViewDelegate>
{
    UIButton *m_topClearView;
    UITextView *m_inputView;
    UILabel *m_placeHolderLabel;
    UIView *m_inputContainerView;
    double keyboardHeight;
    UIButton *m_sendButton;
    _Bool _bWriteBack;
    id <JDShopDynamicCommentInputViewDelegate> _delegate;
    NSString *_defaultText;
    NSNumber *_replyCid;
}

@property(retain, nonatomic) NSNumber *replyCid; // @synthesize replyCid=_replyCid;
@property(retain, nonatomic) NSString *defaultText; // @synthesize defaultText=_defaultText;
@property(nonatomic) __weak id <JDShopDynamicCommentInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool bWriteBack; // @synthesize bWriteBack=_bWriteBack;
- (void).cxx_destruct;
- (void)sendButtonClick;
- (void)textViewDidChange:(id)arg1;
- (void)changeTextViewHeight:(double)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showKeyboardwithUserName:(id)arg1 withCId:(id)arg2;
- (void)hideKeyBoard;
- (id)imageFromColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
