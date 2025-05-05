@interface AWEIMRecallMessage : AWEIMMessage
@property (nonatomic) double recalledTime;
@property (nonatomic) NSString recallUserID;
@property (nonatomic) NSString recallConversationID;
@property (nonatomic) NSString recallUserNickname;
@property (nonatomic) BOOL recalledBySender;
@property (nonatomic) Q recallerRole;
@property (nonatomic) AWEIMTextMessage recalledMsg;
- (void)setRecalledMsg:;
- (id)initWithContentDict:;
- (id)recallConversationID;
- (id)recallUserID;
- (id)recallUserNickname;
- (BOOL)recalledBySender;
- (id)recalledMsg;
- (double)recalledTime;
- (unsigned long long)recallerRole;
- (void)setRecallConversationID:;
- (void)setRecallUserID:;
- (void)setRecallUserNickname:;
- (void)setRecallerRole:;
- (void).cxx_destruct;
+ (void)cacheRecalledTime:message:;
+ (double)memoryCacheForRecalledTimeWithMessageID:;
+ (id)recalledTimeCache;
+ (void)removeAllCache;
+ (void)setMemoryCacheForRecalledTime:messageID:;
@end
