@interface AWETeenGeneralIPAlbumCardModel : AWEBaseApiModel
@property (nonatomic) AWEMinorAlbum specificAlbum;
@property (nonatomic) NSArray seriesAlbumList;
@property (nonatomic) q seriesAlbumCount;
@property (nonatomic) NSString alias;
@property (nonatomic) NSString keyWord;
@property (nonatomic) NSString keyWordAlias;
- (id)keyWord;
- (void)setKeyWord:;
- (id)specificAlbum;
- (void)setSpecificAlbum:;
- (id)seriesAlbumList;
- (void)setSeriesAlbumList:;
- (long long)seriesAlbumCount;
- (void)setSeriesAlbumCount:;
- (id)keyWordAlias;
- (void)setKeyWordAlias:;
- (id)alias;
- (void).cxx_destruct;
- (void)setAlias:;
+ (id)specificAlbumJSONTransformer;
+ (id)seriesAlbumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
