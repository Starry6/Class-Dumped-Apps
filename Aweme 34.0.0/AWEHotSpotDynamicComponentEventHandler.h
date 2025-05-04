@interface AWEHotSpotDynamicComponentEventHandler : NSObject
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) NSMutableDictionary logParams;
- (id)logParams;
- (void)setLogParams:;
- (void)registerReceiveEvent:publishEvent:;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
