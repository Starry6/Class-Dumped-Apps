@interface AWEStudio24StoryService : HTSService
@property (nonatomic) <AWEStudio24StoryABServiceProtocol> ab;
@property (nonatomic) <AWEStudio24StorySettingsServiceProtocol> settings;
@property (nonatomic) <AWEStudio24StoryPrivacyPermissionRecorderProtocol> privacyPermissionRecorder;
@property (nonatomic) <AWEStudio24StoryUtilsServiceProtocol> utils;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)privacyPermissionRecorder;
- (BOOL)hasCurrentUserComplete24StoryMateRelationUpgrade;
- (BOOL)checkPublishPrivacyStatusByPublishViewModel:;
- (void)trackNewStoryPermissionCheckFailedWithStory:creationID:privacyStatus:isNewStory:userStatus:userList:extraParam:;
- (void)trackNewStoryPermissionCheckFailedWithStory:creationID:privacyStatus:isNewStory:extraParam:;
- (BOOL)isEqualUserList:targetUserList:;
- (void)track24StoryPermissionCheckFailedForScene:withPublishModel:;
- (id)settings;
- (void).cxx_destruct;
- (id)ab;
- (id)utils;
@end
