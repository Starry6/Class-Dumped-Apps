@interface MCLazyInitializationUtilities : NSObject
+ (void)loadBundleAtURL:completionBlock:;
+ (void)loadNSBundleAtURL:completionBlock:;
+ (void)initPowerlogControl;
+ (void)initCoreGraphics;
+ (void)initImageIO;
+ (void)initCoreText;
+ (void)initExchangeSyncExpress;
+ (void)initDAEAS;
+ (void)initMobileActivation;
+ (void)initLoggingSupport;
+ (void)initSetupAssistant;
+ (void)initSpringBoardServices;
+ (void)initUserManagement;
+ (void)initAppleIDSSOAuthentication;
+ (void)initAuthKit;
@end
