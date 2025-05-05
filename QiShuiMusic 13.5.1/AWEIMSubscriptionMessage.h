@interface AWEIMSubscriptionMessage : AWEIMMessage
@property (nonatomic) NSString cardId;
@property (nonatomic) q sendTime;
@property (nonatomic) NSArray articleList;
- (void)setArticleList:;
- (id)articleList;
- (id)generateForwardMessage;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)cardId;
- (void)setCardId:;
- (long long)sendTime;
- (void)setSendTime:;
@end
