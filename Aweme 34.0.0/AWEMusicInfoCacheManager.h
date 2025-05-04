@interface AWEMusicInfoCacheManager : NSObject
@property (nonatomic) NSMutableDictionary musicCollectStatusCache;
@property (nonatomic) NSMutableDictionary lunaSongAppendPlaylistStatusCache;
- (void)musicCollectedStatusChanged:;
- (id)musicCollectStatusForMusicID:;
- (id)lunaAppendPlaylistStatusForTrackID:;
- (void)updateAppendPlaylistButtonCollected:;
- (id)musicCollectStatusCache;
- (id)lunaSongAppendPlaylistStatusCache;
- (void)setMusicCollectStatusCache:;
- (void)setLunaSongAppendPlaylistStatusCache:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
