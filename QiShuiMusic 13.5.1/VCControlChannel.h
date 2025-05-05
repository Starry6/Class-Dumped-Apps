@interface VCControlChannel : VCObject
@property (nonatomic) @ messageReceivedDelegate;
@property (nonatomic) @ dataReceivedDelegate;
@property (nonatomic) I reliableMessageResendInterval;
- (id)init;
- (void)dealloc;
- (BOOL)sendReliableMessageAndWait:withTopic:;
- (void)sendReliableMessage:withTopic:;
- (void)flushActiveMessages;
- (BOOL)sendReliableMessageAndWait:withTopic:participantID:;
- (BOOL)sendReliableMessage:withTopic:participantID:timeout:completion:;
- (BOOL)sendReliableMessage:withTopic:participantID:timeout:withOptions:completion:;
- (void)sendReliableMessage:withTopic:participantID:;
- (void)sendUnreliableMessage:withTopic:participantID:;
- (void)setEncryptionWithEncryptionMaterial:;
- (void)setMessageReceivedDelegate:;
- (id)messageReceivedDelegate;
- (void)setDataReceivedDelegate:;
- (id)dataReceivedDelegate;
- (void)addOptionalTopic:;
- (void)throwNotSupportedExceptionForMethod:;
- (unsigned int)reliableMessageResendInterval;
@end
