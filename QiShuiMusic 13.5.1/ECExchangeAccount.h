@interface ECExchangeAccount : ECAccount
@property (nonatomic) NSString inboxMailboxName;
@property (nonatomic) NSString journalMailboxName;
@property (nonatomic) NSDate lastSyncDate;
@property (nonatomic) NSString folderHierarchySyncState;
- (id)lastSyncDate;
- (long long)defaultPortNumber;
- (id)inboxMailboxName;
- (void)setInboxMailboxName:;
- (long long)defaultSecurePortNumber;
- (id)folderHierarchySyncState;
- (id)journalMailboxName;
- (void).cxx_destruct;
- (void)setJournalMailboxName:;
- (void)setFolderHierarchySyncState:;
- (void)setLastSyncDate:;
+ (id)standardPorts;
+ (id)standardSSLPorts;
@end
