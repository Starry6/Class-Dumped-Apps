@interface TTVideoEnginePlayVidSource : TTVideoEnginePlayBaseSource
@property (nonatomic) TTVideoEngineInfoFetcher infoFetcher;
@property (nonatomic) Q currentVideoResolution;
@property (nonatomic) Q currentAudioResolution;
@property (nonatomic) NSMutableArray resolutionIndexs;
@property (nonatomic) NSString usingUrl;
@property (nonatomic) @? fetchCall;
@property (nonatomic) NSString apiString;
@property (nonatomic) NSString videoId;
@property (nonatomic) NSString fallbackApi;
@property (nonatomic) NSString keyseed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInfoFetcher:;
- (id)spade_a;
- (id)urlInfoForResolution:mediaType:;
- (long long)currentUrlIndex;
- (id)keyseed;
- (void)setFallbackApi:;
- (void)_resetResolutionIndexs;
- (id)_urlInfo;
- (id)aiBarrageUrl;
- (id)allUrlsForResolution:;
- (id)apiString;
- (unsigned long long)autoResolution;
- (id)barrageMaskUrl;
- (long long)bitrateForDashSourceOfType:;
- (id)checkInfo:;
- (unsigned long long)currentAudioResolution;
- (id)currentUrl;
- (unsigned long long)currentVideoResolution;
- (id)decodingMode;
- (id)fallbackApi;
- (id)fetchCall;
- (void)fetchUrlWithApiString:auth:params:apiVersion:result:;
- (id)getDynamicType;
- (double)getValueFloat:;
- (long long)getValueInt:;
- (id)getValueStr:;
- (id)getVideoList;
- (id)infoFetcher;
- (void)infoFetcherDidCancel;
- (void)infoFetcherDidFinish:;
- (void)infoFetcherDidFinish:error:;
- (void)infoFetcherFinishWithDNSError:;
- (void)infoFetcherShouldRetry:;
- (BOOL)isHaveSpadea;
- (BOOL)isMainUrl;
- (BOOL)isMbRefactor;
- (BOOL)isSingleUrl;
- (id)mediaFileHashOfType:;
- (id)mediaFileKey;
- (id)preloadItem;
- (id)proxyUrlExtraInfo;
- (id)refString;
- (id)resolutionIndexs;
- (long long)retryStrategyForRetryCount:;
- (void)setApiString:;
- (void)setCurrentAudioResolution:;
- (void)setCurrentVideoResolution:;
- (void)setFetchCall:;
- (void)setKeyseed:;
- (void)setParamMap:;
- (void)setResolutionIndexs:;
- (void)setUsingUrl:;
- (BOOL)skipToNext;
- (BOOL)supportBash;
- (BOOL)supportDash;
- (BOOL)supportHLS;
- (BOOL)supportHLSSeamlessSwitch;
- (BOOL)supportMP4;
- (id)supportQualityDesc;
- (id)supportResolutions;
- (BOOL)supportSSL;
- (void)updateResolution:mediaType:;
- (id)urlForResolution:;
- (id)urlInfoForResolution:mediaType:params:;
- (id)usingUrl;
- (id)usingUrlInfo;
- (long long)videoModelVersion;
- (long long)videoSizeOfType:;
- (BOOL)validate;
- (id)init;
- (BOOL)hasVideo;
- (id)deepCopy;
- (void).cxx_destruct;
- (id)videoId;
- (void)setVideoId:;
- (BOOL)isEqual:;
- (BOOL)canFetch;
- (unsigned long long)currentResolution;
- (void)cancelFetch;
@end
