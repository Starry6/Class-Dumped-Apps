@interface AWETeenHotSpotModel : MTLModel
@property (nonatomic) NSString hotID;
@property (nonatomic) NSString title;
@property (nonatomic) NSNumber watchCount;
@property (nonatomic) NSNumber videoCount;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) q index;
@property (nonatomic) NSDictionary commonParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cover;
- (void)setCover:;
- (id)commonParams;
- (void)setCommonParams:;
- (id)watchCount;
- (void)setWatchCount:;
- (void)setHotID:;
- (id)hotID;
- (BOOL)isSameHotSpot:;
- (void)setIndex:;
- (long long)index;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setVideoCount:;
- (id)videoCount;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
