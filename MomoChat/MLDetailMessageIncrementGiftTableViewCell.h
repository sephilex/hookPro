//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLDetailMessageBaseTableViewCell.h"

@class NSString, UIImageView, UILabel;

@interface MLDetailMessageIncrementGiftTableViewCell : MLDetailMessageBaseTableViewCell
{
    int _type;
    NSString *_name;
    NSString *_momoid;
    UIImageView *_avarImageView;
    UIImageView *_giftImageView;
    UILabel *_nickNameLabel;
    UILabel *_giftNameLabel;
    UILabel *_comboLabel;
}

+ (int)heightWithText:(id)arg1 maxWidth:(double)arg2;
+ (id)cellWithTableView:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) __weak UILabel *comboLabel; // @synthesize comboLabel=_comboLabel;
@property(nonatomic) __weak UILabel *giftNameLabel; // @synthesize giftNameLabel=_giftNameLabel;
@property(nonatomic) __weak UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(nonatomic) __weak UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(nonatomic) __weak UIImageView *avarImageView; // @synthesize avarImageView=_avarImageView;
@property(copy, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)setupWithMessage:(id)arg1 maxWidth:(double)arg2;
- (void)setAttributes:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)labelTouchUpInside:(id)arg1;
- (void)awakeFromNib;

@end
