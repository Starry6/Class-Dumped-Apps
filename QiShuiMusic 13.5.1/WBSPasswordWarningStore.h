@interface WBSPasswordWarningStore : NSObject
- (void)saveStoreSynchronously;
- (id)_initWithBackingStoreURL:;
- (void).cxx_destruct;
- (void)clearStoreSynchronously;
- (id).cxx_construct;
- (void)getContainsPersistentIdentifier:completionHandler:;
- (void)addPersistentIdentifier:;
- (id)_initWithDefaultBackingStore;
- (void)_loadStoreIfNecessary;
- (void)_saveStoreSoon;
- (void)_saveStoreNow;
- (void)_addPersistentIdentifier:withLastWarningDate:;
- (void)synchronousyClearIdentifiersAddedAfterDate:;
+ (id)sharedStore;
@end
