@interface EDMailboxActionPersistence : NSObject
@property (nonatomic) EDPersistenceDatabase database;
- (id)initWithDatabase:;
- (void)deleteMailboxActions:;
- (id)allMailboxActionForAccountID:;
- (id)nextMailboxActionForAccountID:;
- (void).cxx_destruct;
- (void)saveMailboxActionForAccountID:action:;
- (void)deleteMailboxAction:;
- (id)database;
+ (id)tablesAndForeignKeysToResolve:associationsToResolve:;
@end
