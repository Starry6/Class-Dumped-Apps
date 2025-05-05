@interface CATIDSServiceConnectionTerminal : NSObject
@property (nonatomic) <CATIDSServiceConnectionTerminalDelegate> delegate;
- (void)setDelegate:;
- (void)suspend;
- (void)resume;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)processMessage:senderAppleID:senderAddress:;
- (void)connectionInvitationInbox:shouldConnectToAppleID:connectionIdentifier:userInfo:responseHandler:;
- (void)connectionInvitationInbox:wantsToAcceptInvitation:connectionIdentifier:destinationAddress:;
- (void)connectionInvitatioInbox:timeoutOutForInvitation:connectionIdentifier:senderAppleID:userInfo:;
- (void)connectionInvitationInbox:foundConection:senderAppleID:senderAddress:assertion:messagingVersion:userInfo:;
- (void)connectionInvitationInbox:rejectedInvitation:connectionIdentifier:appleID:address:error:;
- (void)connectionInvitationOutbox:wantsToSendInvitation:destinationAppleID:userInfo:;
- (void)connectionInvitationOutbox:wantsToAcknowledgeInvitation:connectionIdentifier:destinationAddress:;
- (void)connectionInvitationOutbox:foundConnection:destinationAppleID:destinationAddress:assertion:messagingVersion:userInfo:;
- (void)connectionInvitationOutbox:receivedARejectionFrom:connectionIdentifier:userInfo:error:;
- (void)addBroadcastHandler:;
- (id)initWithIDSPrimitives:assertionProvider:timerSource:workQueue:delegateQueue:sourceAppleID:connectionConfiguration:;
- (id)initWithIDSPrimitives:networkPowerPrimitives:sourceAppleID:;
- (id)initWithIDSPrimitives:assertionProvider:sourceAppleID:;
- (id)initWithIDSPrimitives:assertionProvider:sourceAppleID:connectionConfiguration:;
- (id)inviteAppleIDToConnect:userInfo:;
- (void)cancelInvitationWithIdentifier:;
- (void)cancelAllInvitations;
- (void)sendContent:toAddress:forInvitation:;
@end
