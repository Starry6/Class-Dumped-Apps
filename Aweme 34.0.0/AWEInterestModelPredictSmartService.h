@interface AWEInterestModelPredictSmartService : AWEBaseSmartServiceImpl
@property (nonatomic) NSArray needCalculateSceneArray;
@property (nonatomic) q playVideoCount;
@property (nonatomic) BOOL forbidPlayMusicAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onTriggerEvent:params:;
- (void)setNeedCalculateSceneArray:;
- (void)setPlayVideoCount:;
- (void)setForbidPlayMusicAnimation:;
- (long long)serviceStartRunThreshold;
- (long long)playVideoCount;
- (id)needCalculateSceneArray;
- (BOOL)forbidPlayMusicAnimation;
- (BOOL)isValidDegradationForKey:;
- (void)setup;
- (void).cxx_destruct;
+ (id)abTestConfig;
@end
