@interface DMCLazyInitializationUtilities : NSObject
+ (void)loadBundleAtURL:completionBlock:;
+ (void)loadNSBundleAtURL:completionBlock:;
+ (void)initMobileActivation;
+ (void)initSetupAssistant;
+ (void)initSpringBoardServices;
+ (void)initUserManagement;
+ (void)initAppleIDSSOAuthentication;
+ (void)initAuthKit;
@end
