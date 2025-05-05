@interface MFMessagePersistenceStatistics_iOS : EDMessagePersistenceStatistics
@property (nonatomic) BOOL protectedDataAvailable;
@property (nonatomic) Q protectedMessages;
@property (nonatomic) Q protectedMessageData;
@property (nonatomic) Q messagesMarkedAsJournaled;
@property (nonatomic) Q mailboxesNeedingReconcilication;
- (BOOL)protectedDataAvailable;
- (void)setProtectedDataAvailable:;
- (unsigned long long)protectedMessages;
- (void)setProtectedMessages:;
- (unsigned long long)protectedMessageData;
- (void)setProtectedMessageData:;
- (unsigned long long)messagesMarkedAsJournaled;
- (void)setMessagesMarkedAsJournaled:;
- (unsigned long long)mailboxesNeedingReconcilication;
- (void)setMailboxesNeedingReconcilication:;
@end
