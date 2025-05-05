@interface VCControlChannelDialogV1 : VCControlChannelDialog
- (void)dealloc;
- (id)processMessageData:participantID:topic:transactionID:messageStatus:isInternalMessage:;
- (id)newDataFromMessage:topic:transactionID:isReliable:transactionDelegate:;
- (id)initWithSessionID:participantID:participantUUID:optionalTopics:participantConfig:transactionDelegate:;
- (BOOL)processMessageFromParticipant:transactionID:messageType:transactionDelegate:;
- (BOOL)decryptMessageWithMKI:message:buffer:size:sequenceNumber:;
- (id)processEncryptedPayload:isData:topic:sequenceNumber:MKIData:participantID:;
- (void)getTopic:message:fromPayload:;
+ (void)sendConfirmationToParticipantID:transactionID:sessionID:transactionDelegate:;
+ (BOOL)encryptMessage:buffer:size:sequenceNumber:transactionDelegate:;
+ (id)newEncryptedMessageFromMessage:sequenceNumber:transactionDelegate:;
+ (BOOL)processMessageFromParticipant:transactionID:messageType:sessionID:transactionDelegate:;
@end
