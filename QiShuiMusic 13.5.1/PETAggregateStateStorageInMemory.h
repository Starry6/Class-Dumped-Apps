@interface PETAggregateStateStorageInMemory : PETAggregateStateStorage
- (id)init;
- (void)dealloc;
- (void)saveCorruptState;
- (BOOL)resetLocked;
- (void).cxx_destruct;
- (void)reset;
- (void)expand:andRunWithLock:;
@end
