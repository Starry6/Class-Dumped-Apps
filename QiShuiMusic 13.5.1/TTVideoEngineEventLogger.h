@interface TTVideoEngineEventLogger : NSObject
@property (nonatomic) TTVideoEngineEvent event;
@property (nonatomic) TTVideoEngineEventBase eventBase;
@property (nonatomic) TTVideoEngineNetworkPortraitData PortraitData;
@property (nonatomic) <TTVideoEngineEventOneEventProtocol> eventOneEvent;
@property (nonatomic) <TTVideoEngineEventOneErrorProtocol> eventOneError;
@property (nonatomic) <TTVideoEngineEventOneOperaProtocol> eventOneOpera;
@property (nonatomic) <TTVideoEngineEventOneOutSyncProtocol> eventOneOutsync;
@property (nonatomic) <TTVideoEngineEventOneAVRenderCheckProtocol> eventOneAVRenderCheck;
@property (nonatomic) <TTVideoEngineEventNetworkSpeedPredictorSampleProtocol> eventPredictorSample;
@property (nonatomic) BOOL leaveWithoutPlay;
@property (nonatomic) q exitTime;
@property (nonatomic) NSMutableArray retryFetchErrorInfo;
@property (nonatomic) NSMutableArray firstDNSErrorInfo;
@property (nonatomic) NSMutableArray errorInfo;
@property (nonatomic) NSArray urlArray;
@property (nonatomic) NSMutableArray mGearInfoList;
@property (nonatomic) q stallStartTs;
@property (nonatomic) q pauseStartTs;
@property (nonatomic) q seekStartTs;
@property (nonatomic) NSString apiString;
@property (nonatomic) q apiver;
@property (nonatomic) NSString auth;
@property (nonatomic) NSMutableArray cpuUsages;
@property (nonatomic) NSMutableArray memUsages;
@property (nonatomic) NSString logInfo;
@property (nonatomic) q dnsMode;
@property (nonatomic) q mAccumVPS;
@property (nonatomic) q mAccumVDS;
@property (nonatomic) q mEngineLoopVDS;
@property (nonatomic) NSString source_type;
@property (nonatomic) q mEnableLoadControl;
@property (nonatomic) q mEnableNetworkTimeout;
@property (nonatomic) q mNetworkTimeout;
@property (nonatomic) q mBufferTimeout;
@property (nonatomic) q mEnableBufferingDirectly;
@property (nonatomic) BOOL mEnableBufferingMilliSeconds;
@property (nonatomic) q mBufferEndMilliSeconds;
@property (nonatomic) q mBufferEndSeconds;
@property (nonatomic) q mEnableVolumeBalance;
@property (nonatomic) q mVolumeBalanceType;
@property (nonatomic) q mEnableAutoRange;
@property (nonatomic) q mImageScaleType;
@property (nonatomic) q mEnableAbr;
@property (nonatomic) q mEnableHttps;
@property (nonatomic) q mEnableHijackRetry;
@property (nonatomic) q mEnableFallbackApiMDLRetry;
@property (nonatomic) q mEnableSkipFindStream;
@property (nonatomic) q mEnableAsyncPrepare;
@property (nonatomic) q mEnableLazySeek;
@property (nonatomic) q mEnableFormaterKeepAlive;
@property (nonatomic) q mDisableShortSeek;
@property (nonatomic) q mPrefNearSample;
@property (nonatomic) q mEnableReuseSocket;
@property (nonatomic) q mWidth;
@property (nonatomic) q mHeight;
@property (nonatomic) NSMutableDictionary mPlayparam;
@property (nonatomic) NSString mInitialURL;
@property (nonatomic) q mEnableMdl;
@property (nonatomic) q mVideoPreloadSize;
@property (nonatomic) q mDashVideoPreloadSize;
@property (nonatomic) q mDashAudioPreloadSize;
@property (nonatomic) q leaveBlockT;
@property (nonatomic) q loggerState;
@property (nonatomic) q logVersion;
@property (nonatomic) NSMutableDictionary metricsInfo;
@property (nonatomic) BOOL mAVOutSyncing;
@property (nonatomic) Q mLastRebufT;
@property (nonatomic) Q mLastSeekT;
@property (nonatomic) q errorRetryBeginTime;
@property (nonatomic) q errorRetryCurPos;
@property (nonatomic) q errorRetryErrorCode;
@property (nonatomic) q errorRetryStrategy;
@property (nonatomic) q mEnableOutletDropLimit;
@property (nonatomic) BOOL mIsEngineReuse;
@property (nonatomic) NSMutableDictionary mFeatures;
@property (nonatomic) NSString mMessage;
@property (nonatomic) NSMutableArray mMDLRetryInfo;
@property (nonatomic) NSString mFromEnginePool;
@property (nonatomic) q mEnableMetalViewDoubleBuffer;
@property (nonatomic) NSString headerInfo;
@property (nonatomic) q mCurDashAudioInfoId;
@property (nonatomic) BOOL mUrlMatchCondition;
@property (nonatomic) TTVideoEngineContentDataReporter mContentReporter;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSInteger mNetLevelIntervalMs;
@property (nonatomic) NSInteger mNetLevelMaxCount;
@property (nonatomic) NSInteger mNetMinDataSize;
@property (nonatomic) NSString mVarsToParse;
@property (nonatomic) double mLastTargetBitrate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <TTVideoEngineEventLoggerDelegate> delegate;
@property (nonatomic) BOOL performancePointSwitch;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) NSString vid;
@property (nonatomic) NSArray vu;
@property (nonatomic) q loopCount;
@property (nonatomic) BOOL isLooping;
@property (nonatomic) q loopway;
@property (nonatomic) double accumulatedStalledTime;
@property (nonatomic) q seekCount;
- (id)PortraitData;
- (void)_logFirstError:;
- (void)_movieStallEnd:;
- (void)_recordExitTime;
- (void)avOutsyncStart:;
- (void)beginToParseDNS;
- (long long)dnsMode;
- (id)eventOneOutsync;
- (id)logInfo;
- (id)mFromEnginePool;
- (long long)mImageScaleType;
- (int)mNetMinDataSize;
- (long long)mPrefNearSample;
- (void)setDrmTokenUrl:;
- (void)setMInitialURL:;
- (void)setPlayHeaders:;
- (void)setReuseSocket:;
- (void)setVid:;
- (id)vid;
- (void)firstDNSFailed:;
- (long long)loopway;
- (long long)mEnableLazySeek;
- (long long)mNetworkTimeout;
- (void)networkListener;
- (void)onAVInterlaced:;
- (void)playbackFinish:;
- (void)setCheckHijack:;
- (void)setDynamicType:;
- (void)setInitialHost:;
- (void)setLeaveBlockT:;
- (void)setLoggerState:;
- (void)setMLastRebufT:;
- (void)setMetricsInfo:;
- (void)setSeekStartTs:;
- (void)setSource_type:;
- (void)setVideoOutFPS:;
- (void)_avOutsyncEnd:endType:;
- (void)_endSeek:isSeekInCache:;
- (void)_noVARenderEnd:noRenderType:endType:;
- (void)accumulateSize;
- (double)accumulatedStalledTime;
- (void)addCpuUsagesPoint:;
- (void)addFeature:value:;
- (void)addMemUsagesPoint:;
- (void)addSubtitleSwitchTime;
- (id)apiString;
- (long long)apiver;
- (void)avOutsyncEnd:;
- (void)backgroundStartPlay;
- (void)beginLoadDataWhenBufferEmpty;
- (void)beginToPlayVideo:;
- (void)closeVideo;
- (void)contentReporterStartTaskIfNeeded;
- (id)cpuUsages;
- (void)crosstalkHappen:infoList:;
- (void)detectPrivateFiledsWithHeader:;
- (void)endLoadDataWhenBufferEmpty;
- (void)engineState:;
- (id)errorInfo;
- (long long)errorRetryBeginTime;
- (long long)errorRetryCurPos;
- (long long)errorRetryErrorCode;
- (long long)errorRetryStrategy;
- (id)eventBase;
- (id)eventOneAVRenderCheck;
- (id)eventOneError;
- (id)eventOneEvent;
- (id)eventOneOpera;
- (id)eventPredictorSample;
- (void)fetchedVideoURL:error:apiVersion:;
- (void)finishReason:;
- (id)firstDNSErrorInfo;
- (id)firstFrameTimestamp;
- (id)getEventBase;
- (long long)getMovieStalledReason;
- (id)getTraceId;
- (id)headerInfo;
- (void)initContentReporterIfNeeded:;
- (void)initEvents;
- (void)initPlay:;
- (long long)leaveBlockT;
- (BOOL)leaveWithoutPlay;
- (void)logAudioBitrate:;
- (void)logBitrate:;
- (void)logCodecName:video:;
- (void)logCodecNameId:video:;
- (void)logCurPos:;
- (void)logFormatType:;
- (void)logPlayerInfo:;
- (void)logWatchDuration:;
- (long long)loggerState;
- (void)loggerVideoProcessorEffectParam:;
- (void)loopAgain;
- (BOOL)mAVOutSyncing;
- (long long)mAccumVDS;
- (long long)mAccumVPS;
- (long long)mBufferEndMilliSeconds;
- (long long)mBufferEndSeconds;
- (long long)mBufferTimeout;
- (id)mContentReporter;
- (long long)mCurDashAudioInfoId;
- (long long)mDashAudioPreloadSize;
- (long long)mDashVideoPreloadSize;
- (long long)mDisableShortSeek;
- (long long)mEnableAbr;
- (long long)mEnableAsyncPrepare;
- (long long)mEnableAutoRange;
- (long long)mEnableBufferingDirectly;
- (BOOL)mEnableBufferingMilliSeconds;
- (long long)mEnableFallbackApiMDLRetry;
- (long long)mEnableFormaterKeepAlive;
- (long long)mEnableHijackRetry;
- (long long)mEnableHttps;
- (long long)mEnableLoadControl;
- (long long)mEnableMdl;
- (long long)mEnableMetalViewDoubleBuffer;
- (long long)mEnableNetworkTimeout;
- (long long)mEnableOutletDropLimit;
- (long long)mEnableReuseSocket;
- (long long)mEnableSkipFindStream;
- (long long)mEnableVolumeBalance;
- (long long)mEngineLoopVDS;
- (id)mFeatures;
- (id)mGearInfoList;
- (id)mInitialURL;
- (BOOL)mIsEngineReuse;
- (unsigned long long)mLastRebufT;
- (unsigned long long)mLastSeekT;
- (double)mLastTargetBitrate;
- (id)mMDLRetryInfo;
- (int)mNetLevelIntervalMs;
- (int)mNetLevelMaxCount;
- (id)mPlayparam;
- (BOOL)mUrlMatchCondition;
- (id)mVarsToParse;
- (long long)mVideoPreloadSize;
- (long long)mVolumeBalanceType;
- (void)mdlRetryResult:fileHash:error:;
- (id)memUsages;
- (id)metricsInfo;
- (void)movieBufferDidReachEnd;
- (void)movieFinishError:currentPlaybackTime:apiver:;
- (void)moviePlayRetryEnd;
- (void)moviePlayRetryStartWithError:strategy:curPos:;
- (void)moviePlayRetryWithError:strategy:apiver:;
- (void)moviePreStall:;
- (void)movieStalledAfterFirstScreen:curPos:;
- (void)needRetryToFetchVideoURL:apiVersion:;
- (void)noVARenderEnd:noRenderType:;
- (void)noVARenderStart:noRenderType:;
- (void)onVideoInfoIdChanged:;
- (void)outputRouteChanged:;
- (void)parseUrlLogID;
- (long long)pauseStartTs;
- (BOOL)performancePointSwitch;
- (void)playerPause;
- (void)playerPlay;
- (void)playerViewBoundsChange:;
- (void)prepareBeforePlay;
- (void)proxyUrl:;
- (void)recordBrightnessInfo;
- (void)recordCurrentHeadsetInfo;
- (void)recordExitReason:isStart:;
- (void)recordFirstFrameMetrics:;
- (void)recordHeadsetInfoWithConnected:bluetooth:;
- (void)renderSeekComplete:;
- (id)retryFetchErrorInfo;
- (void)seekCompleted;
- (long long)seekCount;
- (long long)seekStartTs;
- (void)seekToTime:afterSeekTime:cachedDuration:switchingResolution:;
- (void)sendEvent;
- (void)setAVSyncStartEnable:;
- (void)setAbrInfo:;
- (void)setAccumulatedStalledTime:;
- (void)setApiString:;
- (void)setApiver:;
- (void)setAudioDropCnt:;
- (void)setCpuUsages:;
- (void)setCurrentDefinition:lastDefinition:;
- (void)setCurrentQualityDesc:;
- (void)setCustomInfo:value:;
- (void)setCustomStr:;
- (void)setDNSMode:;
- (void)setDNSParseTime:;
- (void)setDashAudioCacheSize:;
- (void)setDashVideoCacheSize:;
- (void)setDisableAccurateStart:;
- (void)setDnsMode:;
- (void)setDrmType:;
- (void)setEnableBash:;
- (void)setEnableBoe:;
- (void)setEnableNNSR:;
- (void)setEncryptKey:;
- (void)setErrorInfo:;
- (void)setErrorRetryBeginTime:;
- (void)setErrorRetryCurPos:;
- (void)setErrorRetryErrorCode:;
- (void)setErrorRetryStrategy:;
- (void)setEventBase:;
- (void)setEventOneAVRenderCheck:;
- (void)setEventOneError:;
- (void)setEventOneEvent:;
- (void)setEventOneOpera:;
- (void)setEventOneOutsync:;
- (void)setEventPredictorSample:;
- (void)setFirstDNSErrorInfo:;
- (void)setFirstPlayFlag:;
- (void)setFloatOption:value:;
- (void)setHeaderInfo:;
- (void)setHijackCode:;
- (void)setInitalURL:;
- (void)setInitialQuality:;
- (void)setInitialQualityType:;
- (void)setInitialResolution:;
- (void)setInt64Option:value:;
- (void)setIntOption:value:;
- (void)setLeaveWithoutPlay:;
- (void)setLogInfo:;
- (void)setLoopWay:;
- (void)setLoopway:;
- (void)setMAVOutSyncing:;
- (void)setMAccumVDS:;
- (void)setMAccumVPS:;
- (void)setMBufferEndMilliSeconds:;
- (void)setMBufferEndSeconds:;
- (void)setMBufferTimeout:;
- (void)setMContentReporter:;
- (void)setMCurDashAudioInfoId:;
- (void)setMDashAudioPreloadSize:;
- (void)setMDashVideoPreloadSize:;
- (void)setMDisableShortSeek:;
- (void)setMEnableAbr:;
- (void)setMEnableAsyncPrepare:;
- (void)setMEnableAutoRange:;
- (void)setMEnableBufferingDirectly:;
- (void)setMEnableBufferingMilliSeconds:;
- (void)setMEnableFallbackApiMDLRetry:;
- (void)setMEnableFormaterKeepAlive:;
- (void)setMEnableHijackRetry:;
- (void)setMEnableHttps:;
- (void)setMEnableLazySeek:;
- (void)setMEnableLoadControl:;
- (void)setMEnableMdl:;
- (void)setMEnableMetalViewDoubleBuffer:;
- (void)setMEnableNetworkTimeout:;
- (void)setMEnableOutletDropLimit:;
- (void)setMEnableReuseSocket:;
- (void)setMEnableSkipFindStream:;
- (void)setMEnableVolumeBalance:;
- (void)setMEngineLoopVDS:;
- (void)setMFeatures:;
- (void)setMFromEnginePool:;
- (void)setMGearInfoList:;
- (void)setMHeight:;
- (void)setMImageScaleType:;
- (void)setMIsEngineReuse:;
- (void)setMLastSeekT:;
- (void)setMLastTargetBitrate:;
- (void)setMMDLRetryInfo:;
- (void)setMMessage:;
- (void)setMNetLevelIntervalMs:;
- (void)setMNetLevelMaxCount:;
- (void)setMNetMinDataSize:;
- (void)setMNetworkTimeout:;
- (void)setMPlayparam:;
- (void)setMPrefNearSample:;
- (void)setMUrlMatchCondition:;
- (void)setMVarsToParse:;
- (void)setMVideoPreloadSize:;
- (void)setMVolumeBalanceType:;
- (void)setMWidth:;
- (void)setMaskEnable:;
- (void)setMaskEnableMdl:;
- (void)setMaskErrorCode:;
- (void)setMaskFileHash:;
- (void)setMaskFileSize:;
- (void)setMaskOpenTimeStamp:;
- (void)setMaskOpenedTimeStamp:;
- (void)setMaskThreadEnable:;
- (void)setMaskUrl:;
- (void)setMbRefactor:;
- (void)setMemUsages:;
- (void)setNetClient:;
- (void)setPauseStartTs:;
- (void)setPerformancePointSwitch:;
- (void)setPlayAPIVersion:auth:;
- (void)setPlayerSourceType:;
- (void)setPortraitData:;
- (void)setPreloadGearInfo:;
- (void)setPrepareEndTime:;
- (void)setPrepareStartTime:;
- (void)setRetryFetchErrorInfo:;
- (void)setSeekCount:;
- (void)setSettingLogType:value:;
- (void)setSourceType:vid:;
- (void)setSrInfo:;
- (void)setStallStartTs:;
- (void)setStringOption:value:;
- (void)setSubtag:;
- (void)setSubtitleEnable:;
- (void)setSubtitleEnableOptLoad:;
- (void)setSubtitleError:;
- (void)setSubtitleLangsCount:;
- (void)setSubtitleRequestFinishTime:;
- (void)setSubtitleRequestUrl:;
- (void)setSubtitleThreadEnable:;
- (void)setTraceId:;
- (void)setURLArray:;
- (void)setUrlArray:;
- (void)setVideoDecoderFPS:;
- (void)setVideoModelVersion:;
- (void)setVideoPreloadSize:;
- (void)setVu:;
- (void)showedFirstAVSyncFrame;
- (void)showedOneFrame;
- (id)source_type;
- (void)stallEnd;
- (long long)stallStartTs;
- (void)switchResolutionEnd:;
- (void)switchToDefinition:fromDefinition:curPos:;
- (void)updateCustomPlayerParms:;
- (void)updateFeatures;
- (void)updateMediaDuration:;
- (void)updateSingleNetworkSpeed:audioInfo:realInterval:;
- (id)urlArray;
- (void)useHardware:;
- (void)userPause:;
- (void)userPlay:;
- (void)userSetPlaybackSpeed:curPos:;
- (void)userSetRadioMode:curPos:;
- (void)validateVideoMetaDataError:;
- (void)videoChangeSizeWidth:height:;
- (void)videoStatusException:;
- (id)vu;
- (void)watchFinish;
- (void)logMessage:;
- (void)applicationWillResignActive:;
- (id)getMetrics:;
- (id)init;
- (void)setEvent:;
- (void)dealloc;
- (void)setIsLocal:;
- (id)event;
- (void)setLooping:;
- (void)setStartTime:;
- (void)setDelegate:;
- (BOOL)isLooping;
- (void)applicationDidBecomeActive:;
- (void)setTimer:;
- (void)setTag:;
- (void)setRenderType:;
- (void)clear;
- (id)delegate;
- (void)flushEvent;
- (void).cxx_destruct;
- (void)reset;
- (id)timer;
- (BOOL)isLocal;
- (void)setLogVersion:;
- (long long)logVersion;
- (long long)loopCount;
- (void)setIsLooping:;
- (id)getEvent;
- (long long)exitTime;
- (void)setExitTime:;
- (void)setIp:;
- (id)auth;
- (void)setAuth:;
- (void)setCurrentURL:;
- (id)mMessage;
- (long long)mWidth;
- (long long)mHeight;
- (void)userCancelled;
- (void)setLoopCount:;
+ (void)addFeatureGlobal:value:;
+ (id)classMethodInvocate:method:;
+ (void)setFloatValueWith:value:;
+ (void)setIntValueWithKey:value:;
@end
