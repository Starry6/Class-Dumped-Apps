@interface IESSaaSTIMBatchConversationMarkReadModel : NSObject
@property (nonatomic) q index;
@property (nonatomic) q indexV2;
@property (nonatomic) NSInteger badgeCount;
@property (nonatomic) q serverMessageId;
- (long long)indexV2;
- (long long)serverMessageId;
- (void)setIndexV2:;
- (void)setServerMessageId:;
- (long long)index;
- (void)setIndex:;
- (int)badgeCount;
- (void)setBadgeCount:;
@end
