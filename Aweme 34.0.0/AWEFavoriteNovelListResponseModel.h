@interface AWEFavoriteNovelListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray novelList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString novelSDKHomepageSchema;
- (id)novelList;
- (id)novelSDKHomepageSchema;
- (void)setNovelList:;
- (void)setNovelSDKHomepageSchema:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)novelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
