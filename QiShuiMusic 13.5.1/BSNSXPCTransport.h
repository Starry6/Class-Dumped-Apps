@interface BSNSXPCTransport : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)auditSessionIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (void)cancel;
- (id)sendMessageWithReplySync:;
- (void)sendMessage:;
- (void)setTargetQueue:;
- (void)suspend;
- (id)auditToken;
- (void)setErrorHandler:;
- (void)resume;
- (int)processIdentifier;
- (void).cxx_destruct;
- (void)sendNotification:;
- (void)activate;
- (unsigned int)effectiveUserIdentifier;
- (void)setMessageHandler:;
- (void)sendMessageWithReply:onQueue:replyHandler:;
- (void)sendBarrierBlock:;
- (void)setPerMessageAssertionAttributes:;
@end
