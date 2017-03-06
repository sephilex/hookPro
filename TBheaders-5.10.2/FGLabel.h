//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FGItem.h"

@class NSString, UIColor;

@interface FGLabel : FGItem
{
    NSString *_text;	// 8 = 0x8
    UIColor *_text_color;	// 16 = 0x10
    double _font_size;	// 24 = 0x18
    unsigned long long _decoration;	// 32 = 0x20
}

+ (id)trimWhitespaceInString:(id)arg1;
+ (id)parseWithPlist:(id)arg1;
@property(nonatomic) unsigned long long decoration; // @synthesize decoration=_decoration;
@property(nonatomic) double font_size; // @synthesize font_size=_font_size;
@property(retain, nonatomic) UIColor *text_color; // @synthesize text_color=_text_color;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)render2View;
- (id)init;

@end
