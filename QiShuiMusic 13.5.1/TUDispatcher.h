@interface TUDispatcher : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)init;
- (id)qosUserInteractiveDispatchBlockForBlock:;
- (id)dispatchQueue;
- (void)dispatchSynchronousBlock:;
- (void).cxx_destruct;
- (void)dispatchAsynchronousBlock:;
- (id)initWithQueue:;
- (id)initWithIdentifier:;
- (void)boostQualityOfService;
+ (id)dispatcherWithIdentifier:;
+ (id)dispatcherWithQueue:;
@end
