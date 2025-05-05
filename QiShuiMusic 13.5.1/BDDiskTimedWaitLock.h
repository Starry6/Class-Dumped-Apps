@interface BDDiskTimedWaitLock : NSObject
- (BOOL)testLock;
- (BOOL)testLockWithTimeout:;
- (id)init;
- (void)dealloc;
- (void)unlock;
- (void)lock;
@end
