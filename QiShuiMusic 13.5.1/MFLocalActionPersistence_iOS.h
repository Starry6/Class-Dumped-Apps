@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence
@property (nonatomic) MFMailMessageLibrary library;
- (id)initWithDatabase:;
- (id)initWithLibrary:database:;
- (id)mailboxURLForDatabaseID:;
- (void)setLibrary:;
- (id)labelNameForLabelID:;
- (id)library;
- (id)messageForDatabaseID:;
- (void).cxx_destruct;
- (BOOL)moveSupportedFromMailboxURL:toURL:;
- (id)initWithDatabase:gmailLabelPersistence:;
- (void)handledFailedCopyForMessages:;
- (long long)mailboxDatabaseIDForURL:;
@end
