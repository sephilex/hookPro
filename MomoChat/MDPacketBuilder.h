//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDIMJPacketHandler;

@interface MDPacketBuilder : NSObject
{
    MDIMJPacketHandler *_packetHandler;
}

@property(nonatomic) MDIMJPacketHandler *packetHandler; // @synthesize packetHandler=_packetHandler;
- (void)sendPacket:(id)arg1;
- (void)sendPacketRequest:(id)arg1 withTarget:(id)arg2 timeOut:(double)arg3 finishSel:(SEL)arg4 failSel:(SEL)arg5;
- (void)sendPacketRequest:(id)arg1 withTarget:(id)arg2 finishSel:(SEL)arg3 failSel:(SEL)arg4;
- (id)generatePacketWithAction:(id)arg1;
- (id)initWithPacketHandler:(id)arg1;

@end

