@interface RACChannelTerminal : RACSignal
@property (nonatomic) RACSignal values;
@property (nonatomic) <RACSubscriber> otherTerminal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSubscribeWithDisposable:;
- (id)initWithValues:otherTerminal:;
- (id)otherTerminal;
- (void)sendCompleted;
- (void)sendError:;
- (void)sendNext:;
- (id)values;
- (id)subscribe:;
- (void).cxx_destruct;
@end
