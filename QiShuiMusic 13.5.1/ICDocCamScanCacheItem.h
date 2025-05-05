@interface ICDocCamScanCacheItem : NSObject
@property (nonatomic) ICDocCamImageCache imageCache;
@property (nonatomic) NSArray docInfos;
- (id)imageCache;
- (id)init;
- (void)setImageCache:;
- (void).cxx_destruct;
- (void)doneBuildingCache;
- (id)initWithImageCache:docInfos:;
- (id)imageForScanDataDelegateIdentifier:;
- (void)setDocInfos:;
- (id)docInfos;
- (id)docInfoForScanDataDelegate:;
- (void)deleteCacheImages;
@end
