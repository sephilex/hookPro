//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FinderArticleDetailCaptchaInfo, FinderArticleDetailCommentModel, NSString;

@interface FinderArticleDetailCommentCodeCheck : NSObject
{
    NSString *_code;
    NSString *_errType;
    NSString *_msg;
    FinderArticleDetailCaptchaInfo *_captchaInfo;
    FinderArticleDetailCommentModel *_commentInfo;
}

@property(retain, nonatomic) FinderArticleDetailCommentModel *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) FinderArticleDetailCaptchaInfo *captchaInfo; // @synthesize captchaInfo=_captchaInfo;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *errType; // @synthesize errType=_errType;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
