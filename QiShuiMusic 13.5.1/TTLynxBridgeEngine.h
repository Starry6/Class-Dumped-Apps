@interface TTLynxBridgeEngine : NSObject
@property (nonatomic) NSObject sourceObject;
@property (nonatomic) TTBridgeRegister bridgeRegister;
@property (nonatomic) BDLynxBridge bridgeCore;
@property (nonatomic) UIViewController sourceController;
@property (nonatomic) NSURL sourceURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <TTBridgeAuthorization> authorization;
- (id)bridgeCore;
- (id)bridgeRegister;
- (void)callbackBridge:msg:params:resultBlock:;
- (void)callbackBridge:params:;
- (void)callbackBridge:params:resultBlock:;
- (void)didRegisterMethod:methodNamespace:handler:engineType:authType:domains:inRegister:;
- (BOOL)executeMethodWithMessage:onBridge:callback:;
- (void)fireEvent:msg:params:;
- (void)fireEvent:msg:params:resultBlock:;
- (void)fireEvent:params:;
- (void)fireEvent:params:resultBlock:;
- (void)installOnLynxView:;
- (id)lynxView;
- (BOOL)respondsToCommand:;
- (void)setBridgeCore:;
- (void)setBridgeRegister:;
- (id)authorization;
- (id)sourceController;
- (id)init;
- (id)sourceURL;
- (long long)engineType;
- (void).cxx_destruct;
- (id)sourceObject;
- (void)setSourceObject:;
+ (id)correctTopViewControllerFor:;
@end
