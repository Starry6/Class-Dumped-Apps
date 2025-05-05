@interface WBSAppLink : NSObject
@property (nonatomic) NSURL url;
@property (nonatomic) BOOL isAppleNewsLink;
@property (nonatomic) LSApplicationProxy synchronousTargetApplicationProxy;
- (void)_sf_decideOpenStrategyAndCallCompletionHandlerOnMainThread:;
- (void)disable;
- (id)url;
- (id)initWithURL:;
- (void).cxx_destruct;
- (void)disableWithCompletionHandler:;
- (void)getAppLinkLabel:name:icon:;
- (long long)synchronouslyDecideOpenStrategy;
- (id)synchronousTargetApplicationProxy;
- (void)getAppLinkAttributesWithCompletionHandler:;
- (void)decideOpenStrategyWithCompletionHandler:;
- (void)openExternallyWithWebBrowserState:referrerURL:completionHandler:;
- (BOOL)isAppleNewsLink;
- (void)getAppLinkTargetApplicationBundleIdentifierWithCompletionHandler:;
- (void)openExternally;
- (void)_getAppLinkWithCompletionHandler:;
- (id)_synchronouslyFetchAppLinkWithError:;
- (long long)_openStrategyForAppLink:;
- (void)_appLink:getAppLinkLabel:name:icon:;
- (BOOL)_isApplicationProxyAppleNews:;
+ (void)clearSavedSettings;
@end
