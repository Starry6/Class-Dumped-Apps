@interface AWEProfileMixResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray mixInfos;
@property (nonatomic) NSDictionary logPb;
- (void)setLogPb:;
- (id)logPb;
- (id)mixInfos;
- (void)setMixInfos:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)mixInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
