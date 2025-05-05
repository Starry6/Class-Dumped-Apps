@interface BDXWebViewUAManager : NSObject
+ (id)customDefaultUA;
+ (id)appendExtraUAParams:;
+ (id)baseCustomUserAgent;
+ (id)currentUserAgent;
+ (id)customCurrenttUA;
+ (id)deprecatedStoredUA;
+ (id)fetchCachedDefaultUserAgent;
+ (void)fetchDefaultUserAgent:;
+ (id)fetchOrUpdateUserAgentNow;
+ (id)fetchOrUpdateUserAgentNowOnMainThread;
+ (id)registerCustomUserAgent:;
+ (void)setCustomCurrenttUA:;
+ (void)setCustomDefaultUA:;
+ (void)startUpdatingUserAgent;
@end
