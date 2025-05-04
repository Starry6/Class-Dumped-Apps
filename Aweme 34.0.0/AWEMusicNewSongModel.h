@interface AWEMusicNewSongModel : AWEBaseDataModel
@property (nonatomic) q id;
@property (nonatomic) NSString songID;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray artists;
@property (nonatomic) AWEMusicNewChorusModel chorus;
@property (nonatomic) NSArray chorusV3InfosModelArray;
- (void)setChorus:;
- (id)chorus;
- (void)setSongID:;
- (void)setChorusV3InfosModelArray:;
- (id)chorusV3InfosModelArray;
- (long long)id;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setId:;
- (id)songID;
- (id)artists;
- (void)setArtists:;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
