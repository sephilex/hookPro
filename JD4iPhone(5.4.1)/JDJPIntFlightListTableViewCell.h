//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDJPIntFlightCellView, UIImageView, UILabel;

@interface JDJPIntFlightListTableViewCell : UITableViewCell
{
    JDJPIntFlightCellView *depCellView;
    JDJPIntFlightCellView *arrCellView;
    UIImageView *lineView;
    UIImageView *bottomLineView;
    UILabel *priceLabel;
    UILabel *taxLabel;
    _Bool _showTax;
}

@property(nonatomic) _Bool showTax; // @synthesize showTax=_showTax;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)setCellData:(_Bool)arg1 model:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

