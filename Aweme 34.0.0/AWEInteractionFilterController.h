@interface AWEInteractionFilterController : NSObject
@property (nonatomic) q defaultIndex;
@property (nonatomic) q defaultPrimaryIndex;
@property (nonatomic) q defaultSecondaryIndex;
@property (nonatomic) AWEGroupFilterModel danmakuPostedFilterModel;
@property (nonatomic) Q defaultType;
@property (nonatomic) <AWEInteractionFilterControllerDelegate> delegate;
@property (nonatomic) NSArray groupModels;
@property (nonatomic) NSArray dataControllers;
@property (nonatomic) AWEGroupFilterView filterView;
@property (nonatomic) AWENoticeInteractionMultiTabSegmentedControl segmentedControl;
@property (nonatomic) AWENoticeInteractionCommentAndDanmakuSegmenterdControl commentAndDanmakuSubSegmentedControl;
@property (nonatomic) AWENoticeInteractionSubSegmenterdControl otherSubSegmentedControl;
@property (nonatomic) IESSegmentedControl segmentedControlForLowFans;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL isFromPush;
@property (nonatomic) @? toggleMenuBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)getFilterType;
- (void)segmentedControl:didChangeSelectedIndex:;
- (void)segmentedControl:didRepeatTapSelectedIndex:;
- (void)noticeSegmentedControl:didChangeSelectedIndex:;
- (void)commentAndDanmakuSegmentedControl:didChangeSelectedIndex:;
- (void)commentAndDanmakuSegmentedControl:didRepeatTapSelectedIndex:;
- (void)otherSubTabRepeatClick:groupID:;
- (void)otherSubTabSelect:groupID:;
- (BOOL)isFromPush;
- (unsigned long long)currentSelectedType;
- (id)groupModels;
- (void)setGroupModels:;
- (void)setIsFromPush:;
- (void)p_updateSelectedIndex:;
- (id)dataControllers;
- (void)setDataControllers:;
- (id)toggleMenuBlock;
- (void)setToggleMenuBlock:;
- (id)otherSubSegmentedControl;
- (void)updateFilterUserInteractionEnabled:;
- (unsigned long long)currentSelectIdx;
- (void)setupGroupsWithMaxWidth:selectBlock:switchTabBlock:;
- (id)commentAndDanmakuSubSegmentedControl;
- (void)updateFilterModel:maxWidth:selectBlock:switchTabBlock:;
- (id)segmentedControlForLowFans;
- (id)initWithDefaultType:;
- (id)aAWENoticeModuleServiceCommonAdaper;
- (void)setDefaultPrimaryIndex:;
- (void)setDefaultSecondaryIndex:;
- (void)trackNotificationNoticeTabFilter:;
- (void)setDanmakuPostedFilterModel:;
- (void)updateSegmentedControlForLowFansItems;
- (id)danmakuPostedFilterModel;
- (void)p_repeatTapIndex:;
- (void)trackEnterNotificationPageWithActionType:;
- (void)setCommentAndDanmakuSubSegmentedControl:;
- (void)setOtherSubSegmentedControl:;
- (void)setSegmentedControlForLowFans:;
- (long long)defaultPrimaryIndex;
- (long long)defaultSecondaryIndex;
- (id)filterView;
- (id)init;
- (id)delegate;
- (void)setFilterView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)segmentedControl;
- (void)setSegmentedControl:;
- (long long)defaultIndex;
- (void)setDefaultIndex:;
- (void)setDefaultType:;
- (unsigned long long)defaultType;
+ (BOOL)isOneDayDigg:;
+ (BOOL)isOneDayComment:;
+ (long long)notificationTypeFromModel:;
+ (void)tranEnterNotificationPageWithActionType:enterFrom:;
+ (void)trackEnterPersonalDetail:enterFrom:enterMethod:followStatus:accountType:logExtraDict:;
+ (void)transToProfileWithUser:enterFrom:enterPosition:pushID:model:;
+ (void)trackFollowEvent:model:;
+ (id)fromUserForNotificationModel:;
+ (unsigned long long)filterModelTypeByLandType:subType:;
+ (long long)unreadCountForGroupFilterModelType:;
+ (void)tranEnterNotificationPageWithActionType:enterFrom:previousEnterFrom:isLandFromPush:isSecondaryTab:landingTab:extraDict:;
+ (unsigned long long)indexForGroupFilterModelType:;
+ (BOOL)isNoticeMultiTabsForLowFans;
+ (BOOL)isNoticeMultiTabs;
+ (BOOL)hasUnfollowFamiliarRelationTagWithModel:;
+ (void)transToProfileWithUserID:enterFrom:model:;
+ (Class)aAWENoticeModuleServiceCommonAdaperClass;
+ (void)trackFollowEvent:model:extraParams:;
+ (id)landingCommentSegmentedControlConfig;
+ (unsigned long long)unreadModelTypeByConfig:defaultType:;
+ (id)landingOtherSegmentedControlConfig;
+ (id)landingSegmentedControlConfig;
+ (long long)unreadCountWithNoticeType:;
+ (unsigned long long)selectIndexForSegmentedControlItemType:;
+ (void)landingWithLandingGroup:enterFrom:;
@end
