@interface SSVCloudServiceCapabilitiesResponse : NSObject
@property (nonatomic) SSVSubscriptionStatus subscriptionStatus;
@property (nonatomic) BOOL supportsMusicCatalogPlayback;
@property (nonatomic) BOOL supportsAddToCloudMusicLibrary;
@property (nonatomic) BOOL canSubscribeToMusicCatalog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subscriptionStatus;
- (id)initWithXPCEncoding:;
- (void)setSubscriptionStatus:;
- (id)copyXPCEncoding;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)_descriptionWithSubscriptionStatusDescriptorBlock:;
- (BOOL)supportsMusicCatalogPlayback;
- (void)setSupportsMusicCatalogPlayback:;
- (BOOL)supportsAddToCloudMusicLibrary;
- (void)setSupportsAddToCloudMusicLibrary:;
- (BOOL)canSubscribeToMusicCatalog;
- (void)setCanSubscribeToMusicCatalog:;
@end
