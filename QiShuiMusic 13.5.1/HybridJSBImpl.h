@interface HybridJSBImpl : NSObject
@property (nonatomic) UIView<HybridKitViewProtocol> container;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeMethodInstanceWithName:;
- (void)registerBridgeMethodInstances:;
- (void)registerBridgeMethods:;
- (void)sendEvent:params:;
- (void)sendEvent:params:callback:;
- (void)setUpBridgeWithViewInstance:;
- (void)setContainer:;
- (id)containerID;
- (id)container;
- (void).cxx_destruct;
+ (void)hybrid_service_register;
@end
