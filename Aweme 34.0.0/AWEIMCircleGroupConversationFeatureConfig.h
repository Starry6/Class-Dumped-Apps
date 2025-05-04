@interface AWEIMCircleGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig
- (id)groupDescPlaceholderWithConversation:;
- (BOOL)enableGroupWelcomeWithConversation:permissionType:;
- (BOOL)enableAutoSyncLiveWithConversation:permissionType:;
- (BOOL)enableAutoSyncWorkWithConversation:permissionType:;
- (BOOL)enableGroupAvatarWithConversation:permissionType:;
- (BOOL)enableDissolveGroupWithConversation:permissionType:;
- (BOOL)enableRefreshGroupManagementInfo;
@end
