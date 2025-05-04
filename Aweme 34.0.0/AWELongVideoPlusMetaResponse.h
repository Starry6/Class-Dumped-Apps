@interface AWELongVideoPlusMetaResponse : MTLModel
@property (nonatomic) AWELVideoAlbumInfoModel albumInfo;
@property (nonatomic) AWELongVideoPlusEpisodeListResponse episodeListInfo;
@property (nonatomic) NSArray albumListSeries;
@property (nonatomic) q episodePageType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)albumInfo;
- (void)setAlbumInfo:;
- (long long)episodePageType;
- (void)setEpisodePageType:;
- (id)episodeListInfo;
- (void)setEpisodeListInfo:;
- (id)albumListSeries;
- (void)setAlbumListSeries:;
- (void).cxx_destruct;
+ (id)albumInfoJSONTransformer;
+ (id)episodeListInfoJSONTransformer;
+ (id)albumListSeriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
