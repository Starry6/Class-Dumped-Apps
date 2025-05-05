@interface CPExclusiveLock : NSObject
- (id)init;
- (void)dealloc;
- (void)setName:;
- (id)initWithName:;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (id)name;
@end
