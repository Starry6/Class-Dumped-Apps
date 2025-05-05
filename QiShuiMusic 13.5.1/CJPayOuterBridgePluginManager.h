@interface CJPayOuterBridgePluginManager : NSObject
@property (nonatomic) NSMutableDictionary bridgeRegistry;
- (id)bridgeRegistry;
- (void)setBridgeRegistry:;
- (id)init;
- (void).cxx_destruct;
+ (id)bridgeForMethod:;
+ (void)registerOuterBridge:forMethod:;
+ (id)shared;
@end
