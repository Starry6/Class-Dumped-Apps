@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage
- (void)dealloc;
- (void)saveCorruptState;
- (BOOL)resetLocked;
- (void).cxx_destruct;
- (unsigned long long)_reserveCapacity:;
- (id)initWithPath:;
- (void)reset;
- (void)_die;
- (void)expand:andRunWithLock:;
- (void)_remapWithFlock:;
@end
