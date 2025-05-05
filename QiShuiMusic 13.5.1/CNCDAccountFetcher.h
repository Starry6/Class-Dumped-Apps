@interface CNCDAccountFetcher : NSObject
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) CNCDPersistenceContext persistenceContext;
- (id)init;
- (id)predicate;
- (void).cxx_destruct;
- (id)persistenceContext;
- (id)initWithPredicate:persistenceContext:;
- (id)fetchAccounts:;
+ (id)accountsForPredicate:inPersistenceStack:error:;
@end
