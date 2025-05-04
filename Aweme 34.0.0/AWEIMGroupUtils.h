@interface AWEIMGroupUtils : NSObject
+ (BOOL)shouldDisplayNoticeHintAtChat:;
+ (void)sendInviteGroupMessageWithInfo:completion:;
+ (void)showSendInviteCardWithInvalidMembers:toConversation:statusCode:statusMsg:isCreateChat:actionBlock:cancelBlock:;
+ (void)showSendInviteCardWithUserIDs:toConversation:actionBlock:cancelBlock:;
+ (void)showSendInviteCardWithUserIDs:toConversation:needToast:actionBlock:cancelBlock:;
+ (void)showSendInviteCardWithInvalidMembers:toConversation:statusCode:statusMsg:isCreateChat:needToast:actionBlock:cancelBlock:;
+ (BOOL)shouldShowInviteMemberEntranceOfConversation:;
+ (BOOL)shouldShowDeleteMemberEntranceWithParticipants:currentUserRole:;
+ (id)userArrayWithParticipant:count:ownerID:;
+ (id)userArrayWithParticipant:;
+ (void)sendInviteGroupBubbleMessageWithInfo:completion:;
+ (void)sendInviteGroupMessageWithConversationID:toUsers:needToast:;
+ (void)trackEventWithEnterMethod:type:userIDArray:action:conversation:;
+ (void)sendInviteGroupMessageWithConversationID:toUsers:;
@end
