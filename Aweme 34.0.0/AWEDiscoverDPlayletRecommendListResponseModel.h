@interface AWEDiscoverDPlayletRecommendListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray recommendPlayletCardModelArray;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)recommendPlayletCardModelArray;
- (void)setRecommendPlayletCardModelArray:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)recommendPlayletCardModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
