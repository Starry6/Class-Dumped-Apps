@interface ML3StoreItemPlaylistData : NSObject
@property (nonatomic) NSData playlistsData;
@property (nonatomic) NSArray parsedStorePlaylistsImportProperties;
@property (nonatomic) Q playlistCount;
- (void).cxx_destruct;
- (id)playlistsData;
- (id)initWithLookupItems:;
- (id)initWithPlaylistsData:;
- (id)parsedStorePlaylistsImportProperties;
- (unsigned long long)playlistCount;
- (id)_playlistPropertiesForLookupItems:;
- (id)_playlistPropertiesFromPlaylistData:;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:cropStyle:;
@end
