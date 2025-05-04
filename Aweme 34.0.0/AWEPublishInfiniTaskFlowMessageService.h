@interface AWEPublishInfiniTaskFlowMessageService : NSObject
@property (nonatomic) NSHashTable subscribers;
@property (nonatomic) <AWEPublishInfiniTaskFlowMessageServiceSubscriber> multicastDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMulticastDelegate:;
- (id)multicastDelegate;
- (id)init;
- (id)subscribers;
- (id)forwardingTargetForSelector:;
- (BOOL)respondsToSelector:;
- (void).cxx_destruct;
- (void)addSubscriber:;
- (void)setSubscribers:;
@end
