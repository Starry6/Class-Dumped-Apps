@interface MFMessagePersistence_iOS : EDMessagePersistence
@property (nonatomic) <MFMessageSummaryLoaderProvider> summaryLoaderProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)countOfMessagesWithGlobalMessageID:matchingQuery:;
- (BOOL)compressFile:error:;
- (long long)globalIDForMessageWithDatabaseID:mailboxScope:;
- (void)setContentProtectionForAttachmentFile:;
- (void)persistenceDidChangeGlobalMessageID:orConversationID:message:generationWindow:;
- (id)groupedMessagesCountByMailboxMatchingQuery:variable:;
- (id)summaryLoaderProvider;
- (void)generateSummaryForMessage:;
- (void)setSummaryLoaderProvider:;
- (id)persistedMessageForOutgoingMessage:isDraft:;
- (id)requestContentForMessageObjectID:requestID:options:delegate:completionHandler:;
- (id)_requestSummaryForLibraryMessage:;
- (id)cachedDatabaseIDsDictionaryForGlobalMessageIDs:;
- (void).cxx_destruct;
- (unsigned long long)_countOfMessagesMatchingCriteria:includingDuplicates:;
- (id)requestSummaryForMessageObjectID:;
- (id)enabledAccountMailboxesExpression;
- (id)libraryMessageForMessageObjectID:;
- (id)initWithMailboxPersistence:database:userProfileProvider:blockedSenderManager:vipReader:hookRegistry:library:;
- (long long)countOfMessagesMatchingQuery:;
- (BOOL)compressDirectory:shouldCancel:error:;
- (id)persistedMessagesForDatabaseIDs:requireProtectedData:temporarilyUnavailableDatabaseIDs:;
- (void)_iterateMessagesMatchingQuery:options:cancelationToken:resultHandler:monitor:;
- (id)collectStatistics;
- (void)iterateMessagesMatchingQuery:batchSize:firstBatchSize:limit:cancelationToken:handler:;
- (void)iteratePersistedMessagesMatchingQuery:limit:cancelationToken:handler:;
+ (id)log;
@end
