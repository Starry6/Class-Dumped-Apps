@interface AWETeenStickerVideoListResponseModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString nextPageToken;
- (id)awemeList;
- (void)setAwemeList:;
- (id)nextPageToken;
- (void)setNextPageToken:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)awemeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
