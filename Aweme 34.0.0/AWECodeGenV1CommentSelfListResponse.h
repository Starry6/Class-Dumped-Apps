@interface AWECodeGenV1CommentSelfListResponse : AWEBaseResponseModel
@property (nonatomic) NSArray commentListModelArray;
@property (nonatomic) q hasMore;
@property (nonatomic) q maxTime;
@property (nonatomic) q minTime;
- (id)commentListModelArray;
- (void)setCommentListModelArray:;
- (void)setMaxTime:;
- (void)setMinTime:;
- (long long)maxTime;
- (void)setHasMore:;
- (long long)minTime;
- (long long)hasMore;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
