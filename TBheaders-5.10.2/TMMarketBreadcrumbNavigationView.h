//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIColor;

@interface TMMarketBreadcrumbNavigationView : UIView
{
    _Bool _showNumberic;	// 8 = 0x8
    UIColor *_selectedColor;	// 16 = 0x10
    UIColor *_normalColor;	// 24 = 0x18
    UIColor *_textColor;	// 32 = 0x20
    double _textFontSize;	// 40 = 0x28
    NSArray *_texts;	// 48 = 0x30
    unsigned long long _selectedIndex;	// 56 = 0x38
    double _triangleWidth;	// 64 = 0x40
    double _paddingWidth;	// 72 = 0x48
    unsigned long long _itemCount;	// 80 = 0x50
    NSMutableArray *_textLabels;	// 88 = 0x58
    NSMutableArray *_numbericLabels;	// 96 = 0x60
}

@property(retain, nonatomic) NSMutableArray *numbericLabels; // @synthesize numbericLabels=_numbericLabels;
@property(retain, nonatomic) NSMutableArray *textLabels; // @synthesize textLabels=_textLabels;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) double paddingWidth; // @synthesize paddingWidth=_paddingWidth;
@property(nonatomic) double triangleWidth; // @synthesize triangleWidth=_triangleWidth;
@property(nonatomic) _Bool showNumberic; // @synthesize showNumberic=_showNumberic;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *texts; // @synthesize texts=_texts;
@property(nonatomic) double textFontSize; // @synthesize textFontSize=_textFontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;

@end
