@interface SCNRecursiveLock : NSObject
- (id)init;
- (void)dealloc;
- (void)unlock;
- (void)lock;
@end
