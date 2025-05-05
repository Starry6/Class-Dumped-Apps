@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory
@property (nonatomic) MFMailMessageLibrary library;
- (id)initWithLibrary:database:;
- (void)setLibrary:;
- (id)library;
- (void).cxx_destruct;
- (long long)mailboxIDForMailboxURL:useNumericSearch:supportsLabels:;
@end
