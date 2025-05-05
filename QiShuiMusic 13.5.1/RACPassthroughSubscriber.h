@interface RACPassthroughSubscriber : NSObject
@property (nonatomic) <RACSubscriber> innerSubscriber;
@property (nonatomic) RACSignal signal;
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)innerSubscriber;
- (void)didSubscribeWithDisposable:;
- (id)disposable;
- (id)initWithSubscriber:signal:disposable:;
- (void)sendCompleted;
- (void)sendError:;
- (void)sendNext:;
- (id)signal;
- (void).cxx_destruct;
@end
