@interface IESIMALMVideoPreloadInfoCache : NSObject
@property (nonatomic) NSCache innerCache;
@property (nonatomic) NSMutableDictionary preloadedSizeCache;
@property (nonatomic) NSMutableArray alreadyCompleteTasks;
@property (nonatomic) NSCache modernPreloadedSizeCache;
- (id)alreadyCompleteTasks;
- (double)alreadyPreloadedSizeForTaskID:;
- (long long)bitrateForVideoID:;
- (BOOL)checkAreadyCompleteAndRemoveTaskID:;
- (id)innerCache;
- (void)markAlreadyCompletionWithTaskID:;
- (id)mediaSizeForVideoID:;
- (id)modernPreloadedSizeCache;
- (id)preloadedSizeCache;
- (id)preloadedSizeDic;
- (id)preloadedSizeForVideoID:;
- (void)saveAlreadyPreloadedSize:forTaskID:;
- (void)saveBitrate:urlString:forVideoID:;
- (void)savePreloadSize:mediaSize:urlString:forVideoID:;
- (void)setAlreadyCompleteTasks:;
- (void)setInnerCache:;
- (void)setModernPreloadedSizeCache:;
- (void)setPreloadedSizeCache:;
- (id)urlStringForVideoID:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
