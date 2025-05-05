@interface CNChangeHistoryResultEnumerator : NSEnumerator
@property (nonatomic) CNQueue changes;
@property (nonatomic) CNQueue batchFetchQueue;
@property (nonatomic) <CNEnumeratorRefillStrategy> refillStrategy;
- (id)nextObject;
- (id)initWithChanges:refillStrategy:;
- (id)refillStrategy;
- (id)batchFetchQueue;
- (id)changes;
- (void).cxx_destruct;
- (void)_fetchNextBatch;
+ (id)contactEnumeratorWithChanges:keysToFetch:unifyResults:contactStore:;
+ (id)groupEnumeratorWithChanges:contactStore:;
@end
