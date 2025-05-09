@interface MFMessageChangeManager_iOS : EDMessageChangeManager
@property (nonatomic) MFMailMessageLibrary library;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRemoteID:onMessageWithDatabaseID:;
- (void)checkForNewActionsInMailboxID:;
- (id)copyMessages:destinationMailboxURL:userInitiated:;
- (void)willStartPersistenceDidAddMessages:;
- (id)addLabels:removeLabels:toMessagesInDatabase:;
- (id)messagesForRemoteIDs:mailboxURL:;
- (BOOL)haveCompleteMIMEForMessage:;
- (void)setLibrary:;
- (void)didFinishPersistenceDidAddMessages:;
- (void)messageWasAppended:;
- (id)iterateMessagesInMailboxURLs:excludingMessages:batchSize:returnMessagesForFlagChange:handler:;
- (id)initWithLibrary:database:localActionPersistence:messagePersistence:serverMessagePersistenceFactory:readLaterPersistence:bimiManager:hookResponder:hookRegistry:;
- (void)actionHasChangedAccount:;
- (id)moveMessages:destinationMailboxURL:userInitiated:;
- (void)applyVIPStatus:toMessagesInDatabase:;
- (void)setData:onMessage:;
- (BOOL)mailboxPartOfAllMail:;
- (void)didReflectNewMessages:;
- (id)library;
- (id)accountForMailboxURL:;
- (id)messageForDatabaseID:;
- (void).cxx_destruct;
- (id)addNewMessages:mailboxURL:userInitiated:;
- (id)applyFlagChange:toMessagesInDatabase:;
- (BOOL)mailboxIsAllMail:;
- (void)deletePersistedMessages:;
- (long long)mailboxDatabaseIDForURL:;
- (id)messagesToJournalForMessages:inMailbox:;
- (BOOL)persistNewMessages:mailboxURL:oldMessagesByNewMessage:fromSyncing:;
- (void)resetStatusCountsForMailboxWithURL:;
- (void)displayErrorForTransferAction:withResults:;
@end
