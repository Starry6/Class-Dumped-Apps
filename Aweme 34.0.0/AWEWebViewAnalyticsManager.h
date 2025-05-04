@interface AWEWebViewAnalyticsManager : NSObject
+ (id)analyticsScriptWithAdInfo:;
+ (void)fetchAnalyticsScript;
+ (void)startUpdatingWebViewAnalyticsScript;
@end
