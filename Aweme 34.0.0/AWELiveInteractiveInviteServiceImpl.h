@interface AWELiveInteractiveInviteServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)trackParams;
- (void)createGroupManagementVCWithConversationID:extension:completion:;
- (void)joinConversation:shortId:bizExtension:completion:;
- (void)p_trackEvent:params:;
- (void)p_inviteFriends:seatIndex:;
- (BOOL)isInChorusRoom;
- (void)inviteFriends:type:inviteeType:recommendReason:completion:;
- (void)p_inviteFriendsForChorusRoom:seatIndex:;
- (id)createPrivateMessage:inviteeType:recommendReason:;
- (void)sendPrivateMessage:toFriends:;
- (void)fixFriendState:successUids:error:;
- (void)inviteFriends:type:inviteeType:recommendReason:seatIndex:extraParam:completion:;
- (void)trackFriendConnectionInvite:;
- (void)switchChorusUserState:completion:;
- (id)createPrivateMessage:inviteeType:recommendReason:action:;
- (void)sendPrivateMessage:toUser:;
- (void)sendInviteFriendRequest:type:inviteeType:recommendReason:seatIndex:extraParam:withCompletion:;
- (id)createPrivateMessage:inviteeType:recommendReason:action:applySource:;
- (id)currentUserType;
- (BOOL)adminModeEnable;
- (BOOL)isUserLinked:;
- (void)showInviteFriendsPanelForSeatIndex:;
- (void)showInviteMoreFriendsPanelForSeatIndex:;
- (void)inviteFriends:type:;
- (void)createGroupWithParticipants:bizExtension:completion:;
- (void)showMessageChannelInvitePanel:withHeight:cornerRadii:showRecommond:userShare:close:show:;
- (void)sendPrivateMessageWithInviteType:inviteeType:recommendReason:toUser:action:;
- (void)sendPrivateMessageWithInviteType:inviteeType:recommendReason:toUser:action:applySource:;
- (id)_mapRoomModel:currentScene:;
@end
