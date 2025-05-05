@interface INAppTrust : NSObject
+ (BOOL)shouldTrustExtensionForLaunch:;
+ (BOOL)_shouldTrustExtensionForLaunch:withExplicitAppTrustCache:;
+ (id)extensionsTrustedForLaunch:;
+ (BOOL)shouldTrustAppForLaunch:;
+ (BOOL)_shouldTrustAppForLaunch:withExplicitAppTrustCache:;
+ (id)appsTrustedForLaunch:;
+ (BOOL)_appRequiresExplicitTrust:withExplicitAppTrustCache:;
@end
