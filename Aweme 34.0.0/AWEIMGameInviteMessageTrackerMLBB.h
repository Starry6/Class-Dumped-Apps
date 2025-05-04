@interface AWEIMGameInviteMessageTrackerMLBB : AWEIMGameInviteMessageTrackerDefault
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)trackParamsWithMessage:transferResultType:conversationID:;
+ (id)trackInviteCardShowParamsWithMessage:conversationID:;
+ (void)trackClickWithMessage:trasferResultType:conversationID:;
+ (void)reportEnterEventToServerWithMessage:trasferResultType:;
@end
