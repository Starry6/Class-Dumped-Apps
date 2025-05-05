@interface MFSearchableIndexManager_iOS : EDSearchableIndexManager
@property (nonatomic) EDSearchableIndex index;
@property (nonatomic) EDSearchableIndexPersistence persistence;
@property (nonatomic) EDSearchableIndexScheduler scheduler;
@property (nonatomic) NSSet dataSourceRefreshReasons;
@property (nonatomic) NSSet purgeReasons;
@property (nonatomic) NSSet exclusionReasons;
@property (nonatomic) NSSet currentReasons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)persistence;
- (void)setPersistence:;
- (id)purgeReasons;
- (void)setScheduler:;
- (id)scheduler;
- (id)dataSourceRefreshReasons;
- (id)exclusionReasons;
- (id)initWithDatabase:messagePersistence:richLinkPersistence:hookResponder:;
- (id)index;
- (void)setIndex:;
- (void).cxx_destruct;
- (void)enableIndexingAndBeginScheduling:budgetConfiguration:;
- (void)enableIndexingAndBeginScheduling:;
- (id)currentReasons;
@end
