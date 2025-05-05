@interface LPiTunesMediaTVEpisodeUnresolvedMetadata : NSObject
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString episodeName;
@property (nonatomic) NSString seasonName;
@property (nonatomic) NSString genre;
@property (nonatomic) LPiTunesMediaAsset artwork;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)genre;
- (id)storeIdentifier;
- (id)artwork;
- (void).cxx_destruct;
- (void)setArtwork:;
- (id)storeFrontIdentifier;
- (id)resolve;
- (void)setStoreFrontIdentifier:;
- (void)setGenre:;
- (void)setStoreIdentifier:;
- (void)setEpisodeName:;
- (id)episodeName;
- (id)seasonName;
- (void)setSeasonName:;
- (id)assetsToFetch;
@end
