@interface AWEIMUnreadMessagesConsumerCache : NSObject
@property (nonatomic) YYMemoryCache unreadInfoCache;
- (void)setUnreadInfoCache:;
- (id)unreadInfoCache;
- (id)objectForConversationId:filterOption:key:;
- (id)objectForConversationId:key:;
- (BOOL)setObject:forConversationId:filterOption:key:;
- (BOOL)setObject:forConversationId:key:;
- (BOOL)removeAllObjectsForConversationId:;
- (void)removeAllObjects;
- (void).cxx_destruct;
+ (id)sharedCacheConcurrentQueue;
+ (id)sharedCache;
@end
