@interface MKSizedTransitArtwork : NSObject
@property (nonatomic) <GEOTransitArtworkDataSource> artwork;
@property (nonatomic) q shieldSize;
@property (nonatomic) q fallbackShieldSize;
@property (nonatomic) MKArtworkDataSourceCache artworkCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)artwork;
- (unsigned long long)hash;
- (void)setArtworkCache:;
- (void).cxx_destruct;
- (id)artworkCache;
- (BOOL)isEqual:;
- (long long)shieldSize;
- (id)imageToDisplayWithScreenScale:nightMode:;
- (id)badgeImageToDisplayWithScreenScale:nightMode:;
- (id)initWithArtwork:shieldSize:;
- (id)initWithArtwork:shieldSize:artworkCache:;
- (id)initWithArtwork:shieldSize:fallbackShieldSize:artworkCache:;
- (BOOL)isEqualToTransitArtworkViewMode:;
- (long long)fallbackShieldSize;
@end
