@interface MFRecursiveLock : NSRecursiveLock
- (id)initWithName:andDelegate:;
- (BOOL)lockBeforeDate:;
- (id)init;
- (void)dealloc;
- (BOOL)isLockedByMe;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (id)description;
@end
