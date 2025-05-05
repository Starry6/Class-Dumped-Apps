@interface LPiTunesMediaBookUnresolvedMetadata : NSObject
@property (nonatomic) NSString storeFrontIdentifier;
@property (nonatomic) NSString storeIdentifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSString author;
@property (nonatomic) LPiTunesMediaAsset artwork;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)storeIdentifier;
- (id)artwork;
- (void)setName:;
- (id)author;
- (void).cxx_destruct;
- (void)setAuthor:;
- (void)setArtwork:;
- (id)storeFrontIdentifier;
- (id)name;
- (id)resolve;
- (void)setStoreFrontIdentifier:;
- (void)setStoreIdentifier:;
- (id)assetsToFetch;
@end
