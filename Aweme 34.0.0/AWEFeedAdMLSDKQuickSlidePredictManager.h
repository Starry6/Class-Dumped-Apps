@interface AWEFeedAdMLSDKQuickSlidePredictManager : HTSService
@property (nonatomic) BOOL isEngineOpen;
@property (nonatomic) BOOL slideQuicklyPredictRet;
@property (nonatomic) Q videoFeatureInputTimes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)willUserSlideQuickly;
- (id)initAdMLSDKQuickSlideManager;
- (void)setIsEngineOpen:;
- (void)setSlideQuicklyPredictRet:;
- (void)setVideoFeatureInputTimes:;
- (BOOL)isEngineOpen;
- (unsigned long long)videoFeatureInputTimes;
- (BOOL)slideQuicklyPredictRet;
- (void)initQuickSlideModelParamsWithModel:;
- (void)updateQuickSlideModelParams:withModel:;
- (void)setupQucikSlidePredictService;
- (void)inputFeaturesToPredictModel:;
- (void)predictNextAdSlideSpeed:;
+ (id)sharedInstance;
@end
