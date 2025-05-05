@interface NSRunStorage : NSObject
- (id)init;
- (void)dealloc;
- (id)elementAtIndex:effectiveRange:;
- (void)_allocData:;
- (id)initWithRunStorage:;
- (void)_consistencyError:startAtZeroError:cacheError:inconsistentBlockError:;
- (void)replaceElementsInRange:withElement:coalesceRuns:;
- (void)removeElementsInRange:coalesceRuns:;
- (void)_moveGapToBlockIndex:;
- (void)_ensureCapacity:;
- (id)initWithElementSize:capacity:;
- (unsigned long long)elementSize;
- (id)description;
- (void)_moveGapAndMergeWithBlockRange:;
- (unsigned long long)count;
- (void)_deallocData;
- (void)_consistencyCheck:;
- (void)insertElement:range:coalesceRuns:;
- (id)copyWithZone:;
- (void)_reallocData:;
+ (void)_setConsistencyCheckingEnabled:superCheckEnabled:;
@end
