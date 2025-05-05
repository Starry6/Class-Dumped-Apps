@interface IESIMOneDayCommentHasMoreModel : IESIMBaseApiModel
@property (nonatomic) NSArray commentList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber totalCount;
- (void)setCommentList:;
- (id)commentList;
- (id)cursor;
- (void)setHasMore:;
- (id)totalCount;
- (void)setCursor:;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (void)setTotalCount:;
+ (id)commentListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
