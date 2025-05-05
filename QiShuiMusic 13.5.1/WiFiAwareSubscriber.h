@interface WiFiAwareSubscriber : NSObject
@property (nonatomic) <WiFiAwareSubscriberDelegate> delegate;
@property (nonatomic) WiFiAwareSubscribeConfiguration configuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exportedObject;
- (id)exportedInterface;
- (void)start;
- (void)handleError:;
- (void)setDelegate:;
- (void)stop;
- (id)configuration;
- (id)delegate;
- (void).cxx_destruct;
- (id)description;
- (void)startConnectionUsingProxy:completionHandler:;
- (id)initWithConfiguration:;
- (id)remoteObjectInterface;
- (void)sendMessage:toPeerAddress:withInstanceID:completionHandler:;
- (void)subscribeStartedWithInstanceID:;
- (void)subscribeTerminatedWithReason:;
- (void)subscribeReceivedDiscoveryResult:;
- (void)subscribeLostDiscoveryResultForPublishID:address:;
- (void)subscribeFailedToStartWithError:;
- (void)subscribeReceivedMessage:fromPublishID:address:;
@end
