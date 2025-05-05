@interface BDWebViewUAManager : NSObject
+ (BOOL)bdEnableUAFetchWithKV;
+ (void)consumeCallbacks;
+ (BOOL)enableUAFetch;
+ (void)executeWhenIdleWithTask:;
+ (void)fetchLastestSystemUserAgentWithCompletion:;
+ (id)fetchSystemUserAgentFromeCache;
+ (void)fetchSystemUserAgentWithCompletion:;
+ (long long)uaFetchTime;
@end
