@interface CATSharingServiceTransport : CATTransport
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)invalidateConnection;
- (void)connectionClosed:;
- (void)resumeConnection;
- (void)invalidateIfNeeded;
- (void)suspendConnection;
- (void)processReceivedMessages;
- (void).cxx_destruct;
- (void)connection:receivedData:;
- (id)name;
- (id)operationToSendMessage:;
- (id)initWithConnection:;
@end
