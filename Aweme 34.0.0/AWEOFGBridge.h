@interface AWEOFGBridge : NSObject
@property (nonatomic) <BDXBridgeContainerProtocol> container;
@property (nonatomic) @ engine;
@property (nonatomic) NSMutableDictionary messageMap;
- (id)messageMap;
- (void)setMessageMap:;
- (id)responseHandlerWithMessage:;
- (id)initWithContainer:engine:;
- (void)handleBridgeMessage:completion:;
- (void)setContainer:;
- (id)container;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
+ (BOOL)canHandleMessage:;
+ (void)registerBridgeMethod:;
+ (id)defaultBridgeMethodClasses;
+ (void)registerBridgeMethodWithClass:;
+ (void)registerBridgeMethodWithClass:usingBlock:;
+ (void)registerDefaultBridgeMethods;
+ (void)registerBridgeMethodUsingHandlerBlock:forJSMethod:;
@end
