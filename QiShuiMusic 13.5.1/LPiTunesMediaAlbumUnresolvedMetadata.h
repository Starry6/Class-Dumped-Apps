@interface LPiTunesMediaAlbumUnresolvedMetadata : NSObject
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString artist;
@property (nonatomic) LPiTunesMediaAsset artwork;
@property (nonatomic) NSArray offers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)artist;
- (void)setArtist:;
- (id)storeIdentifier;
- (id)artwork;
- (void)setName:;
- (id)offers;
- (void).cxx_destruct;
- (void)setArtwork:;
- (id)storeFrontIdentifier;
- (void)setOffers:;
- (id)name;
- (id)resolve;
- (void)setStoreFrontIdentifier:;
- (void)setStoreIdentifier:;
- (id)assetsToFetch;
@end
