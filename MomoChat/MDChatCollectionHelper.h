//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, UICollectionView;

@interface MDChatCollectionHelper : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    NSString *_targetid;
    unsigned long long _cate;
    id <MDChatCollectionHelperDelegate> _delegate;
}

+ (id)bindingForCollectionView:(id)arg1 templateClassNameList:(id)arg2 delegate:(id)arg3 targetid:(id)arg4 msgCate:(unsigned long long)arg5;
@property(nonatomic) __weak id <MDChatCollectionHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long cate; // @synthesize cate=_cate;
@property(retain, nonatomic) NSString *targetid; // @synthesize targetid=_targetid;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)reloadIndexPaths:(id)arg1;
- (void)registerSectionFooter:(id)arg1;
- (void)registerSectionHeader:(id)arg1;
- (id)mixMsgs;
- (id)cellAtIndexPath:(id)arg1;
- (void)reloadData;
- (id)initWithCollectionView:(id)arg1 templateClassNameList:(id)arg2 delegate:(id)arg3 targetid:(id)arg4 msgCate:(unsigned long long)arg5;
- (void)dealloc;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2 targetid:(id)arg3 msgCate:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

