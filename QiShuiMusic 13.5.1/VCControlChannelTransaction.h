@interface VCControlChannelTransaction : VCObject
- (void)dealloc;
- (id)initWithTransportSessionID:participantID:transactionID:transactionDelegate:;
- (void)flushTransaction;
- (void)confirmedTransactionByParticipantID:sessionID:;
- (unsigned int)retryCountUsingFastRetries:;
- (float)retryTimeoutForRetryAttempt:usingFastRetries:;
- (BOOL)sendReliableMessage:sessionID:participantID:timeout:useFastRetries:withOptions:;
+ (BOOL)sendUnreliableMessage:sessionID:participantID:transactionID:transactionDelegate:withOptions:;
@end
