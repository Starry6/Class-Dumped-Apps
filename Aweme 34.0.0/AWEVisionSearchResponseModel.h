@interface AWEVisionSearchResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray dataModels;
@property (nonatomic) NSArray objectModels;
@property (nonatomic) q cursor;
@property (nonatomic) q offset;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString contentHash;
@property (nonatomic) NSString queryID;
@property (nonatomic) NSString searchID;
- (id)dataModels;
- (void)setDataModels:;
- (long long)cursor;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (void)setQueryID:;
- (BOOL)hasMore;
- (void)setCursor:;
- (id)queryID;
- (void).cxx_destruct;
- (void)setContentHash:;
- (id)contentHash;
- (id)searchID;
- (void)setSearchID:;
- (id)objectModels;
- (void)setObjectModels:;
+ (id)dataModelsJSONTransformer;
+ (id)objectModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
