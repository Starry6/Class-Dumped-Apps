@interface AWEFavoriteFolderVideoListInfoModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSNumber cursor;
- (id)awemeList;
- (void)setAwemeList:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
