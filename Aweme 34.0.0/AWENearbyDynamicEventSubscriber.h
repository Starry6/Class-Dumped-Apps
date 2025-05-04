@interface AWENearbyDynamicEventSubscriber : NSObject
@property (nonatomic) BDXBridgeEventSubscriber bdxSubscriber;
@property (nonatomic) AWENearbyLynxContainerView lynxContainer;
@property (nonatomic) @? handler;
- (id)lynxContainer;
- (void)setLynxContainer:;
- (void)setBdxSubscriber:;
- (id)bdxSubscriber;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (void)receiveEvent:;
+ (id)subscriberWithContainer:;
+ (id)subscriberWithHandler:;
@end
