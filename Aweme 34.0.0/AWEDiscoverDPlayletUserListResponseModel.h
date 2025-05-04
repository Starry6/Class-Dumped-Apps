@interface AWEDiscoverDPlayletUserListResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray playletModelArray;
- (id)playletModelArray;
- (void)setPlayletModelArray:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)playletModelArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
