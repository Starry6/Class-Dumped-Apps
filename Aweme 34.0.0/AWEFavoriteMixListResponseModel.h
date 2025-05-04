@interface AWEFavoriteMixListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray mixList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSDictionary logPb;
- (void)setMixList:;
- (void)setLogPb:;
- (id)logPb;
- (id)mixList;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)mixListJSONTransformer;
@end
