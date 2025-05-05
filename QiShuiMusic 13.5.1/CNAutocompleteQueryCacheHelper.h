@interface CNAutocompleteQueryCacheHelper : NSObject
@property (nonatomic) CNCache cache;
@property (nonatomic) NSString searchString;
@property (nonatomic) CNObservable serverSearchObservable;
@property (nonatomic) CNAutocompleteQueryCacheMissAuditor cacheMissAuditor;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
- (id)searchString;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)cache;
- (id)initWithCache:searchString:serverSearchObservable:;
- (id)initWithCache:searchString:serverSearchObservable:cacheMissAuditor:schedulerProvider:;
- (id)cachedResultsObservable;
- (id)cachedFutureForSearchString:;
- (id)uncachedResultsObservable;
- (id)remoteResultsForSearchString:;
- (id)remoteResultsForSearchString:andCompletePromise:;
- (id)observablesForSearchString:withCachedResults:;
- (id)serverSearchObservable;
- (id)cacheMissAuditor;
+ (id)cache_os_log;
+ (id)stringByRemovingLastCharacterFromString:;
+ (BOOL)shouldCacheResults:;
@end
