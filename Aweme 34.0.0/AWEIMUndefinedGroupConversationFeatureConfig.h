@interface AWEIMUndefinedGroupConversationFeatureConfig : AWEIMNormalGroupConversationFeatureConfig
- (BOOL)enableGroupInviteWithConversation:permissionType:;
- (BOOL)enableMuteSettingOptionFoldWithConversation:;
- (BOOL)enableGroupShareWithConversation:permissionType:;
- (BOOL)__isMatrixGroupWithConversationSharedSyncedExt:;
@end
