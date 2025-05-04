@interface AWEIMAlbumAssetCache : NSObject
@property (nonatomic) NSMutableDictionary assetCacheHash;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
- (id)assetCacheHash;
- (void)setCacheResult:forKey:;
- (void)setAssetCacheHash:;
- (id)loadCollectionWithKey:;
- (id)init;
- (id)workQueue;
- (void)setWorkQueue:;
- (void)clear;
- (void).cxx_destruct;
@end
