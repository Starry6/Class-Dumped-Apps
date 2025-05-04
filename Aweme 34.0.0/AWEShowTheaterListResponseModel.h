@interface AWEShowTheaterListResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) NSString requestParams;
- (id)awemeModels;
- (void)setAwemeModels:;
- (void)setOffset:;
- (id)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)requestParams;
- (void)setRequestParams:;
+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
