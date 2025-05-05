@interface BMSQLStoreManager : BMSQLStore
@property (nonatomic) NSMutableSet managedTableNames;
@property (nonatomic) <BMIdentifiable> sessionEvent;
- (id)initWithURL:;
- (void).cxx_destruct;
- (BOOL)addManagedTable:derivedFromStream:;
- (void)beginManagedSessionWithEvent:;
- (id)sessionEvent;
- (id)managedTables;
- (void)prepareTriggerForTable:;
- (BOOL)addManagedTable:derivedFromSource:;
- (void)endManagedSession;
- (id)deleteRowsDerivedFromEvents:;
- (id)deleteRowsDerivedFromEvent:;
- (id)deleteRowsDerivedFromStream:eventIdentifier:;
- (id)deleteRowsDerivedFromStream:eventIdentifiers:;
- (int)deleteRows:fromTable:;
- (id)managedTableNames;
- (void)setSessionEvent:;
+ (id)migrations;
@end
