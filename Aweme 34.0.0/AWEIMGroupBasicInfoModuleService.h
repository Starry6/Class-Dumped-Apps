@interface AWEIMGroupBasicInfoModuleService : HTSService
- (BOOL)canCreatePublicGroup;
- (void)getGroupNameWithConversationId:completion:;
- (id)getCurrentUserGroupAliasWithConversationId:;
- (BOOL)checkIsPublicGroupWithConversation:;
- (id)init;
@end
