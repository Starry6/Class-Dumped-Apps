@interface FMReadWriteLock : NSObject
@property (nonatomic) NSString lockName;
@property (nonatomic) {_opaque_pthread_rwlock_t=q[192c]} lock;
- (id)init;
- (void)performWithReadLock:;
- (id)lockName;
- (id)lock;
- (void).cxx_destruct;
- (void)setLockName:;
- (id)initWithLockName:;
- (void)performWithWriteLock:;
- (void)setLock:;
@end
