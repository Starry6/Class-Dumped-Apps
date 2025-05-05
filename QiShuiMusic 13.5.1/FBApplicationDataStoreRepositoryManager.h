@interface FBApplicationDataStoreRepositoryManager : NSObject
@property (nonatomic) <FBApplicationDataStoreRepository> dataStore;
@property (nonatomic) LSEnumerator lsEnumerator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataStore:;
- (id)dataStore;
- (id)init;
- (void)objectChangedForKeys:application:;
- (void)dealloc;
- (BOOL)removeStoreAtURL:error:;
- (void)storeInvalidatedForIdentifier:;
- (BOOL)migrateFromPlistStoreAtURL:toSqliteStoreAtURL:error:;
- (void)clearExpiredUninstalledApplicationsFromStoreIfNecessary;
- (void)setLsEnumerator:;
- (id)_safeObjectForKey:forApplication:ofType:;
- (void)_performAfterDeferredWork:;
- (id)lsEnumerator;
- (id)urlByAppendingString:toURL:;
- (void)_handleApplicationInstalled:;
- (void).cxx_destruct;
- (void)migrateApplicationStorePathIfNecessary;
- (id)_initWithDataStore:lsEnumerator:;
- (BOOL)migrateFromApplicationStore:toApplicationStore:error:;
+ (id)sharedInstance;
@end
