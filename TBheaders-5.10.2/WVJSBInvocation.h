//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIViewController, WVJSBHandlerKey, WVJavascriptApplication;

@interface WVJSBInvocation : NSObject
{
    _Bool _isFinished;	// 8 = 0x8
    _Bool _nested;	// 9 = 0x9
    _Bool _isTailInvoke;	// 10 = 0xa
    NSString *_className;	// 16 = 0x10
    NSString *_handlerName;	// 24 = 0x18
    WVJSBHandlerKey *_key;	// 32 = 0x20
    WVJSBHandlerKey *_realKey;	// 40 = 0x28
    NSString *_params;	// 48 = 0x30
    NSString *_requestID;	// 56 = 0x38
    WVJavascriptApplication *_context;	// 64 = 0x40
    UIViewController *_viewController;	// 72 = 0x48
    CDUnknownBlockType _resultCallback;	// 80 = 0x50
}

@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property(nonatomic) _Bool isTailInvoke; // @synthesize isTailInvoke=_isTailInvoke;
@property(nonatomic) _Bool nested; // @synthesize nested=_nested;
@property(readonly, nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak WVJavascriptApplication *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) NSString *params; // @synthesize params=_params;
@property(readonly, nonatomic) WVJSBHandlerKey *realKey; // @synthesize realKey=_realKey;
@property(readonly, nonatomic) WVJSBHandlerKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *handlerName; // @synthesize handlerName=_handlerName;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
- (void).cxx_destruct;
- (CDUnknownBlockType)fakeCallback;
- (void)callbackWithRet:(id)arg1 result:(id)arg2;
- (void)invokeHandler:(CDUnknownBlockType)arg1 withParams:(id)arg2;
- (void)invokeHandler;
- (_Bool)authCheck;
- (void)invoke;
- (void)dealloc;
- (id)initWithHandler:(id)arg1 className:(id)arg2 params:(id)arg3 reqId:(id)arg4 viewController:(id)arg5 context:(id)arg6;
- (id)initWithRequest:(id)arg1 viewController:(id)arg2 context:(id)arg3;

@end

