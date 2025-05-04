@interface AWEIMEmojiRecommendService : HTSService
@property (nonatomic) YYMemoryCache cache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestWithContext:;
- (void)storeRequestedEmojis:ofItemID:logid:;
- (id)resolveSmartEmojiNamesFromMessageSyncedExt:;
- (id)resolveSmartEmojisFromMessageSyncedExt:;
- (id)resolveLogIDFromMessageSyncedExt:;
- (long long)resolveUseDefaultEmojiFromMessageSyncedExt:defaultValue:;
- (id)getRecentEmojis;
- (id)appendRecentEmojisAfterEmojis:;
- (id)appendRecentEmojisAfterEmojis:countLimit:;
- (id)p_constructEmojisFromTitles:logid:;
- (void)p_trackRequestWithContext:duration:model:error:;
- (id)p_localDefaultEmojis;
- (void)setCache:;
- (id)cache;
- (id)init;
- (void).cxx_destruct;
@end
