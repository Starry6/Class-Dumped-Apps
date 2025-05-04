@interface AWEGrouponSharkEventSubscriber : NSObject
@property (nonatomic) BDXBridgeEventSubscriber bdxSubscriber;
@property (nonatomic) @? handler;
- (void)setBdxSubscriber:;
- (id)bdxSubscriber;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (void)receiveEvent:;
+ (id)subscriberWithHandler:;
@end
