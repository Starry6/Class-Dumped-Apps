@interface AWEIMVideoPreloadManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> processQueue;
@property (nonatomic) NSMutableSet preloadCacheSet;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) <IESIMMMKVStorageProtocol> captionStore;
- (id)preloadCacheSet;
- (id)captionStore;
- (id)convertTosKeyToVideoId:;
- (void)p_fetchVideoUrlForMessage:completion:;
- (void)p_preloadVideoWithTosKey:url:onCompletion:;
- (void)preloadWithMessage:onCompletion:;
- (void)requestVideoPlayInfoWithMessage:completion:;
- (void)setCaptionStore:;
- (void)setPreloadCacheSet:;
- (void)setProcessQueue:;
- (void)trackEvent:duration:;
- (id)videoCaptionWithMessage:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
- (id)processQueue;
+ (id)sharedInstance;
@end
