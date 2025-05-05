@interface WBSPasswordBreachStore : NSObject
@property (nonatomic) NSDictionary queuedPasswordBagManagerState;
@property (nonatomic) NSArray resultRecords;
@property (nonatomic) NSArray recentlyBreachedPersistentIdentifiers;
@property (nonatomic) Q rampIdentifier;
@property (nonatomic) NSDate lastSessionCompletionDate;
- (void)setRecentlyBreachedPersistentIdentifiers:;
- (id)lastSessionCompletionDate;
- (void)saveStoreSynchronously;
- (void)setRampIdentifier:;
- (id)recentlyBreachedPersistentIdentifiers;
- (void)setResultRecords:;
- (void)setQueuedPasswordBagManagerState:;
- (void)saveAndCloseStoreSynchronously;
- (unsigned long long)rampIdentifier;
- (id)resultRecords;
- (void).cxx_destruct;
- (id)initWithBackingStoreURL:;
- (void)setLastSessionCompletionDate:;
- (id)queuedPasswordBagManagerState;
+ (id)_createPersistentIdentifierCanary;
+ (BOOL)_readAndValidatePersistentIdentifierCanaryWithPersistentIdentifier:expectedValue:;
@end
