//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TBFPSData : NSObject
{
    float _avgFPS;	// 8 = 0x8
    float _minFPS;	// 12 = 0xc
    NSArray *_fps;	// 16 = 0x10
}

@property(retain, nonatomic) NSArray *fps; // @synthesize fps=_fps;
@property(nonatomic) float minFPS; // @synthesize minFPS=_minFPS;
@property(nonatomic) float avgFPS; // @synthesize avgFPS=_avgFPS;
- (void).cxx_destruct;
- (id)uploadData;
- (id)toDictionary;
- (id)description;

@end

