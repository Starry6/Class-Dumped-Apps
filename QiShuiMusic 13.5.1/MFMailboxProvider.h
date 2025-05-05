@interface MFMailboxProvider : EDMailboxProvider
@property (nonatomic) MFMailboxUidTransformer mailboxUidTransformer;
- (void)_fetchMailboxesForAccount:;
- (void)setMailboxUidTransformer:;
- (id)initWithAccountsProvider:;
- (id)mailboxUidTransformer;
- (id)legacyMailboxForObjectID:;
- (void).cxx_destruct;
- (id)_transformMailbox:legacyMailboxToMailboxMap:objectIDToLegacyMailboxMap:;
- (void)test_tearDown;
@end
