@interface AWEIMNearbyGroupConversationFeatureConfig : AWEIMNormalGroupConversationFeatureConfig
- (BOOL)enableGroupInviteWithConversation:permissionType:;
- (BOOL)enableGroupShareWithConversation:permissionType:;
- (BOOL)enableGroupAvatarWithConversation:permissionType:;
- (BOOL)enableGroupNameWithConversation:permissionType:;
@end
