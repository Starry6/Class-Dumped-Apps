@interface AWEIMKTVGroupConversationFeatureConfig : AWEIMBigGroupConversationFeatureConfig
- (BOOL)enableAutoSyncLiveWithConversation:permissionType:;
- (BOOL)enableAutoSyncWorkWithConversation:permissionType:;
- (BOOL)enableGroupAvatarWithConversation:permissionType:;
- (BOOL)enableDissolveGroupWithConversation:permissionType:;
- (id)groupDetailShareButtonTitleWithConversation:;
@end
