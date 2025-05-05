@interface CATIDSServiceConnectionInvitationOutbox : NSObject
@property (nonatomic) <CATIDSServiceConnectionInvitationOutboxDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)suspend;
- (void)resume;
- (id)delegate;
- (void).cxx_destruct;
- (void)cancelInvitationWithIdentifier:;
- (void)cancelAllInvitations;
- (id)initWithAssertionProvider:workQueue:;
- (void)beginInvitationWithIdentifier:appleID:userInfo:;
- (void)receiveAcceptForInvitation:connectionIdentifier:senderAddress:messagingVersion:;
- (void)receiveRejectForInvitation:connectionIdentifier:senderAddress:error:;
- (void)serviceInvitationQueue;
- (void)cancelAllPowerAssertions;
@end
