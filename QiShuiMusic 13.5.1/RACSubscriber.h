@interface RACSubscriber : NSObject
@property (nonatomic) @? next;
@property (nonatomic) @? error;
@property (nonatomic) @? completed;
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSubscribeWithDisposable:;
- (id)disposable;
- (void)sendCompleted;
- (void)sendError:;
- (void)sendNext:;
- (id)next;
- (void)setNext:;
- (id)init;
- (void)dealloc;
- (void)setCompleted:;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)completed;
+ (id)subscriberWithNext:error:completed:;
@end
