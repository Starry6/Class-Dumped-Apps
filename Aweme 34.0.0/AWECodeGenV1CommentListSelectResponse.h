@interface AWECodeGenV1CommentListSelectResponse : AWEBaseResponseModel
@property (nonatomic) NSArray commentsModelArray;
@property (nonatomic) q cursor;
@property (nonatomic) q hasMore;
@property (nonatomic) q total;
- (id)commentsModelArray;
- (void)setCommentsModelArray:;
- (long long)cursor;
- (void)setHasMore:;
- (long long)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
