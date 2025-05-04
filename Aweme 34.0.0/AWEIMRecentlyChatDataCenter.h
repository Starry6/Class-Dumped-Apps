@interface AWEIMRecentlyChatDataCenter : NSObject
@property (nonatomic) YYMemoryCache recentlyChatCache;
- (id)recentlyChatCache;
- (id)recentlyChatCacheObjectForKey:;
- (void)deleteRecentlyChatCacheObjectForKey:;
- (void)cacheRecentlyChatObject:forKey:;
- (void)setRecentlyChatCache:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
