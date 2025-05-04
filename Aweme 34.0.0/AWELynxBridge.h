@interface AWELynxBridge : BDLynxBridge
+ (void)registerGlobalHandler:forMethod:;
+ (id)skipMethodNames;
+ (id)allXBridgeNames;
+ (id)searchXBridgeNames;
+ (BOOL)needSkipMethodName:;
@end
