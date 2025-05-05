@interface CKAPSMachServiceConnectionDelegate : NSObject
@property (nonatomic) APSConnection connection;
@property (nonatomic) CKAPSMachServiceConnectionKey key;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)connection:didReceivePublicToken:;
- (void)connection:didChangeConnectedStatus:;
- (void)connection:didReceiveToken:forTopic:identifier:;
- (void)connectionDidReconnect:;
- (void)connection:didReceiveIncomingMessage:;
- (void)connection:didReceiveMessageForTopic:userInfo:;
- (id)key;
- (void)setKey:;
- (void)connection:didFailToSendOutgoingMessage:error:;
- (id)connection;
- (void)connection:didSendOutgoingMessage:;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)initWithConnection:key:;
@end
