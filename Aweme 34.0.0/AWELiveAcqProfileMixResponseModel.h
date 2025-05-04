@interface AWELiveAcqProfileMixResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray mixInfos;
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
