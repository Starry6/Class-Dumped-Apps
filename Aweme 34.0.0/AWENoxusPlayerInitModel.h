@interface AWENoxusPlayerInitModel : NSObject
@property (nonatomic) BOOL enableHardDecode;
@property (nonatomic) BOOL enableH256Decode;
@property (nonatomic) BOOL enableTTPlayer;
@property (nonatomic) BOOL repeated;
@property (nonatomic) double verticalBottomOffset;
@property (nonatomic) @? preCheckBlockBeforPlay;
@property (nonatomic) BOOL showDefaultVolumeLoading;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL useTTNetUtility;
@property (nonatomic) BOOL disableTracker;
@property (nonatomic) NSString noxusFirstFrameLogKey;
@property (nonatomic) NSString noxusPlayErrorLogKey;
@property (nonatomic) NSString noxusPlayBlockLogKey;
@property (nonatomic) NSString outBackgroundColor;
@property (nonatomic) BOOL isNewUser;
- (BOOL)useTTNetUtility;
- (BOOL)enableHardDecode;
- (void)setEnableHardDecode:;
- (BOOL)enableH256Decode;
- (void)setEnableH256Decode:;
- (void)setDisableTracker:;
- (void)setEnableTTPlayer:;
- (void)setUseTTNetUtility:;
- (BOOL)enableTTPlayer;
- (BOOL)disableTracker;
- (BOOL)showDefaultVolumeLoading;
- (id)preCheckBlockBeforPlay;
- (id)outBackgroundColor;
- (double)verticalBottomOffset;
- (void)setVerticalBottomOffset:;
- (void)setShowDefaultVolumeLoading:;
- (id)noxusPlayErrorLogKey;
- (id)noxusPlayBlockLogKey;
- (id)noxusFirstFrameLogKey;
- (void)setPreCheckBlockBeforPlay:;
- (void)setOutBackgroundColor:;
- (void)setNoxusFirstFrameLogKey:;
- (void)setNoxusPlayErrorLogKey:;
- (void)setNoxusPlayBlockLogKey:;
- (BOOL)mute;
- (void)setMute:;
- (void).cxx_destruct;
- (BOOL)repeated;
- (void)setRepeated:;
- (BOOL)isNewUser;
- (void)setIsNewUser:;
@end
