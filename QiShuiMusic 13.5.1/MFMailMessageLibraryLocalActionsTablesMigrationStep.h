@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject
@property (nonatomic) EDPersistenceDatabaseConnection connection;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (BOOL)performMigrationStep;
- (id)initWithSQLiteConnection:;
- (BOOL)_populateServerMessages;
- (id)_offlineCacheOperations;
- (id)_serverMessagesTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverLabelsTableDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionFlagsActionIndexDefinition;
+ (id)log;
@end
