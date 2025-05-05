@interface RxLock : NSObject
@property (nonatomic) NSString name;
- (void)withCriticalScope:;
- (id)init;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
@end
