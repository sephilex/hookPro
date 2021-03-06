//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MRecognizerDelegate-Protocol.h"
#import "MozartDecodeHandler-Protocol.h"
#import "MozartRecordHandler-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString, NSTimer, TBFenceGatherData, TSpeechRecognizer;

@interface NFIService : NSObject <MozartRecordHandler, MozartDecodeHandler, MRecognizerDelegate>
{
    _Bool _micErr;	// 8 = 0x8
    int _timeIndex;	// 12 = 0xc
    int _handleCount;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    CDUnknownBlockType _handler;	// 40 = 0x28
    NSArray *_timetable;	// 48 = 0x30
    TBFenceGatherData *_fenceData;	// 56 = 0x38
    NSData *_sonicwaveData;	// 64 = 0x40
    NSString *_voiceFingerprintType;	// 72 = 0x48
    NSString *_waveSceneId;	// 80 = 0x50
    TSpeechRecognizer *_recognizer;	// 88 = 0x58
    NSMutableDictionary *_speechRecognizeResult;	// 96 = 0x60
    NSData *_speechBuffer;	// 104 = 0x68
}

+ (id)getInstance;
@property(retain, nonatomic) NSData *speechBuffer; // @synthesize speechBuffer=_speechBuffer;
@property(retain, nonatomic) NSMutableDictionary *speechRecognizeResult; // @synthesize speechRecognizeResult=_speechRecognizeResult;
@property(retain, nonatomic) TSpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) _Bool micErr; // @synthesize micErr=_micErr;
@property(retain, nonatomic) NSString *waveSceneId; // @synthesize waveSceneId=_waveSceneId;
@property(retain, nonatomic) NSString *voiceFingerprintType; // @synthesize voiceFingerprintType=_voiceFingerprintType;
@property(retain, nonatomic) NSData *sonicwaveData; // @synthesize sonicwaveData=_sonicwaveData;
@property(retain, nonatomic) TBFenceGatherData *fenceData; // @synthesize fenceData=_fenceData;
@property(nonatomic) int handleCount; // @synthesize handleCount=_handleCount;
@property(nonatomic) int timeIndex; // @synthesize timeIndex=_timeIndex;
@property(retain, nonatomic) NSArray *timetable; // @synthesize timetable=_timetable;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)stop;
- (void)processMozartDataCollection:(id)arg1;
- (void)processFenceDataCollection:(int)arg1;
- (void)processTimetable;
- (void)handleData:(id)arg1;
- (void)onResultWithSonicwaveData:(id)arg1;
- (void)handleRecordNoPermission;
- (void)speechRecognize:(void *)arg1 withLength:(int)arg2;
- (void)handleRecordInputBuffer:(void *)arg1 withLength:(int)arg2;
- (int)getDecodeAlgorithm;
- (int)getWaveBytesNum;
- (short)getWaveSceneId;
- (void)startWithType:(unsigned long long)arg1 timetable:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

