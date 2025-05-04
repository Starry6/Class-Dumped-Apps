@interface AWEIMSecondaryCommentResponseModel : AWEBaseApiModel
@property (nonatomic) q cursor;
@property (nonatomic) NSArray comments;
@property (nonatomic) BOOL hasMore;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)comments;
- (void)setComments:;
+ (id)commentsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
