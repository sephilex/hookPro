//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HomePageChannelFloorCell.h"
#import "HomePageChannelTabBarItemGroup.h"
#import "HomePageChannelValidation.h"

@class HomePageChannelChannelModel, NSArray, NSNumber, NSString, UIColor;

@interface HomePageChannelFootModel : NSObject <HomePageChannelValidation, HomePageChannelFloorCell, HomePageChannelTabBarItemGroup>
{
    HomePageChannelChannelModel *_channel;
    NSNumber *_identityId;
    NSArray *_picList;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSArray *picList; // @synthesize picList=_picList;
@property(retain, nonatomic) NSNumber *identityId; // @synthesize identityId=_identityId;
@property(nonatomic) __weak HomePageChannelChannelModel *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (id)actionForTabBarItemAtIndex:(long long)arg1;
@property(nonatomic) long long selectedTabBarItemIndex;
@property(readonly, nonatomic) NSArray *tabBarItems;
@property(readonly, nonatomic) NSString *floorCellIdentifier;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)keyValuesDidFinishConvertingToObject;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
