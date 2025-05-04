@interface AWEIMMyContentFeedbackDigListModel : AWEBaseApiModel
@property (nonatomic) q totalCounts;
@property (nonatomic) NSArray participants;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString replyText;
- (long long)nextCursor;
- (void)setNextCursor:;
- (long long)totalCounts;
- (void)setTotalCounts:;
- (id)participants;
- (void)setHasMore:;
- (void)setParticipants:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)itemId;
- (id)replyText;
- (void)setReplyText:;
- (void)setItemId:;
+ (id)participantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
