@interface GEORouteHypothesisCache : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)enumerateAllForCacheEntriesWithHandler:;
- (id)loadValueForKey:;
- (void)tearDown;
- (id)loadEntryForRowId:;
- (void)protectedDataDidBecomeAvailable:;
- (void)saveValue:forKey:;
- (double)nextRefreshTimeStamp;
- (id)rowIdsOfEntriesBeforeTimeStamp:;
- (id)initWithPath:legacyPath:;
- (void).cxx_destruct;
- (void)_removeAllEntries;
- (id)initWithPath:;
- (void)removeKey:value:;
- (id)descriptionOfAllEntries;
- (long long)numberOfEntriesOnDisk;
@end
