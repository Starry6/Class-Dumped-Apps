@interface PETReservoirSamplingLog : NSObject
- (BOOL)_lock;
- (void)_unlock;
- (id)init;
- (void)dealloc;
- (id)initWithStore:limit:;
- (void)_gc;
- (BOOL)_readHeader;
- (void)enumerateAndClearItemsWithBlock:;
- (void)unlock;
- (id)initInMemoryWithLimit:;
- (id)initWithPath:limit:;
- (void)clear;
- (void)_enumerateItemsWithBlockLocked:;
- (void).cxx_destruct;
- (void)log:;
- (void)_clearLocked;
- (void)enumerateItemsWithBlock:;
@end
