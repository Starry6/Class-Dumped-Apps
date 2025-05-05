@interface MKArtworkDataSourceCache : NSObject
@property (nonatomic) MKTransitArtworkManager artworkManager;
- (void)purge;
- (void).cxx_destruct;
- (void)_shieldPackDidUpdate;
- (id)initWithArtworkManager:;
- (id)imageForSizedArtwork:scale:nightMode:;
- (id)imageForArtwork:size:featureType:scale:nightMode:;
- (id)imageForArtwork:size:featureType:scale:nightMode:widthPaddingMultiple:;
- (id)_lookupArtworkInCacheWithKey:;
- (void)_setArtworkImageInCache:forKey:;
- (id)artworkManager;
+ (id)sharedInstance;
@end
