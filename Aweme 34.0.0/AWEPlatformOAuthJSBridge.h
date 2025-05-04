@interface AWEPlatformOAuthJSBridge : NSObject
+ (void)registerJSBridgeHandler;
+ (void)registerUniqueJSBridgeHandler;
+ (id)registerJumpOpenAuthPageWithJSBridge:callbackId:result:JSSDKVersion:executeCallback:;
@end
