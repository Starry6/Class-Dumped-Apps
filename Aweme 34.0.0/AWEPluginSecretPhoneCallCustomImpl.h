@interface AWEPluginSecretPhoneCallCustomImpl : NSObject
@property (nonatomic) BDPThreadSafeArray containers;
@property (nonatomic) BDXBridgeEventSubscriber subscriber;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didLoadFailedWithUrl:error:;
- (void)containerDidStartLoading:;
- (void)p_unregisterContainerEvent:;
- (id)modelWithContainerID:;
- (id)modelWithBizKey:;
- (id)modelWithSessionId:;
- (void)openPhoneCallSecretPopup:uniqueID:callback:;
- (id)containers;
- (id)init;
- (void)setContainers:;
- (void)dealloc;
- (id)subscriber;
- (void)setSubscriber:;
- (void).cxx_destruct;
- (void)_subscribe;
+ (id)sharedPlugin;
@end
