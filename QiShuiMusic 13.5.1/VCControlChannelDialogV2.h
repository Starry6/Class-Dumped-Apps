@interface VCControlChannelDialogV2 : VCControlChannelDialog
- (void)dealloc;
- (id)initWithSessionID:participantID:participantUUID:participantConfig:transactionDelegate:;
- (id)processMessageData:participantID:topic:transactionID:messageStatus:isInternalMessage:;
- (id)newDataFromMessage:topic:transactionID:isReliable:transactionDelegate:;
- (id)allocEncryptedPayloadFromPayloadData:;
- (id)copyDecryptedDataFromEncryptedPayload:;
- (void)sendConfirmationToParticipantID:transactionID:sessionID:transactionDelegate:;
@end
