@interface AWEAnchorMediumRecommendResponseModel : AWEBaseApiModel
@property (nonatomic) q cursor;
@property (nonatomic) NSArray mediumModels;
@property (nonatomic) BOOL hasMore;
- (id)mediumModels;
- (void)setMediumModels:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)hasMoreJSONTransformer;
+ (id)mediumModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
