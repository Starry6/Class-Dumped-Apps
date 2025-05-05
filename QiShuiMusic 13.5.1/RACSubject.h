@interface RACSubject : RACSignal
@property (nonatomic) NSMutableArray subscribers;
@property (nonatomic) RACCompoundDisposable disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)enumerateSubscribersUsingBlock:;
- (void)didSubscribeWithDisposable:;
- (id)disposable;
- (void)sendCompleted;
- (void)sendError:;
- (void)sendNext:;
- (id)init;
- (void)dealloc;
- (id)subscribe:;
- (void).cxx_destruct;
- (id)subscribers;
+ (id)subject;
@end
