@interface IESIMSysPlayerWrapper : NSObject
@property (nonatomic) AWEVideoPlayerController player;
@property (nonatomic) q playbackState;
@property (nonatomic) q actionState;
@property (nonatomic) NSString videoID;
@property (nonatomic) NSArray videoPlayURLs;
@property (nonatomic) BOOL isURLChanged;
@property (nonatomic) NSURL currentURL;
@property (nonatomic) NSDictionary metaformateDic;
@property (nonatomic) BOOL isReserved;
@property (nonatomic) double playTimeBeforeReserved;
@property (nonatomic) UIView view;
@property (nonatomic) q rotateType;
@property (nonatomic) q scalingMode;
@property (nonatomic) Q renderType;
@property (nonatomic) Q imageScaleType;
@property (nonatomic) q imageLayoutType;
@property (nonatomic) Q enhancementType;
@property (nonatomic) Q netWorkType;
@property (nonatomic) NSString urlKey;
@property (nonatomic) BOOL enableVideoOutput;
@property (nonatomic) NSString currPlayURL;
@property (nonatomic) AVURLAsset currPlayAsset;
@property (nonatomic) double currTimeScale;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL mute;
@property (nonatomic) double volume;
@property (nonatomic) q networkTime;
@property (nonatomic) BOOL truncateTailWhenRepeated;
@property (nonatomic) <IESIMVideoPlayerDelegate> deleagte;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL bufferEnded;
@property (nonatomic) BOOL playingWithCache;
@property (nonatomic) q cacheSize;
@property (nonatomic) q currCacheSize;
@property (nonatomic) q videoMediaSize;
@property (nonatomic) BOOL ignoreAudioInterruption;
@property (nonatomic) double playbackRate;
@property (nonatomic) BOOL supportsReserveIfNeeded;
@property (nonatomic) @? cacheSizeBlock;
@property (nonatomic) BOOL isDashSource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) {CGSize=dd} videoOriginSize;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableBytevc1Decode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (nonatomic) BOOL playByRestored;
@property (nonatomic) Q sessionId;
@property (nonatomic) BOOL enableNNSR;
@property (nonatomic) BOOL enable720pNNSR;
@property (nonatomic) BOOL enableBoundNNSR;
- (BOOL)enableBoundNNSR;
- (void)setLoadControl:;
- (void)setNetWorkType:;
- (void)setNetworkTime:;
- (void)setPlayerResolution:completion:;
- (void)setResourceLoaderErrorStrategy:;
- (void)setSRLongLower:;
- (id)videoOriginSize;
- (unsigned long long)enhancementType;
- (void)failToRetrieveMetaForURL:error:;
- (long long)imageLayoutType;
- (double)playFPS;
- (void)setBufferEnded:;
- (void)setSRLongUpper:;
- (void)addVideoPlayWithURL:forTimes:;
- (BOOL)bufferEnded;
- (id)cacheSizeBlock;
- (long long)currCacheSize;
- (id)currPlayAsset;
- (id)currPlayURL;
- (double)currPlayableDuration;
- (float)currPlaybackRate;
- (double)currPlaybackTime;
- (double)currTimeScale;
- (id)deleagte;
- (void)didFinishVideoDataDownloadForURL:;
- (void)didReceiveMetaForURL:mimeType:cacheSize:fileSize:;
- (BOOL)enable720pNNSR;
- (BOOL)enableBytevc1Decode;
- (BOOL)enableH256Decode;
- (BOOL)enableHardDecode;
- (BOOL)enableNNSR;
- (BOOL)enableVideoOutput;
- (id)firstFrameTimestamp;
- (void)hold_stop;
- (BOOL)ignoreAudioInterruption;
- (unsigned long long)imageScaleType;
- (id)initWithVideoID:andPlayURLs:;
- (id)initWithVideoID:andPlayURLs:andUrlKey:;
- (BOOL)isDashSource;
- (BOOL)isURLChanged;
- (id)itemTrack;
- (id)metaformateDic;
- (unsigned long long)netWorkType;
- (void)noVideoDataToDownloadForURL:;
- (BOOL)ownPlayerPlayWithURLs;
- (double)playBitrate;
- (BOOL)playByRestored;
- (double)playTimeBeforeReserved;
- (void)playbackDidFailForURL:error:;
- (void)playbackDidFailWithErrorDict:;
- (void)playbackDidFinishForURL:;
- (void)playbackStateDidChangeForURL:oldState:newState:;
- (id)playerConsumedBytes;
- (BOOL)playingWithCache;
- (void)readyForDisplayForURL:metaFormat:;
- (void)removeTimeObserver;
- (unsigned long long)renderType;
- (void)resetDecryptionKey:;
- (void)resetEncryptedDecryptionKey:;
- (void)resetLocalVideoURLPath:;
- (void)resetVideoID:andPlayURLs:;
- (void)resetVideoID:andPlayURLs:urlKey:;
- (void)resetVideoID:andPlayURLs:urlKey:fileCs:;
- (long long)rotateType;
- (void)setCacheDuration:;
- (void)setCacheSizeBlock:;
- (void)setCurrCacheSize:;
- (void)setCustomLog:;
- (void)setDeleagte:;
- (void)setEnable720pNNSR:;
- (void)setEnableBoundNNSR:;
- (void)setEnableBytevc1Decode:;
- (void)setEnableH256Decode:;
- (void)setEnableHardDecode:;
- (void)setEnableNNSR:;
- (void)setEnablePlayerRange:prepareMaxCacheMs:httpAutoRangeOffsetKB:;
- (void)setEnableVideoOutput:;
- (void)setEnhancementType:;
- (void)setFpsThresholdNNSR:;
- (void)setIgnoreAudioInterruption:;
- (void)setImageLayoutType:;
- (void)setImageScaleType:;
- (void)setIsReserved:;
- (void)setIsURLChanged:;
- (void)setMetaformateDic:;
- (void)setOwnPlayerPlayWithURLs:;
- (void)setPlayByRestored:;
- (void)setPlayTimeBeforeReserved:;
- (void)setPlayerAudioDevice:;
- (void)setPlayerAudioEffectSrcLoudness:;
- (void)setPlayerAudioEffectSrcPeak:;
- (void)setPlayerBashVideoEnabled:;
- (void)setPlayerChangePlaybackSpeedEnabled:;
- (void)setPlayerCheckHijackEnabled:;
- (void)setPlayerDASHVideoProperBitrate:;
- (void)setPlayerDashVideoHosts:;
- (void)setPlayerDashVideoInfo:;
- (void)setPlayerEnableVtbDropRASL:;
- (void)setPlayerMDLCacheModel:;
- (void)setPlayerPlaybackSpeed:;
- (void)setPlayerSeekEndEnabled:;
- (void)setPlayerSubTag:;
- (void)setPlayerTag:;
- (void)setPlayingWithCache:;
- (void)setPreferSpdlForHDR:;
- (void)setRotateType:;
- (void)setSRShortLower:;
- (void)setSRShortUpper:;
- (void)setSetSpdlForHDR:;
- (void)setStartPlayTime:;
- (void)setSupportsReserveIfNeeded:;
- (void)setTTVideoEngineNormalClockType:;
- (void)setTTVideoEngineRenderEngine:;
- (void)setTruncateTailWhenRepeated:;
- (void)setUpMemoryOptimize:;
- (void)setVideoMediaSize:;
- (void)setVideoPlayURLs:;
- (void)setVtbFlushKeepSesssion:;
- (BOOL)supportsReserveIfNeeded;
- (BOOL)truncateTailWhenRepeated;
- (void)updatePlayerOptions:;
- (double)videoFPS;
- (long long)videoMediaSize;
- (id)videoPlayURLs;
- (long long)videoSRHeight;
- (long long)videoSRWidth;
- (BOOL)mute;
- (void)setCacheSize:;
- (long long)cacheSize;
- (void)setSessionId:;
- (double)playbackRate;
- (unsigned long long)sessionId;
- (double)volume;
- (void)dealloc;
- (long long)playbackState;
- (void)setPlaybackState:;
- (void)play;
- (void)setVolume:;
- (void)setPlaybackRate:;
- (long long)videoWidth;
- (void)stop;
- (void)setMute:;
- (id)view;
- (void)setRenderType:;
- (id)player;
- (double)videoDuration;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)pause;
- (void)reserve;
- (long long)videoHeight;
- (BOOL)useCache;
- (void)setUseCache:;
- (BOOL)repeated;
- (void)setRepeated:;
- (void)prepareToPlay;
- (unsigned long long)playerType;
- (long long)actionState;
- (void)setActionState:;
- (long long)scalingMode;
- (void)setScalingMode:;
- (void)addPeriodicTimeObserverForInterval:queue:usingBlock:;
- (void)addBoundaryTimeObserverForTimes:queue:usingBlock:;
- (id)accessLog;
- (long long)qualityType;
- (id)videoID;
- (void)setVideoID:;
- (id)currentPixelBuffer;
- (id)urlKey;
- (void)setUrlKey:;
- (BOOL)isReserved;
- (id)currentURL;
- (void)setCurrentURL:;
- (long long)networkTime;
- (void)seekToTime:completion:;
+ (BOOL)forcePlayWithHTTPS;
+ (id)forcePlayWithHTTPSUrls:;
+ (void)setAVStackEnable:;
+ (void)setAudioLatencyQueueByTimeEnable:;
+ (void)setDecreaseVtbStackSize:;
+ (void)setEnterBufferingDirectlyEnable:;
+ (void)setForcePlayWithHTTPS:;
+ (void)setPlayerAudioEffectEnable:;
+ (void)setPlayerAudioEffectPredelay:;
+ (void)setPlayerAudioEffectPregain:;
+ (void)setPlayerAudioEffectRatio:;
+ (void)setPlayerAudioEffectTargetLoudness:;
+ (void)setPlayerAudioEffectThreshold:;
+ (void)setPlayerAudioEffectType:;
+ (void)setPlayerGlobalThreadPoolOptions:;
+ (void)setPlayerIdleTimerAuto:;
+ (void)setPostPrepareMsgEnable:;
+ (void)setSkipBufferLimit:;
+ (void)setUpBackupDNSParserWaitTime:;
+ (void)setUpCacheLifeTimeForDisableAutoTrimFile:;
+ (void)setUpDNSTTL:;
+ (void)setUpFirstDNSParseType:backup:;
+ (void)setVideoEndIsAllEofEnable:;
+ (void)setVideoEngineLocalServerOptions:;
+ (void)updatePlayerGlobalThreadPoolOptions:;
+ (void)updateVideoEngineLocalServerOptions:;
+ (void)setPlayerOptions:;
@end
