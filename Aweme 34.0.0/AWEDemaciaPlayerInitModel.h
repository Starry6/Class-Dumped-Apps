@interface AWEDemaciaPlayerInitModel : NSObject
@property (nonatomic) q videoMode;
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) BOOL outerRotate;
@property (nonatomic) @? preCheckBlockBeforPlay;
@property (nonatomic) q controlMode;
@property (nonatomic) q frameMode;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (nonatomic) NSString demaciaFirstFrameLogKey;
@property (nonatomic) NSString demaciaPlayErrorLogKey;
@property (nonatomic) NSString demaciaPlayBlockLogKey;
@property (nonatomic) NSString outCoverName;
@property (nonatomic) NSString outBackgroundColor;
@property (nonatomic) UIColor backUIColor;
@property (nonatomic) BOOL useCustomLoadingView;
@property (nonatomic) q customScaleMode;
@property (nonatomic) BOOL isNewUser;
@property (nonatomic) BOOL hideLoadingWhenResume;
@property (nonatomic) BOOL disablePreemptAudioFocusIfMute;
- (BOOL)useTTNetUtility;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:;
- (BOOL)enableH256Decode;
- (void)setEnableH256Decode:;
- (void)setVideoMode:;
- (long long)videoMode;
- (void)setCustomScaleMode:;
- (void)setDisableTracker:;
- (void)setUseCustomLoadingView:;
- (void)setBackUIColor:;
- (void)setEnableTTPlayer:;
- (void)setUseTTNetUtility:;
- (BOOL)enableTTPlayer;
- (void)setFrameMode:;
- (long long)frameMode;
- (id)demaciaFirstFrameLogKey;
- (void)setDemaciaFirstFrameLogKey:;
- (id)demaciaPlayErrorLogKey;
- (void)setDemaciaPlayErrorLogKey:;
- (id)demaciaPlayBlockLogKey;
- (void)setDemaciaPlayBlockLogKey:;
- (BOOL)disableTracker;
- (long long)customScaleMode;
- (id)backUIColor;
- (void)setDisablePreemptAudioFocusIfMute:;
- (BOOL)showDefaultVolumeLoading;
- (BOOL)outerRotate;
- (void)setControlMode:;
- (id)preCheckBlockBeforPlay;
- (BOOL)disablePreemptAudioFocusIfMute;
- (long long)controlMode;
- (BOOL)useCustomLoadingView;
- (id)outBackgroundColor;
- (id)outCoverName;
- (BOOL)hideLoadingWhenResume;
- (void)setShowDefaultVolumeLoading:;
- (void)setOuterRotate:;
- (void)setPreCheckBlockBeforPlay:;
- (void)setOutCoverName:;
- (void)setOutBackgroundColor:;
- (void)setHideLoadingWhenResume:;
- (BOOL)mute;
- (void)setMute:;
- (void).cxx_destruct;
- (BOOL)repeated;
- (void)setRepeated:;
- (BOOL)isNewUser;
- (void)setIsNewUser:;
@end
