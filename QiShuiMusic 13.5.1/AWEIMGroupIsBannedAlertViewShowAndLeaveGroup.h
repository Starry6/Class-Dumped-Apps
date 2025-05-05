@interface AWEIMGroupIsBannedAlertViewShowAndLeaveGroup : NSObject
@property (nonatomic) AWEIMMessageConversation leaveConversation;
- (id)leaveConversation;
- (void)setLeaveConversation:;
- (void).cxx_destruct;
+ (void)showCurrentGroupIsBannedAlartWithConversationID:completion:;
@end
