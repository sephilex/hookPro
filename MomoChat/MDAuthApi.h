//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDApiBase.h"

@interface MDAuthApi : MDApiBase
{
}

- (void)AuthAPPInfo:(id)arg1 appid:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)AuthAppWithSessionToken:(id)arg1 appid:(id)arg2 redirectURI:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)AuthApp:(id)arg1 account:(id)arg2 password:(id)arg3 appid:(id)arg4 appsecret:(id)arg5 okSelector:(SEL)arg6 errSelector:(SEL)arg7 failSelector:(SEL)arg8;

@end
