@interface CJPayBridgeBlockRegister : NSObject
+ (id)associatedPluginsOnEngine:pluginClassName:;
+ (void)registerBridgeName:engineType:authType:domains:needBridgeCommand:handler:;
@end
