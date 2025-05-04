@interface AWETeenGeneralAlbumCardModel : AWEBaseApiModel
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEMinorAlbum minorAlbum;
@property (nonatomic) NSMutableDictionary trackParams;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) BOOL hasMore;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)trackParams;
- (void)setTrackParams:;
- (id)awemeList;
- (void)setAwemeList:;
- (void)setMinorAlbum:;
- (id)minorAlbum;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)awemeListJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)minorAlbumJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
