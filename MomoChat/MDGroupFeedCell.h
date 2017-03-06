//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FeedCellDecoraterDelegate.h"
#import "MDCellLayoutDelegate.h"
#import "MDEmojiLabelDelegate.h"
#import "MDLabelDelegate.h"
#import "MDPhotoPreviewControllerDelegate.h"
#import "TableBindViewDelegate.h"

@class FeedCellDecorater, MDAPICached, MDFeedItem, MDGroupFeed, MDTopicApi, NSMutableDictionary, NSString;

@interface MDGroupFeedCell : UITableViewCell <MDLabelDelegate, MDCellLayoutDelegate, FeedCellDecoraterDelegate, MDPhotoPreviewControllerDelegate, TableBindViewDelegate, MDEmojiLabelDelegate>
{
    _Bool _details;
    int feedSource;
    FeedCellDecorater *decorater;
    long long feedListType;
    MDGroupFeed *currentFeed;
    id <MDActivityCellDelegate> _delegate;
    NSString *_currentContentString;
    MDTopicApi *_topicApi;
    MDFeedItem *_feedItem;
    NSMutableDictionary *_viewDic;
    MDAPICached *_apiCache;
}

@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
@property(retain, nonatomic) NSMutableDictionary *viewDic; // @synthesize viewDic=_viewDic;
@property(retain, nonatomic) MDFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(retain, nonatomic) MDTopicApi *topicApi; // @synthesize topicApi=_topicApi;
@property(copy, nonatomic) NSString *currentContentString; // @synthesize currentContentString=_currentContentString;
@property(nonatomic) id <MDActivityCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool details; // @synthesize details=_details;
@property(retain, nonatomic) MDGroupFeed *currentFeed; // @synthesize currentFeed;
@property(nonatomic) long long feedListType; // @synthesize feedListType;
@property(nonatomic) int feedSource; // @synthesize feedSource;
@property(retain, nonatomic) FeedCellDecorater *decorater; // @synthesize decorater;
- (id)viewHolder;
- (struct CGRect)toRect:(id)arg1 index:(long long)arg2;
- (int)feedSourceOfCell;
- (void)likeOrUnLikeSuccess:(id)arg1;
- (void)didClickLike;
- (void)didClickCommentButton:(id)arg1;
- (void)didClickActionsButton:(id)arg1;
- (void)clickFeedSiteButton;
- (void)clickButtonCommentToGoToDetails:(_Bool)arg1;
- (void)clickToDo;
- (id)feedTagetId;
- (void)didClickedEmotion;
- (int)getCurrentPictureIndexWithTouch:(id)arg1;
- (void)showFeedImage:(long long)arg1 imageRect:(struct CGRect)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reportFeed;
- (void)deleteFeed;
- (void)copy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleLongPress:(id)arg1;
- (void)updatePreviewComment;
- (void)updateLikeCount;
- (void)likeClickEvent;
- (void)updateFeedBottom;
- (void)updateFeedSiteInfo;
- (void)updateMusicView;
- (void)updateFeedSourceView;
- (void)showSmallEmotion;
- (void)showBigFeedEmotion;
- (void)updateFeedEmotion;
- (void)updateImageGrid;
- (void)updateFeedContent;
- (void)updateHeadImage;
- (void)updateTopView;
- (void)updateFeedCell:(id)arg1 details:(_Bool)arg2;
- (void)bindModel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
