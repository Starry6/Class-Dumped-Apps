@interface AWEMixInfoResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray mixInfos;
@property (nonatomic) NSNumber total;
- (id)mixInfos;
- (void)setMixInfos:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)mixInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
