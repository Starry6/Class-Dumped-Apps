@interface AWEIMRecentlyChatManager : NSObject
+ (void)obtainRecentlyChatStateWithSessionId:;
+ (id)cachedRecentlyChatInfoWithKey:;
+ (void)updateRecentlyChatCacheWithObject:forKey:;
@end
