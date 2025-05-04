@interface AWEPastMemoriesResponseModel : MTLModel
@property (nonatomic) NSArray awemeModels;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModels;
- (void)setAwemeModels:;
- (long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
+ (id)awemeModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
