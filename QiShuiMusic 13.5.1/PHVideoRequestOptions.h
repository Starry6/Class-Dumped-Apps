@interface PHVideoRequestOptions : NSObject
@property (nonatomic) @? progressHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL streamingAllowed;
@property (nonatomic) q streamingVideoIntent;
@property (nonatomic) BOOL videoComplementAllowed;
@property (nonatomic) BOOL allowMediumHighQuality;
@property (nonatomic) {CGSize=dd} targetSize;
@property (nonatomic) q contentMode;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice;
@property (nonatomic) BOOL liveRenderVideoIfNeeded;
@property (nonatomic) BOOL liveRenderAndOnDemandRenderVideoConcurrently;
@property (nonatomic) NSObject<OS_dispatch_queue> resultHandlerQueue;
@property (nonatomic) q downloadIntent;
@property (nonatomic) q downloadPriority;
@property (nonatomic) {?={?=qiIq}{?=qiIq}} timeRange;
@property (nonatomic) BOOL networkAccessAllowed;
@property (nonatomic) q version;
@property (nonatomic) q deliveryMode;
@property (nonatomic) @? progressHandler;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)timeRange;
- (id)init;
- (void)setDownloadIntent:;
- (long long)contentMode;
- (void)setVersion:;
- (long long)version;
- (void)setTargetSize:;
- (long long)downloadPriority;
- (void)setTimeRange:;
- (long long)downloadIntent;
- (BOOL)isNetworkAccessAllowed;
- (id)targetSize;
- (void).cxx_destruct;
- (void)setDownloadPriority:;
- (id)description;
- (void)setNetworkAccessAllowed:;
- (void)setContentMode:;
- (long long)deliveryMode;
- (void)setResultHandlerQueue:;
- (BOOL)isSynchronous;
- (void)setDeliveryMode:;
- (id)copyWithZone:;
- (id)resultHandlerQueue;
- (BOOL)isCurrentVersion;
- (BOOL)liveRenderAndOnDemandRenderVideoConcurrently;
- (id)renderResultHandlerQueue;
- (BOOL)liveRenderVideoIfNeeded;
- (BOOL)restrictToPlayableOnCurrentDevice;
- (BOOL)isMediumHighQualityAllowed;
- (BOOL)isStreamingAllowed;
- (BOOL)hasValidTimeRange;
- (void)setStreamingAllowed:;
- (long long)streamingVideoIntent;
- (void)setStreamingVideoIntent:;
- (BOOL)isVideoComplementAllowed;
- (void)setVideoComplementAllowed:;
- (void)setRestrictToPlayableOnCurrentDevice:;
- (void)setLiveRenderVideoIfNeeded:;
- (void)setAllowMediumHighQuality:;
- (void)setLiveRenderAndOnDemandRenderVideoConcurrently:;
@end
