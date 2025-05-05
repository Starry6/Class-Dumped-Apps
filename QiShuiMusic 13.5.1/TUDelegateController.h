@interface TUDelegateController : NSObject
@property (nonatomic) {os_unfair_lock_s=I} delegateLock;
@property (nonatomic) NSMapTable delegateToQueue;
- (id)init;
- (void)removeDelegate:;
- (void)enumerateDelegatesUsingBlock:;
- (void)addDelegate:queue:;
- (void).cxx_destruct;
- (id)delegateToQueue;
- (id)delegateLock;
@end
