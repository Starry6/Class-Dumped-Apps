@interface EDDataDetectionPersistence : NSObject
@property (nonatomic) EDPersistenceDatabase database;
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) <EDMessageChangeHookResponder> hookResponder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)hookResponder;
- (id)database;
- (id)messagePersistence;
- (id)getDataDetectionResultsForGlobalMessageID:;
- (id)initWithDatabase:messagePersistence:hookResponder:;
- (BOOL)addDataDetectionResults:globalMessageID:;
- (BOOL)_addDataDetectionResults:withGlobalMessageID:toTable:withConnection:;
- (id)getDataDetectionResultRowIDsForGlobalMessageID:;
- (id)_getPersistedMessagesFromGlobalMessageID:;
- (BOOL)_hookResponderRespondsToRequiredMethods:;
+ (id)protectedTablesAndForeignKeysToResolve:;
+ (id)_dataDetectionResultsTableSchemaWithName:;
@end
