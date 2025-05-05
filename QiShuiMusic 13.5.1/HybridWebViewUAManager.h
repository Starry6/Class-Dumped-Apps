@interface HybridWebViewUAManager : NSObject
+ (id)appendExtraUAParams:;
+ (id)baseCustomUserAgent;
+ (id)currentUserAgent;
+ (id)cutToSystemUserAgentIfNeeded:withApplicationNameForUserAgent:;
+ (id)defaultUserAgentString;
+ (id)fetchCachedDefaultUserAgent;
+ (id)fetchOrUpdateUserAgentNow;
+ (id)fetchOrUpdateUserAgentNowOnMainThread;
+ (id)registerCustomUserAgent:;
+ (void)setCutTheSystemUA:;
+ (void)startUpdatingUserAgent;
@end
