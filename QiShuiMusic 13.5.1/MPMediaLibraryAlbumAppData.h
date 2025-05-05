@interface MPMediaLibraryAlbumAppData : NSObject
@property (nonatomic) q version;
- (id)init;
- (long long)version;
- (void).cxx_destruct;
- (id)initWithAppDataDictionary:;
- (void)setSongPopularity:forIdentifierSet:;
- (id)songPopularityForIdentifiers:;
- (void)setSongPopularity:forAdamID:;
- (id)songPopularityForAdamID:;
- (id)createAppDataDictionary;
@end
