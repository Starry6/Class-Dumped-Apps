@interface AWEOFGBridgeCenter : NSObject
@property (nonatomic) NSMutableDictionary bridgeMethods;
- (void)registerBridgeMethod:;
- (id)bridgeMethods;
- (void)handleBridgeMessage:preActionBlock:completion:;
- (id)bridgeMethodForMethodName:;
- (void)setBridgeMethods:;
- (void)preActionUsingBlock:method:completion:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultCenter;
@end
