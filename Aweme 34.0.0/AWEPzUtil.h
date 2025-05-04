@interface AWEPzUtil : NSObject
+ (void)trackEvent:withParams:;
+ (double)getCurrentServerTime;
+ (double)getCurrentServerTimeDefaultLocalTime;
+ (void)purgeJournalIfNeed;
+ (BOOL)checkComponent:inScopes:excludedScopes:;
+ (void)sendEvent:metric:category:extra:;
+ (void)syncMeasureBlockInvoke:measurementHandler:;
+ (void)getAllDomainDBLimitCompletion:;
+ (BOOL)checkComponent:inScopes:;
+ (BOOL)checkComponent:inScope:;
+ (id)getSerialQueue;
@end
