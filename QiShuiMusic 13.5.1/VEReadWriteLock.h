@interface VEReadWriteLock : NSObject
- (int)trywrlock;
- (id)init;
- (void)dealloc;
- (int)unlock;
- (int)wrlock;
- (int)tryrdlock;
- (int)rdlock;
@end
