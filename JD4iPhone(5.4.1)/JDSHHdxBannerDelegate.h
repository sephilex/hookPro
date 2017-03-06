//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASCollectionDelegate.h"

@class JDSHHdxBannerCell, JDSHHdxBannerDataSource, NSIndexPath, NSString;

@interface JDSHHdxBannerDelegate : NSObject <ASCollectionDelegate>
{
    _Bool _lock0;
    _Bool _lock1;
    _Bool _isNotFirstEntered;
    JDSHHdxBannerCell *_currSelectedCell;
    JDSHHdxBannerCell *_leftCell;
    JDSHHdxBannerCell *_rightCell;
    NSIndexPath *_leftIndexPath;
    NSIndexPath *_rightIndexPath;
    NSIndexPath *_currSelectedIndexPath;
    JDSHHdxBannerDataSource *_dataSource;
}

@property(nonatomic) _Bool isNotFirstEntered; // @synthesize isNotFirstEntered=_isNotFirstEntered;
@property(nonatomic) _Bool lock1; // @synthesize lock1=_lock1;
@property(nonatomic) _Bool lock0; // @synthesize lock0=_lock0;
@property(nonatomic) __weak JDSHHdxBannerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSIndexPath *currSelectedIndexPath; // @synthesize currSelectedIndexPath=_currSelectedIndexPath;
@property(copy, nonatomic) NSIndexPath *rightIndexPath; // @synthesize rightIndexPath=_rightIndexPath;
@property(copy, nonatomic) NSIndexPath *leftIndexPath; // @synthesize leftIndexPath=_leftIndexPath;
@property(nonatomic) __weak JDSHHdxBannerCell *rightCell; // @synthesize rightCell=_rightCell;
@property(nonatomic) __weak JDSHHdxBannerCell *leftCell; // @synthesize leftCell=_leftCell;
@property(nonatomic) __weak JDSHHdxBannerCell *currSelectedCell; // @synthesize currSelectedCell=_currSelectedCell;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)selectionStatus:(id)arg1 indexPath:(id)arg2 animated:(_Bool)arg3;
- (void)updateDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
