@interface VEARCTask : NSObject
@property (nonatomic) q refcount;
@property (nonatomic) NSObject<OS_dispatch_semaphore> sema;
- (long long)refcount;
- (long long)runDecrementTaskAtomic:;
- (long long)runIncrementTaskAtomic:;
- (void)setRefcount:;
- (id)init;
- (void).cxx_destruct;
- (void)setSema:;
- (id)sema;
@end
