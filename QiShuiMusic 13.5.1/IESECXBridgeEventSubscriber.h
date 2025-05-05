@interface IESECXBridgeEventSubscriber : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) BDXBridgeEventSubscriber xSubscriber;
- (void)setXSubscriber:;
- (id)xSubscriber;
- (void)dealloc;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (BOOL)unsubscribe;
+ (id)ecSubscriberWithName:xSubscriber:;
+ (void)unsubscribeWithEventName:xSubscriber:;
@end
