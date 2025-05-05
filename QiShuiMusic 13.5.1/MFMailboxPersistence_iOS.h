@interface MFMailboxPersistence_iOS : EDMailboxPersistence
@property (nonatomic) EDPersistenceDatabase database;
@property (nonatomic) MFMailMessageLibrary library;
@property (nonatomic) MFMailboxProvider mailboxProvider;
- (BOOL)renameMailbox:newName:;
- (id)initWithMailboxProvider:database:library:;
- (id)library;
- (void).cxx_destruct;
- (BOOL)moveMailbox:newParentMailboxID:;
- (id)database;
- (BOOL)deleteMailbox:;
- (void)serverCountsForMailboxScope:block:;
- (id)mailboxDatabaseIDsForMailboxObjectIDs:createIfNecessary:;
- (BOOL)createMailbox:parentMailboxID:;
@end
