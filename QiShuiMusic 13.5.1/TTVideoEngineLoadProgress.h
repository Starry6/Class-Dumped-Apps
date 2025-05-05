@interface TTVideoEngineLoadProgress : NSObject
@property (nonatomic) NSString videoId;
@property (nonatomic) q taskType;
@property (nonatomic) NSArray cacheInfos;
@property (nonatomic) q cacheState;
@property (nonatomic) BOOL preloadComplete;
@property (nonatomic) BOOL cacheEnd;
- (id)cacheInfos;
- (id)getCahceInfo:;
- (long long)getTotalCacheSize;
- (long long)getTotalMediaSize;
- (BOOL)isCacheEnd;
- (BOOL)isPreloadComplete;
- (void)receiveError:error:;
- (void)setCacheInfos:;
- (long long)taskType;
- (void)setUp:;
- (void).cxx_destruct;
- (id)videoId;
- (void)setVideoId:;
- (id)copyWithZone:;
- (void)setTaskType:;
- (long long)cacheState;
- (id)itemKey;
@end
