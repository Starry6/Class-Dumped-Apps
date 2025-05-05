@interface LPiTunesMediaPlaylistUnresolvedMetadata : NSObject
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString curator;
@property (nonatomic) LPiTunesMediaAsset artwork;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storeIdentifier;
- (id)artwork;
- (void)setName:;
- (void).cxx_destruct;
- (void)setArtwork:;
- (id)storeFrontIdentifier;
- (id)name;
- (id)resolve;
- (void)setStoreFrontIdentifier:;
- (void)setStoreIdentifier:;
- (void)setCurator:;
- (id)curator;
- (id)assetsToFetch;
@end
