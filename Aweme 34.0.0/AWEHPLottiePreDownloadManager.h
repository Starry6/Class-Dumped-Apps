@interface AWEHPLottiePreDownloadManager : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSMutableDictionary preloadStatusDict;
@property (nonatomic) NSMutableDictionary preloadFailDict;
@property (nonatomic) NSMutableDictionary preloadURLsDict;
- (void)setMmkv:;
- (id)mmkv;
- (void)updateLottieCacheChanged:;
- (id)preloadStatusDict;
- (void)updateLottieURLsWithParams:;
- (id)preloadFailDict;
- (id)preloadURLsDict;
- (void)deleteLottieURLsWithComponentID:;
- (void)setPreloadStatusDict:;
- (void)setPreloadFailDict:;
- (void)setPreloadURLsDict:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)appDidEnterBackground;
@end
