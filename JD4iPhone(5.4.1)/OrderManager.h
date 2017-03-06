//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDStoreNetwork;

@interface OrderManager : NSObject
{
    JDStoreNetwork *_net;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedOrderManager;
- (void)successfullyAddInvoiceToWXKaBaoWithOrderId:(id)arg1;
- (void)checkStocksForAddCartWithOrderId:(id)arg1 sku:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showOrderCommentWithOrderInfo:(id)arg1;
- (void)showPostOfficePayWithOrderId:(id)arg1;
- (void)showOrderTraceLastWithOrderId:(id)arg1;
- (void)showOrderTraceWithOrderId:(id)arg1;
- (void)showOrderWithOrderId:(id)arg1 fromPage:(id)arg2;
- (void)showOrderWithOrderId:(id)arg1 param:(id)arg2;
- (void)showOrderWithOrderId:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
