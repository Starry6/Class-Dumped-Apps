@interface AWEIMNotificationOwnPostedCommentResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray commentList;
@property (nonatomic) q maxTime;
@property (nonatomic) q minTime;
- (id)commentList;
- (void)setCommentList:;
- (void)setMaxTime:;
- (void)setMinTime:;
- (long long)maxTime;
- (void)setHasMore:;
- (long long)minTime;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)commentListJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
