@interface VCSessionMessageTopic : NSObject
@property (nonatomic) BOOL isSendingEnabled;
@property (nonatomic) NSString topicKey;
- (void)dealloc;
- (void)sendMessage:;
- (id)initWithTopicKey:strings:allowConcurrent:controlChannel:sendCompletionHandler:receiveHandler:;
- (id)initWithTopicKey:strings:allowConcurrent:requireReliable:controlChannel:sendMessageDataCompletionHandler:receiveMessageDictionaryHandler:;
- (id)initWithTopicKey:strings:allowConcurrent:requireReliable:controlChannel:sendCompletionHandler:receiveHandler:sendMessageDataCompletionHandler:receiveMessageDictionaryHandler:;
- (int)expectedMessageType;
- (BOOL)isPayloadAssociated:;
- (void)setIsSendingEnabled:;
- (id)messageForCommand:;
- (void)sendMessage:participantID:;
- (void)handleSendMessageDidSucceed:message:participantID:;
- (BOOL)sendReliableMessage:participantID:withOptions:completion:;
- (void)sendMessage:participantID:withSequence:numRetries:;
- (BOOL)isDuplicateMessageID:messageHistory:participantID:;
- (void)purgeExpiredEntries:messageHistory:participantID:;
- (void)passMessage:sequence:fromParticipant:;
- (void)clearTransactionCacheForParticipant:;
- (id)topicKey;
- (BOOL)isSendingEnabled;
@end
