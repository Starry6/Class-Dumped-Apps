@interface AWEProfileEventPublisher : NSProxy
@property (nonatomic) Protocol event;
@property (nonatomic) NSHashTable subscribers;
@property (nonatomic) {os_unfair_lock_s=I} lock;
- (void)handleUnknownSelector:;
- (void)setLock:;
- (id)subscribers;
- (void)setEvent:;
- (id)lock;
- (id)initWithEvent:;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)methodSignatureForSelector:;
- (id)event;
- (void)addSubscriber:;
- (void)removeSubscriber:;
- (void)setSubscribers:;
@end
