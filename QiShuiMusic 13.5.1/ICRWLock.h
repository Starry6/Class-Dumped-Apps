@interface ICRWLock : NSObject
- (id)init;
- (void)dealloc;
- (void)unlock;
- (void)writeLock;
- (int)tryReadLock;
- (void)readLock;
@end
