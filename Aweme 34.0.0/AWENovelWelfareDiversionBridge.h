@interface AWENovelWelfareDiversionBridge : TTBridgePlugin
- (void)showSKOverlayWithParam:callback:engine:controller:;
- (void)dismissSKOverlayWithParam:callback:engine:controller:;
+ (void)registerBridge;
@end
