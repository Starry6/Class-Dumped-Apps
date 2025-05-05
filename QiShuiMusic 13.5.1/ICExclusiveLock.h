@interface ICExclusiveLock : NSObject
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (void).cxx_destruct;
- (id)initWithName:cachePath:;
- (id)name;
@end
