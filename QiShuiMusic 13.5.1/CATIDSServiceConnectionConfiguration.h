@interface CATIDSServiceConnectionConfiguration : NSObject
@property (nonatomic) q maxDataSendSize;
@property (nonatomic) Q keepAliveAttemptCount;
@property (nonatomic) double keepAliveCheckinInterval;
@property (nonatomic) double invitationAcknowledgeTimeout;
@property (nonatomic) double missingItemsCheckinInterval;
@property (nonatomic) double messageQueueFlushPromptInterval;
- (id)init;
- (long long)maxDataSendSize;
- (void)setMaxDataSendSize:;
- (unsigned long long)keepAliveAttemptCount;
- (void)setKeepAliveAttemptCount:;
- (double)keepAliveCheckinInterval;
- (void)setKeepAliveCheckinInterval:;
- (double)invitationAcknowledgeTimeout;
- (void)setInvitationAcknowledgeTimeout:;
- (double)missingItemsCheckinInterval;
- (void)setMissingItemsCheckinInterval:;
- (double)messageQueueFlushPromptInterval;
- (void)setMessageQueueFlushPromptInterval:;
@end
