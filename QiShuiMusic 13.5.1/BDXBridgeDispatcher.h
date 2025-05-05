@interface BDXBridgeDispatcher : NSObject
@property (nonatomic) NSArray executors;
@property (nonatomic) <BDXBridgeDispatcherDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleCallMessage:resultHandler:;
- (id)initWithExecutors:;
- (BOOL)lynxView:shouldCall:params:callback:;
- (void)setExecutors:;
- (void)sortExecutorByPriority;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)executors;
@end
