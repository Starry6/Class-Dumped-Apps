@interface AWEOneDayCommentHasMoreModel : AWEBaseApiModel
@property (nonatomic) NSArray commentList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber totalCount;
- (id)commentList;
- (void)setCommentList:;
- (id)cursor;
- (id)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
