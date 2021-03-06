//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRatePublishBaseViewController.h"

#import "OrderRateCommitProtocol-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSMutableArray, NSString, TBRateAppendOrderRateComponent, TBRateStatusHandle;

@interface TBAppendRatePublishViewController : TBRatePublishBaseViewController <OrderRateCommitProtocol, UIActionSheetDelegate>
{
    _Bool _hasError;	// 8 = 0x8
    _Bool _hasEdit;	// 9 = 0x9
    TBRateAppendOrderRateComponent *_appendOrderComponent;	// 16 = 0x10
    NSString *_orderId;	// 24 = 0x18
    NSString *_archive;	// 32 = 0x20
    NSString *_subOrderId;	// 40 = 0x28
    NSString *_rateId;	// 48 = 0x30
    TBRateStatusHandle *_handler;	// 56 = 0x38
    NSMutableArray *_appendRateList;	// 64 = 0x40
    long long _editIndex;	// 72 = 0x48
}

@property(nonatomic) _Bool hasEdit; // @synthesize hasEdit=_hasEdit;
@property(nonatomic) long long editIndex; // @synthesize editIndex=_editIndex;
@property(retain, nonatomic) NSMutableArray *appendRateList; // @synthesize appendRateList=_appendRateList;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) TBRateStatusHandle *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSString *rateId; // @synthesize rateId=_rateId;
@property(retain, nonatomic) NSString *subOrderId; // @synthesize subOrderId=_subOrderId;
@property(nonatomic) NSString *archive; // @synthesize archive=_archive;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) TBRateAppendOrderRateComponent *appendOrderComponent; // @synthesize appendOrderComponent=_appendOrderComponent;
- (void).cxx_destruct;
- (void)backItemClicked:(id)arg1;
- (double)bottomOffsetForAutoresizeKeyboard;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)submitDoRateItemRequest;
- (void)doRateItem;
- (void)editPhotoFinished:(id)arg1 index:(long long)arg2;
- (void)reloadDatas;
- (void)uploadPicAction:(id)arg1 completion:(CDUnknownBlockType)arg2 uploadProgress:(CDUnknownBlockType)arg3;
- (void)addPhotoToUploadPhotos:(id)arg1 component:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addPhoto:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)renderViewController;
- (void)backEntry;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

