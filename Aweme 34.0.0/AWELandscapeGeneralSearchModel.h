@interface AWELandscapeGeneralSearchModel : AWEBaseApiModel
@property (nonatomic) q cursor;
@property (nonatomic) q hasMore;
@property (nonatomic) NSString impr_id;
@property (nonatomic) NSArray itemModels;
- (id)awemeModels;
- (void)setItemModels:;
- (id)itemModels;
- (id)impr_id;
- (void)setImpr_id:;
- (long long)cursor;
- (void)setHasMore:;
- (long long)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
