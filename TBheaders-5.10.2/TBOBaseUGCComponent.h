//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IUGCComponent-Protocol.h"
#import "IUGCContainerComponent-Protocol.h"

@class NSArray, NSString, TBOUGCPublisherViewController;
@protocol IUGCComponent, IUGCContext;

@interface TBOBaseUGCComponent : UIView <IUGCComponent, IUGCContainerComponent>
{
    id <IUGCComponent> _parentComponent;	// 8 = 0x8
    TBOUGCPublisherViewController *_ownerViewController;	// 16 = 0x10
    id <IUGCContext> _componentContext;	// 24 = 0x18
    NSArray *_subComponents;	// 32 = 0x20
}

+ (id)componentName;
+ (id)createComponetWithContext:(id)arg1 parentComponent:(id)arg2 inViewController:(id)arg3;
@property(copy, nonatomic) NSArray *subComponents; // @synthesize subComponents=_subComponents;
@property(readonly, nonatomic) id <IUGCContext> componentContext; // @synthesize componentContext=_componentContext;
@property(readonly, nonatomic) __weak TBOUGCPublisherViewController *ownerViewController; // @synthesize ownerViewController=_ownerViewController;
@property(nonatomic) __weak id <IUGCComponent> parentComponent; // @synthesize parentComponent=_parentComponent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showTip:(id)arg1;
- (id)getControllerView;
- (void)refreshViewController;
- (id)componentContentView;
- (void)publish:(CDUnknownBlockType)arg1;
- (_Bool)isModify;
- (_Bool)isValid;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (id)initWithContext:(id)arg1 parent:(id)arg2;
- (void)doActionWithCompleted:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
