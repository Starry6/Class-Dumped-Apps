@interface CJPayBridgePlugin_CJAuth : TTBridgePlugin
@property (nonatomic) @? callback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)CJAuthWithParam:callback:engine:controller:;
- (void)onResponse:;
- (id)callback;
- (void)setCallback:;
- (void).cxx_destruct;
+ (void)registerBridge;
+ (unsigned long long)instanceType;
@end
