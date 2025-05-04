@interface AWEIncentiveChatPrivateChatStateMachineHelper : NSObject
+ (void)addIncentiveChatToStateMachine:trackDict:;
+ (id)p_inviteStateForUser:trackDict:;
+ (id)p_invitingStateForUser:trackDict:;
+ (id)p_establishStateForUser:trackDict:;
+ (id)p_transitionToInviteStateForUser:;
+ (id)p_transitionToInvitingStateForUser:;
+ (id)p_transitionToEstablishStateForUser:;
+ (void)p_inviteUser:trackDict:completion:;
+ (void)p_transferToMessageVC:;
+ (void)p_trackInviteButtonClick:content:trackDict:;
+ (unsigned long long)p_relationStatusForUser:;
@end
