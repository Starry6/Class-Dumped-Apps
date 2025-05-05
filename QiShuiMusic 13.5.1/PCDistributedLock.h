@interface PCDistributedLock : NSObject
- (void)dealloc;
- (id)initWithName:;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (void).cxx_destruct;
- (id)initWithPath:;
- (BOOL)_lockBlocking:;
@end
