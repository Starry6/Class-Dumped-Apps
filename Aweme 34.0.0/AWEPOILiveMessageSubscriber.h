@interface AWEPOILiveMessageSubscriber : NSObject
@property (nonatomic) NSString eventName;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) <IESLiveHybridContainerProtocol> liveContainer;
@property (nonatomic) AWELiveLifeLynxView lifeLynxView;
@property (nonatomic) @? callback;
@property (nonatomic) NSString bizId;
@property (nonatomic) BOOL isGlobalListener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtra:;
- (BOOL)onReceiveMessage:;
- (BOOL)isGlobalListener;
- (void)setLiveContainer:;
- (void)setLifeLynxView:;
- (id)lifeLynxView;
- (id)liveContainer;
- (void)setContainer:;
- (id)container;
- (void)setCallback:;
- (id)callback;
- (unsigned long long)hash;
- (void)setEventName:;
- (id)extra;
- (id)description;
- (void).cxx_destruct;
- (id)eventName;
- (BOOL)isEqual:;
- (id)bizId;
+ (id)subscriberWithEventName:extra:callback:;
+ (id)subscriberWithEventName:extra:lifeLynxView:;
+ (id)subscriberWithEventName:extra:container:;
@end
