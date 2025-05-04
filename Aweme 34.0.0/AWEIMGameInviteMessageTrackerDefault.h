@interface AWEIMGameInviteMessageTrackerDefault : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)trackInviteCardShowWithMessage:conversationID:;
+ (id)trackParamsWithMessage:transferResultType:conversationID:;
+ (id)trackInviteCardShowParamsWithMessage:conversationID:;
+ (void)trackClickWithMessage:trasferResultType:conversationID:;
@end
