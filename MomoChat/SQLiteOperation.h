//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSString;

@interface SQLiteOperation : NSOperation
{
    struct sqlite3 *_db;
    struct lua_State *_mainthread;
    NSString *_sqlString;
}

+ (struct lua_State *)operationLuaState;
+ (id)operationQueue;
- (void)error:(id)arg1;
- (void)operationComplete;
- (_Bool)pushColumnValueForStatement:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)main;
- (id)initWithLuaState:(struct lua_State *)arg1 db:(struct sqlite3 *)arg2 sql:(const char *)arg3;
- (void)dealloc;

@end
