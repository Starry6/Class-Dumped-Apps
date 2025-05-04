@interface AWEDiscoverDPlayletUserProfileTabListResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray playletCardModelArray;
- (id)playletCardModelArray;
- (void)setPlayletCardModelArray:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)playletCardModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
