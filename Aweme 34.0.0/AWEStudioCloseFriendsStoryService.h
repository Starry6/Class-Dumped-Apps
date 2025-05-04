@interface AWEStudioCloseFriendsStoryService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatusWithPublishModel:;
- (id)guideSubtitle;
- (BOOL)shouldShowGuide;
- (BOOL)needUpdatePublistButtonStyleWithPublishModel:;
- (id)publishButtonTitleWithPublishModel:;
- (void)updatePrivacyInfoWithLastCacheIfNeeded:;
- (void)cachePrivacyInfoWithPublishModel:;
- (BOOL)forbidYoungForPublishing;
- (BOOL)isYoungerThan24;
- (id)guideTitle:;
- (void)guideDidShow;
- (BOOL)isCloseFriendsSelectedWithPublishModel:;
- (BOOL)isFriendsSelectedWithPublishModel:;
- (BOOL)isDarkColor:;
- (BOOL)lastPrivacyTypeIsCloseFriends;
- (BOOL)lastPrivacyTypeIsFriends;
- (BOOL)shouldUpdatePrivacyTypeWithLastCache:;
- (void)updatePrivacyInfoUseFriendVisibleToPublishModel:;
- (unsigned long long)guideShowedTimes;
- (id)lastCachedPrivacyInfo;
- (id)userCacheKey;
@end
