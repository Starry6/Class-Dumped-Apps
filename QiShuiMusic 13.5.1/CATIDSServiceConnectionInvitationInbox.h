@interface CATIDSServiceConnectionInvitationInbox : NSObject
@property (nonatomic) <CATIDSServiceConnectionInvitationInboxDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithTimerSource:assertionProvider:workQueue:acknowledgeTimeout:;
- (void)receiveInvitationWithIdentifier:senderAppleID:senderAddress:messagingVersion:userInfo:;
- (void)receiveAcknowledgeForInvitationIdentifier:connectionIdentifier:;
- (void)acknowledgeTimerFiredWithInvitationIdentifier:;
+ (id)acknowledgeTimerIdentifier;
@end
