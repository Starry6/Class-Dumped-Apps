@interface AWEFavoriteBatManListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray batManList;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
- (id)batManList;
- (void)setBatManList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)batManListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
