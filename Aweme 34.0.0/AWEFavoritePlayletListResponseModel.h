@interface AWEFavoritePlayletListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray playletList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)playletList;
- (void)setPlayletList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)playletListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
