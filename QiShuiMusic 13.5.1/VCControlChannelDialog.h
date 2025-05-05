@interface VCControlChannelDialog : VCObject
@property (nonatomic) NSDictionary transactions;
- (void)dealloc;
- (id)transactions;
- (id)initWithSessionID:participantID:participantUUID:participantConfig:transactionDelegate:;
- (void)resetHandshake;
- (void)flushActiveTransactions;
- (void)removeTransactionForTransactionID:;
- (id)processMessageData:participantID:topic:transactionID:messageStatus:isInternalMessage:;
- (void)doHandshakeWithMessage:topic:afterDelay:withOptions:;
- (void)checkForSignificantHandshakeDelayWithDelegate:;
- (void)sendAllCachedMessagesAndDisableHandshakeWhenDone;
- (void)startHandshakeWithMessage:topic:withOptions:;
- (void)cacheOutgoingMessage:topic:timeout:withOptions:;
- (BOOL)sendReliableMessage:withTopic:timeout:withOptions:;
- (BOOL)sendReliableMessageInternal:withTopic:timeout:useFastRetries:withOptions:;
- (BOOL)sendUnreliableMessage:withTopic:sessionID:participantID:transactionDelegate:;
- (id)newDataFromMessage:topic:transactionID:isReliable:transactionDelegate:;
- (void)confirmTransaction:;
@end
