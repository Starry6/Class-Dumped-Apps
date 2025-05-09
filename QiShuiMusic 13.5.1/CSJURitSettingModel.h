@interface CSJURitSettingModel : NSObject
@property (nonatomic) double splashSkipTime;
@property (nonatomic) double splashImageCountdownTime;
@property (nonatomic) NSString codeId;
@property (nonatomic) q videoAutoPlayType;
@property (nonatomic) BOOL muteSwitch;
@property (nonatomic) q videoPrefetchType;
@property (nonatomic) q rewardVideoPrefetchType;
@property (nonatomic) q drawVideoAutoPlayType;
@property (nonatomic) BOOL drawMuteSwitch;
@property (nonatomic) BOOL skipTimeEnable;
@property (nonatomic) q rewardbarShowTime;
@property (nonatomic) q rewardedSkipTime;
@property (nonatomic) q voiceControl;
@property (nonatomic) q showAlert;
@property (nonatomic) BOOL interstitialMuteSwitch;
@property (nonatomic) q fullscreen_skipBtnShowTime;
@property (nonatomic) q splash_prefetchType;
@property (nonatomic) q splash_stopTime;
@property (nonatomic) double timeOutControl;
@property (nonatomic) q slotType;
@property (nonatomic) q splashLoadType;
@property (nonatomic) q splashBufferTime;
@property (nonatomic) q time_out_contorl_type;
@property (nonatomic) BOOL autoCloseOnClick;
@property (nonatomic) q nativePlayableDelay;
@property (nonatomic) BOOL enable_bidding_pre_fetch;
@property (nonatomic) BOOL enable_bidding_cache;
@property (nonatomic) q bidding_cache_skip_time;
@property (nonatomic) q refreshRequestSwitch;
- (long long)splash_stopTime;
- (BOOL)autoCloseOnClick;
- (long long)bidding_cache_skip_time;
- (id)codeId;
- (id)csj_dictionaryValue;
- (BOOL)drawMuteSwitch;
- (long long)drawVideoAutoPlayType;
- (BOOL)enable_bidding_cache;
- (BOOL)enable_bidding_pre_fetch;
- (long long)fullscreen_skipBtnShowTime;
- (BOOL)interstitialMuteSwitch;
- (long long)nativePlayableDelay;
- (long long)refreshRequestSwitch;
- (long long)rewardVideoPrefetchType;
- (long long)rewardbarShowTime;
- (long long)rewardedSkipTime;
- (void)setAutoCloseOnClick:;
- (void)setBidding_cache_skip_time:;
- (void)setCodeId:;
- (void)setDrawMuteSwitch:;
- (void)setDrawVideoAutoPlayType:;
- (void)setEnable_bidding_cache:;
- (void)setEnable_bidding_pre_fetch:;
- (void)setFullscreen_skipBtnShowTime:;
- (void)setInterstitialMuteSwitch:;
- (void)setNativePlayableDelay:;
- (void)setRefreshRequestSwitch:;
- (void)setRewardVideoPrefetchType:;
- (void)setRewardbarShowTime:;
- (void)setRewardedSkipTime:;
- (void)setShowAlert:;
- (void)setSkipTimeEnable:;
- (void)setSplashBufferTime:;
- (void)setSplashImageCountdownTime:;
- (void)setSplashLoadType:;
- (void)setSplashSkipTime:;
- (void)setSplash_prefetchType:;
- (void)setSplash_stopTime:;
- (void)setTimeOutControl:;
- (void)setTime_out_contorl_type:;
- (void)setVideoAutoPlayType:;
- (void)setVideoPrefetchType:;
- (void)setVoiceControl:;
- (BOOL)skipTimeEnable;
- (long long)splashBufferTime;
- (double)splashImageCountdownTime;
- (long long)splashLoadType;
- (double)splashSkipTime;
- (long long)splash_prefetchType;
- (double)timeOutControl;
- (long long)time_out_contorl_type;
- (long long)videoAutoPlayType;
- (long long)videoPrefetchType;
- (long long)voiceControl;
- (id)init;
- (id)initWithDictionary:;
- (void).cxx_destruct;
- (void)setMuteSwitch:;
- (BOOL)muteSwitch;
- (void)setSlotType:;
- (long long)slotType;
- (long long)showAlert;
@end
