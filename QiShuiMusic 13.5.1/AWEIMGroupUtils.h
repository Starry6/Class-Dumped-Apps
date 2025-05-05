@interface AWEIMGroupUtils : NSObject
+ (BOOL)shouldShowDeleteMemberEntranceWithParticipants:currentUserRole:;
+ (void)sendInviteGroupMessageWithConversationID:toUsers:;
+ (void)sendInviteGroupMessageWithInfo:completion:;
+ (BOOL)shouldDisplayNoticeHintAtChat:;
+ (BOOL)shouldShowInviteMemberEntranceOfConversation:;
+ (void)showSendInviteCardWithInvalidMembers:toConversation:statusCode:statusMsg:isCreateChat:actionBlock:cancelBlock:;
+ (void)showSendInviteCardWithUserIDs:toConversation:actionBlock:cancelBlock:;
+ (void)trackEventWithEnterMethod:type:userIDArray:action:;
+ (id)userArrayWithParticipant:;
+ (id)userArrayWithParticipant:count:ownerID:;
@end
