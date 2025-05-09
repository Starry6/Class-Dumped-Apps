@interface AWEAntiAddictSlideManager : NSObject
@property (nonatomic) BOOL isFirstDrag;
@property (nonatomic) double stayLimitDuration;
@property (nonatomic) double playedDuration;
@property (nonatomic) NSString currentAwemeId;
@property (nonatomic) NSMutableSet watchedRelieveVideos;
@property (nonatomic) BOOL isVideoPaused;
@property (nonatomic) q slideState;
@property (nonatomic) NSDictionary lottieSettings;
@property (nonatomic) q forceSlideEnableTime;
@property (nonatomic) BOOL forceSlideEnable;
@property (nonatomic) BOOL animationFinish;
- (double)playedDuration;
- (void)setPlayedDuration:;
- (void)feedWillDisplayCell:;
- (void)feedDidEndDisplayCell:;
- (id)currentAwemeId;
- (void)setCurrentAwemeId:;
- (void)userDragUpEndedWithAwemeId:;
- (BOOL)animationFinish;
- (id)lottieSettings;
- (void)setAnimationFinish:;
- (void)setSlideState:;
- (void)setIsFirstDrag:;
- (void)antiAddictP5Reset:;
- (id)watchedRelieveVideos;
- (void)setForceSlideEnableTime:;
- (void)setLottieSettings:;
- (void)setStayLimitDuration:;
- (void)setForceSlideEnable:;
- (double)stayLimitDuration;
- (void)playerDidPlaying:playedDuration:;
- (long long)forceSlideEnableTime;
- (void)forceSetSlideEnable:;
- (void)setSlideEnable:;
- (BOOL)isFirstDrag;
- (void)playAnimation:playAudio:countdown:awemeId:;
- (BOOL)forceSlideEnable;
- (void)pauseAnimationTimer:;
- (void)resumeAnimationTimer:;
- (BOOL)isSlideDisabledAweme:;
- (void)setWatchedRelieveVideos:;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (void)reset;
- (void)stopAnimation;
- (BOOL)isVideoPaused;
- (void)setIsVideoPaused:;
- (long long)slideState;
+ (id)shareManager;
@end
