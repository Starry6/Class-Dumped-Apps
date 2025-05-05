@interface PETAggregateStateStorage : NSObject
- (void)saveCorruptState;
- (void)runWithLock:;
- (BOOL)resetLocked;
- (void)reset;
- (void)expand:andRunWithLock:;
+ (id)storageInMemory;
+ (id)storageOnDisk:;
@end
