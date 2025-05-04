@interface AWEECXBridgeEventSubscriber : NSObject
@property (nonatomic) IESECXBridgeEventSubscriber subscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithSubscribeEventNamed:callback:;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
- (BOOL)unsubscribe;
@end
