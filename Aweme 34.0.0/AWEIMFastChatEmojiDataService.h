@interface AWEIMFastChatEmojiDataService : HTSService
@property (nonatomic) YYMemoryCache unreadShareCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getUnreadShareVideoEmojisOfAwemeModel:;
- (id)getRecentlyUsedEmojis;
- (void)requestEmojisForAwemeModel:completion:;
- (id)unreadShareCache;
- (void)setUnreadShareCache:;
- (id)init;
- (void).cxx_destruct;
- (id)defaultEmojis;
@end
