@interface PIAUserAgentTools : NSObject
+ (id)getOriginWebViewUserAgentString;
+ (id)defaultWebViewUserAgentString;
+ (id)defaultWorkerUserAgentString;
+ (id)getAppNameAndVersionString;
+ (id)getWebViewDefaultUserAgent;
+ (id)getWorkerDefaultUserAgent;
@end
