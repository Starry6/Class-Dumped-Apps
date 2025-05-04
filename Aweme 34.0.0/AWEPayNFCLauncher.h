@interface AWEPayNFCLauncher : NSObject
+ (BOOL)isHitNFCActivity:;
+ (BOOL)isNFCScheme:;
+ (BOOL)handleNFCURLString:originDeeplinkURL:isColdLaunch:;
+ (BOOL)isHitNFCUniversalLink:;
+ (id)transferNFCUniversalLinkToScheme:;
+ (BOOL)handleNFCURLString:coldLaunchOptions:;
+ (BOOL)enableNFCLaunchOptimize;
+ (BOOL)couldHandleNFCURL;
+ (BOOL)checkActivityValid:;
+ (BOOL)disableNFCActivityCheck;
+ (BOOL)checkLiteHtsURLValid:;
+ (id)getDeeplinkUrlWithLaunchOptions:;
@end
