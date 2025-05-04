@interface AWEIMMessageConversationCacheManager : NSObject
@property (nonatomic) NSMapTable conversationCache;
- (void)cacheConversationContext:;
- (id)getConversationContextWithCid:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)conversationCache;
- (void)setConversationCache:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
