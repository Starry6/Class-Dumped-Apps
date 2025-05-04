@interface AWESearchAIGCDeepThinkCacheData : NSObject
+ (id)userActionCacheConfig;
+ (void)updateUserActionCache:;
+ (BOOL)deepThinkIsOpen;
+ (id)deepThinkModelName;
+ (id)currentNetMode;
+ (id)netModeList;
+ (void)switchDeepThinkOpenMode:;
+ (void)switchDeepThinkNetMode:;
+ (id)defaultConfig;
@end
