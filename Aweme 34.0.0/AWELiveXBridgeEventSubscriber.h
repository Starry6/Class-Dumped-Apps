@interface AWELiveXBridgeEventSubscriber : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) BDXBridgeEventSubscriber xSubscriber;
- (void)setXSubscriber:;
- (id)xSubscriber;
- (void)dealloc;
- (void)setEventName:;
- (void).cxx_destruct;
- (BOOL)unsubscribe;
- (id)eventName;
+ (void)unsubscribeWithEventName:xSubscriber:;
+ (id)ecSubscriberWithName:xSubscriber:;
@end
