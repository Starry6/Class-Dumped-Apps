@interface AWEECommerceAwemeListResponse : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q cursor;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray recommendInfoList;
- (id)awemeList;
- (void)setAwemeList:;
- (id)recommendInfoList;
- (void)setRecommendInfoList:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
