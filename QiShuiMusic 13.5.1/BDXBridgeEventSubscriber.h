@interface BDXBridgeEventSubscriber : NSObject
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) NSString containerId;
@property (nonatomic) @? callback;
@property (nonatomic) double timestamp;
@property (nonatomic) NSString eventId;
@property (nonatomic) BOOL shouldFilterEvent;
- (void)setShouldFilterEvent:;
- (BOOL)shouldFilterEvent;
- (id)callback;
- (void)setContainer:;
- (void)setCallback:;
- (id)containerId;
- (id)container;
- (void)setContainerId:;
- (unsigned long long)hash;
- (BOOL)receiveEvent:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
- (BOOL)isEqual:;
- (id)eventId;
- (void)setEventId:;
+ (id)subscriberWithEventId:callback:;
+ (id)subscriberWithCallback:;
+ (id)subscriberWithContainer:timestamp:;
@end
