@interface AMSDeallocGuard : NSObject
@property (nonatomic) @? block;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) {os_unfair_lock_s=I} invalidationLock;
- (id)block;
- (void)dealloc;
- (BOOL)invalidated;
- (id)initWithDeallocGuardBlock:;
- (void).cxx_destruct;
- (id)invalidationLock;
- (void)invalidate;
@end
