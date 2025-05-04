@interface AWEStudio24StoryUtilsService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)is24StoryWithPublishModel:;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:;
- (BOOL)isNewFriendsDailyPublishPanelSettingStyleRadicalStatus;
- (BOOL)isPrivateDailyTypeWithPublishModel:;
- (BOOL)isStoryWithPublishModel:;
- (BOOL)isPublishPageNewFriendsExperimentStatusWithPublishModel:isAfterStatus:;
- (void)cachePublishBeforePanelIsFinishedLoadLastSelectedUsersCacheBlockStatus:;
- (void)cachePublishBeforePanelIsFinishedFetchLastSelectedUsersBlockStatus:;
- (BOOL)isPublishBeforePanelFinishedStatus;
- (id)dontUsers;
- (id)publishBeforePanelFriendsRelativeList;
- (id)publishBeforePanelMateRelativeList;
- (void)cachePublishBeforePanelFriendsRelativeList:;
- (void)cachePublishBeforePanelMateRelativeList:;
@end
