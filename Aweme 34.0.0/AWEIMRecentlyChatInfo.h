@interface AWEIMRecentlyChatInfo : NSObject
@property (nonatomic) NSString recentlyChatStr;
@property (nonatomic) NSDate lastMsgCreateTime;
@property (nonatomic) NSDate cachedTime;
@property (nonatomic) BOOL isRecentlyChat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)lastMsgCreateTime;
- (void)setLastMsgCreateTime:;
- (void)setIsRecentlyChat:;
- (void)setCachedTime:;
- (id)cachedTime;
- (BOOL)isRecentlyChat;
- (id)recentlyChatStr;
- (void)setRecentlyChatStr:;
- (void).cxx_destruct;
@end
