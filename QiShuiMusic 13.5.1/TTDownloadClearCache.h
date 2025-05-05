@interface TTDownloadClearCache : NSObject
+ (void)checkAndInsertNewRules:error:;
+ (BOOL)getAllRuleFromDB;
+ (void)tryClearCacheByTncConfig;
+ (void)tryDeleteInvalidClearCacheRules:;
+ (void)updateClearCacheRule:;
@end
