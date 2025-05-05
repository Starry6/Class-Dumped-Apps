@interface PLLibraryScopeChangeTracker : NSObject
@property (nonatomic) <PLLibraryScopeChangeTrackerDelegate> delegate;
@property (nonatomic) BOOL hasChangeTrackerToken;
- (id)lastKnownTokenFromDisk;
- (void)clearToken;
- (BOOL)start;
- (void)setDelegate:;
- (void)stop;
- (id)currentToken;
- (void)updateLastKnownTokenToResult:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)hasChangeTrackerToken;
- (id)initWithManagedObjectContext:;
- (void)saveLastKnownChangeTrackerTokenToDisk;
- (id)fetchObjectsNeedingEvaluation;
- (id)fetchResultsSincePersistentHistoryToken:;
- (id)_transactionIteratorSinceToken:;
- (id)_allowedPropertyDescriptionsForEntityName:;
+ (id)archivedDataWithToken:;
+ (id)unarchiveTokentWithData:;
@end
