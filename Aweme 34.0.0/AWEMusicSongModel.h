@interface AWEMusicSongModel : AWEBaseApiModel
@property (nonatomic) NSString songID;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray artists;
@property (nonatomic) AWEMusicChorusModel chorus;
@property (nonatomic) NSArray chorusV3Infos;
- (void)setChorus:;
- (id)chorus;
- (void)setSongID:;
- (id)chorusV3Infos;
- (void)setChorusV3Infos:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)songID;
- (id)artists;
- (void)setArtists:;
+ (id)artistsJSONTransformer;
+ (id)chorusJSONTransformer;
+ (id)chorusV3InfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
