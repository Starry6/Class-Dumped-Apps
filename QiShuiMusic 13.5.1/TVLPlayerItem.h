@interface TVLPlayerItem : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) @ rawData;
@property (nonatomic) q type;
@property (nonatomic) {CGSize=dd} presentationSize;
@property (nonatomic) NSDictionary preferencesSwitch;
@property (nonatomic) NSDictionary HTTPHeaders;
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString bizSessionID;
@property (nonatomic) NSInteger enableBizSessionID;
@property (nonatomic) NSString liveVVSessionID;
@property (nonatomic) NSString currentLiveStreamSessionID;
@property (nonatomic) NSDictionary ABRLogInfo;
@property (nonatomic) NSDictionary strategyInfo;
@property (nonatomic) NSDictionary personalTransParams;
@property (nonatomic) BOOL isBackupOriginInDecodeErrorHappened;
@property (nonatomic) BOOL isEnableLogVoiceSilence;
@property (nonatomic) BOOL isEnableLogAbrDecisionInfo;
@property (nonatomic) q checkSilenceVoiceInterval;
@property (nonatomic) q SilenceVoiceThreshold;
@property (nonatomic) BOOL isOpenGlobalVolumeBalance;
@property (nonatomic) NSInteger volumeBalanceType;
@property (nonatomic) NSInteger volumeBalanceTargetLufs;
@property (nonatomic) NSInteger videoProcessingSettingState;
@property (nonatomic) BOOL shouldUseSmoothlySwitchParams;
@property (nonatomic) q codecNotSame;
@property (nonatomic) q bitrateAbnormal;
@property (nonatomic) q dynamicSrType;
@property (nonatomic) BOOL enableAudioBalanceBySei;
@property (nonatomic) BOOL enableThirdPublishAudioBalanceBySei;
@property (nonatomic) BOOL enableSkipLoudnorm;
@property (nonatomic) BOOL enableOnlyLoudnormBySei;
@property (nonatomic) float audioBalanceTargetLuft;
@property (nonatomic) BOOL didOpenAudioBalanceBySei;
@property (nonatomic) BOOL didOpenThirdPublishAudioBalanceBySei;
@property (nonatomic) BOOL enableUseLss;
@property (nonatomic) NSArray disableNetSwitchList;
@property (nonatomic) BOOL isEnableUseBmpWater;
@property (nonatomic) NSInteger strategyBandWidth;
@property (nonatomic) q abrStrategyDelaySwitchTime;
@property (nonatomic) BOOL enableFallbackToPlayerAbr;
@property (nonatomic) BOOL isFallbackFromHDRToSDR;
@property (nonatomic) BOOL roiBmfSREnabled;
@property (nonatomic) NSString realSeiSource;
@property (nonatomic) NSString lssSettingParams;
@property (nonatomic) NSMutableDictionary forceUpdateParamsWithLSSDict;
@property (nonatomic) BOOL enableNetworkSwitching;
@property (nonatomic) BOOL usingCellular;
@property (nonatomic) BOOL switchedToCellularWithWifiOn;
@property (nonatomic) I cellularIndex;
@property (nonatomic) q reasonOfNetworkSwitching;
@property (nonatomic) NSString detailOfNetworkSwitching;
@property (nonatomic) q tryTimesOfNetworkSwitching;
@property (nonatomic) q succeedTimesOfNetworkSwitching;
@property (nonatomic) BOOL triggerRetryByNetworkSwitching;
@property (nonatomic) q thresholdOfStallCount;
@property (nonatomic) I thresholdOfStallTime;
@property (nonatomic) BOOL enableUseExternalAeTargetLufts;
@property (nonatomic) float audioVolumeBalancePregainExternal;
@property (nonatomic) float audioVolumeBalanceThresholdExternal;
@property (nonatomic) float audioVolumeBalanceRatioExternal;
@property (nonatomic) float audioVolumeBalancePredelayExternal;
@property (nonatomic) BOOL enableAudioVolumeBalancePregainExternal;
@property (nonatomic) BOOL enableAudioVolumeBalanceThresholdExternal;
@property (nonatomic) BOOL enableAudioVolumeBalanceRatioExternal;
@property (nonatomic) BOOL enableAudioVolumeBalancePredelayExternal;
@property (nonatomic) BOOL enableAudioVolumeBalancePhase2;
@property (nonatomic) BOOL enableAudioRMSMonitor;
@property (nonatomic) @ audioVolumeObserver;
@property (nonatomic) BOOL useRedirected;
@property (nonatomic) TVLPlayerItemPreferences preferences;
@property (nonatomic) NSArray supportedPreferences;
@property (nonatomic) NSArray supportedResolutionTypes;
- (id)ABRLogInfo;
- (long long)SilenceVoiceThreshold;
- (float)audioVolumeBalanceRatioExternal;
- (long long)bitrateAbnormal;
- (id)liveVVSessionID;
- (BOOL)roiBmfSREnabled;
- (void)setVideoProcessingSettingState:;
- (id)URLWithPreferences:;
- (long long)abrStrategyDelaySwitchTime;
- (float)audioBalanceTargetLuft;
- (float)audioVolumeBalancePredelayExternal;
- (float)audioVolumeBalancePregainExternal;
- (float)audioVolumeBalanceThresholdExternal;
- (id)audioVolumeObserver;
- (id)bizSessionID;
- (unsigned int)cellularIndex;
- (BOOL)checkCurrentStateSupportOrNot:;
- (long long)checkSilenceVoiceInterval;
- (long long)codecNotSame;
- (id)currenPersonalTransParams;
- (id)currenStrategyInfo;
- (id)currentLiveStreamSessionID;
- (id)currentStreamData;
- (id)detailOfNetworkSwitching;
- (BOOL)didOpenAudioBalanceBySei;
- (BOOL)didOpenThirdPublishAudioBalanceBySei;
- (id)disableNetSwitchList;
- (long long)dynamicSrType;
- (BOOL)enableAudioBalanceBySei;
- (BOOL)enableAudioRMSMonitor;
- (BOOL)enableAudioVolumeBalancePhase2;
- (BOOL)enableAudioVolumeBalancePredelayExternal;
- (BOOL)enableAudioVolumeBalancePregainExternal;
- (BOOL)enableAudioVolumeBalanceRatioExternal;
- (BOOL)enableAudioVolumeBalanceThresholdExternal;
- (int)enableBizSessionID;
- (BOOL)enableFallbackToPlayerAbr;
- (BOOL)enableNetworkSwitching;
- (BOOL)enableOnlyLoudnormBySei;
- (BOOL)enableSkipLoudnorm;
- (BOOL)enableThirdPublishAudioBalanceBySei;
- (BOOL)enableUseExternalAeTargetLufts;
- (BOOL)enableUseLss;
- (id)findEquivalentPreferencesWithPreferences:requiredProperties:;
- (id)findHASSwitchControlParametersWithPreferences:resolutionType:;
- (id)findHASSwitchControlURLWithPreferences:resolutionType:;
- (id)forceUpdateParamsWithLSSDict;
- (id)generateLiveStreamSessionID;
- (int)getCurrentShortEdge;
- (void)handleVideoSizeChangedNotification:;
- (id)highestPriorityPreferencesLowerThanPreferences:;
- (id)initWithInfoData:;
- (id)initWithItemInternal:;
- (id)initWithPlayableURLs:;
- (BOOL)isBackupOriginInDecodeErrorHappened;
- (BOOL)isBackupPreferencesExistent;
- (BOOL)isEnableLogAbrDecisionInfo;
- (BOOL)isEnableLogVoiceSilence;
- (BOOL)isEnableUseBmpWater;
- (BOOL)isFallbackFromHDRToSDR;
- (BOOL)isOpenGlobalVolumeBalance;
- (id)lssSettingParams;
- (id)originSupportedPreferences;
- (id)personalTransParams;
- (id)preferencesSwitch;
- (id)realSeiSource;
- (long long)reasonOfNetworkSwitching;
- (id)recommendedPreferencesWithResolution:;
- (void)resetStrategyInfo;
- (id)resolutionWithVideoBitrate:;
- (id)resolutionWithVideoBitrateInAbrList:;
- (void)setABRLogInfo:;
- (void)setAbrStrategyDelaySwitchTime:;
- (void)setAudioBalanceTargetLuft:;
- (void)setAudioVolumeBalancePredelayExternal:;
- (void)setAudioVolumeBalancePregainExternal:;
- (void)setAudioVolumeBalanceRatioExternal:;
- (void)setAudioVolumeBalanceThresholdExternal:;
- (void)setAudioVolumeObserver:;
- (void)setBitrateAbnormal:;
- (void)setBizSessionID:;
- (void)setCellularIndex:;
- (void)setCheckSilenceVoiceInterval:;
- (void)setCodecNotSame:;
- (void)setCurrentLiveStreamSessionID:;
- (void)setDetailOfNetworkSwitching:;
- (void)setDidOpenAudioBalanceBySei:;
- (void)setDidOpenThirdPublishAudioBalanceBySei:;
- (void)setDisableNetSwitchList:;
- (void)setDynamicSrType:;
- (void)setEnableAudioBalanceBySei:;
- (void)setEnableAudioRMSMonitor:;
- (void)setEnableAudioVolumeBalancePhase2:;
- (void)setEnableAudioVolumeBalancePredelayExternal:;
- (void)setEnableAudioVolumeBalancePregainExternal:;
- (void)setEnableAudioVolumeBalanceRatioExternal:;
- (void)setEnableAudioVolumeBalanceThresholdExternal:;
- (void)setEnableBizSessionID:;
- (void)setEnableFallbackToPlayerAbr:;
- (void)setEnableNetworkSwitching:;
- (void)setEnableOnlyLoudnormBySei:;
- (void)setEnableSkipLoudnorm:;
- (void)setEnableThirdPublishAudioBalanceBySei:;
- (void)setEnableUseExternalAeTargetLufts:;
- (void)setEnableUseLss:;
- (void)setForceUpdateParamsWithLSSDict:;
- (void)setIsBackupOriginInDecodeErrorHappened:;
- (void)setIsEnableLogAbrDecisionInfo:;
- (void)setIsEnableLogVoiceSilence:;
- (void)setIsEnableUseBmpWater:;
- (void)setIsFallbackFromHDRToSDR:;
- (void)setIsOpenGlobalVolumeBalance:;
- (void)setLiveVVSessionID:;
- (void)setLssSettingParams:;
- (void)setPersonalTransParams:;
- (void)setPreferencesSwitch:;
- (void)setRealSeiSource:;
- (void)setReasonOfNetworkSwitching:;
- (void)setRoiBmfSREnabled:;
- (void)setShouldUseSmoothlySwitchParams:;
- (void)setSilenceVoiceThreshold:;
- (void)setStrategyBandWidth:;
- (void)setStrategyInfo:;
- (void)setSucceedTimesOfNetworkSwitching:;
- (void)setSwitchedToCellularWithWifiOn:;
- (void)setThresholdOfStallCount:;
- (void)setThresholdOfStallTime:;
- (void)setTriggerRetryByNetworkSwitching:;
- (void)setTryTimesOfNetworkSwitching:;
- (void)setUseRedirected:;
- (void)setUsingCellular:;
- (void)setVolumeBalanceTargetLufs:;
- (void)setVolumeBalanceType:;
- (BOOL)shouldUseSmoothlySwitchParams;
- (int)strategyBandWidth;
- (id)strategyInfo;
- (long long)succeedTimesOfNetworkSwitching;
- (id)suggestedPreferencesWithPreferences:userInfo:;
- (id)supportedPreferences;
- (id)supportedResolutionTypes;
- (BOOL)switchedToCellularWithWifiOn;
- (long long)thresholdOfStallCount;
- (unsigned int)thresholdOfStallTime;
- (BOOL)triggerRetryByNetworkSwitching;
- (long long)tryTimesOfNetworkSwitching;
- (void)tvl_cancel;
- (void)tvl_requestItemInfoWithCompletion:;
- (void)updateCurrenStrategyInfo:;
- (void)updateCurrentPersonalTransParams:;
- (void)updateLiveStreamSessionID;
- (void)updateLiveStreamSessionID:;
- (BOOL)useRedirected;
- (BOOL)usingCellular;
- (int)videoProcessingSettingState;
- (int)volumeBalanceTargetLufs;
- (int)volumeBalanceType;
- (void)setSessionID:;
- (void)setInternal:;
- (id)sessionID;
- (void)setPreferences:;
- (id)init;
- (void)dealloc;
- (id)initWithURL:;
- (id)preferences;
- (void)setRawData:;
- (id)presentationSize;
- (void)setPresentationSize:;
- (void)setType:;
- (id)lock;
- (id)HTTPHeaders;
- (id)internal;
- (id)player;
- (long long)type;
- (void).cxx_destruct;
- (void)setPlayer:;
- (id)rawData;
- (void)setLock:;
- (void)setHTTPHeaders:;
- (id)rawDataString;
- (id)accessLog;
+ (long long)compareStreamData:data2:;
+ (id)playerItemWithInfoData:;
+ (id)playerItemWithStreamData:;
+ (id)playerItemWithURL:;
@end
