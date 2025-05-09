@interface TTVideoEnginePreloaderURLItem : NSObject
@property (nonatomic) NSMutableDictionary customHeaders;
@property (nonatomic) NSString key;
@property (nonatomic) NSArray urls;
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString cacheFilePath;
@property (nonatomic) q preloadSize;
@property (nonatomic) q priorityLevel;
@property (nonatomic) NSString tag;
@property (nonatomic) NSString subTag;
@property (nonatomic) NSString groupId;
@property (nonatomic) q urlExpiredTime;
@property (nonatomic) q preloadFooterSize;
@property (nonatomic) @? preloadEnd;
@property (nonatomic) @? preloadCanceled;
@property (nonatomic) @? preloadDidStart;
@property (nonatomic) @? preloadProgress;
- (void)setPreloadSize:;
- (id)preloadCanceled;
- (id)preloadDidStart;
- (id)preloadProgress;
- (id)preloadEnd;
- (long long)preloadFooterSize;
- (long long)preloadSize;
- (void)setCustomHeaderValue:forKey:;
- (void)setPreloadCanceled:;
- (void)setPreloadDidStart:;
- (void)setPreloadEnd:;
- (void)setPreloadFooterSize:;
- (void)setPreloadProgress:;
- (void)setSubTag:;
- (void)setUrlExpiredTime:;
- (id)subTag;
- (long long)urlExpiredTime;
- (id)tag;
- (id)init;
- (id)urls;
- (id)cacheFilePath;
- (id)key;
- (void)setUrls:;
- (void)setKey:;
- (void)setTag:;
- (id)groupId;
- (void).cxx_destruct;
- (id)videoId;
- (void)setVideoId:;
- (void)setGroupId:;
- (void)setPriorityLevel:;
- (long long)priorityLevel;
- (id)customHeaders;
- (void)setCustomHeaders:;
- (void)setCacheFilePath:;
+ (id)urlItem:videoId:preloadSize:urls:;
+ (id)urlItemWitFilePath:videoId:urls:preloadSize:;
+ (id)urlItemWithKey:videoId:urls:preloadSize:;
@end
