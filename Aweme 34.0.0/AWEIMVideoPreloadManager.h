@interface AWEIMVideoPreloadManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> processQueue;
@property (nonatomic) NSMutableSet preloadCacheSet;
@property (nonatomic) NSObject<OS_dispatch_semaphore> lock;
@property (nonatomic) <IESIMStorageProtocol> captionStore;
- (void)setProcessQueue:;
- (BOOL)isHitVideoEncodeOptWithMessageType:;
- (void)requestVideoPlayInfoWithMessage:completion:;
- (id)convertTosKeyToVideoId:;
- (void)fetchLivePhotoVideo:completion:;
- (id)videoCaptionWithMessage:;
- (void)preloadWithMessage:onCompletion:;
- (void)p_downloadLivePhotoVideo:message:completion:;
- (void)trackEvent:duration:;
- (void)p_preloadVideoWithTosKey:url:onCompletion:;
- (void)p_fetchVideoUrlForMessage:completion:;
- (id)preloadCacheSet;
- (void)p_fetchWatchOnceVideoUrlForMessage:completion:;
- (id)captionStore;
- (void)setPreloadCacheSet:;
- (void)setCaptionStore:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
- (id)processQueue;
+ (id)sharedInstance;
@end
