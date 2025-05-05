@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject
@property (nonatomic) EDPersistenceDatabaseConnection connection;
@property (nonatomic) EFSQLSchema schema;
- (id)schema;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (BOOL)performMigrationStep;
- (id)initWithSQLiteConnection:;
- (id)messagesTableStubSchema;
- (id)mailboxesTableStubSchema;
- (id)serverMessagesTableSchema;
- (id)serverLabelsTableSchema;
- (id)localMessageActionsTableSchema;
- (id)actionMessagesTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionFlagsTableSchema;
@end
