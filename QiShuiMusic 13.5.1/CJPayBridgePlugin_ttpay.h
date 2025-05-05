@interface CJPayBridgePlugin_ttpay : TTBridgePlugin
@property (nonatomic) @? bridgeCallback;
@property (nonatomic) UIViewController webVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bridgeCallback;
- (void)callState:fromScene:;
- (void)onResponse:;
- (void)setBridgeCallback:;
- (void)ttpayWithParam:callback:engine:controller:;
- (void).cxx_destruct;
- (id)webVC;
- (void)setWebVC:;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
