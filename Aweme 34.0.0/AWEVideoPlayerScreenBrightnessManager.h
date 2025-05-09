@interface AWEVideoPlayerScreenBrightnessManager : NSObject
@property (nonatomic) BOOL enableBrightnessAdjust;
@property (nonatomic) double originBrightness;
@property (nonatomic) double targetBrightness;
@property (nonatomic) double durationPer10Par;
@property (nonatomic) BOOL isAdjusting;
@property (nonatomic) BOOL isHDRVideo;
@property (nonatomic) NSString videoItemID;
- (void)setIsHDRVideo:;
- (void)setOriginBrightness:;
- (double)originBrightness;
- (void)setVideoItemID:;
- (id)videoItemID;
- (void)adjustScreenBrightnessToTargetBrightness;
- (void)restoreOriginalBrightness;
- (void)p_watchForUserScreenBrightnessChange:;
- (void)p_watchForAppWillResign:;
- (void)p_adjustScreenBrightnessFrom:to:;
- (void)invalidateCurrentTimer;
- (void)p_transitionBrightness;
- (BOOL)enableBrightnessAdjust;
- (void)setEnableBrightnessAdjust:;
- (double)durationPer10Par;
- (void)setDurationPer10Par:;
- (BOOL)isAdjusting;
- (void)setIsAdjusting:;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isHDRVideo;
- (void)setTargetBrightness:;
- (double)targetBrightness;
+ (id)bmfBrightnessConfig;
+ (BOOL)enableVPDirectScreen;
+ (BOOL)enableAdsVPBn;
+ (BOOL)enableVPBnFirstFrame;
+ (id)sharedManager;
@end
