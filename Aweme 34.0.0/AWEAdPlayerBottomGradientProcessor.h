@interface AWEAdPlayerBottomGradientProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)commerceModuleService;
+ (id)feedBottomGradientPortraitConfig;
+ (id)initializeProcessorConfigWithModel:;
+ (BOOL)canColorDetectWithModel:;
+ (id)p_serverTitleInfoDictWithModel:;
+ (id)p_staticDetectBottomColorWithVideoBrightness:;
+ (id)p_estimatedWithBrightnessMean:brightnessStd:;
+ (BOOL)p_needDowngradeByRefinementStrategy;
+ (long long)p_calculateSamplingIntervalWithBrightnessStd:;
+ (double)p_cropBottomPercentWithModel:playerController:;
+ (id)p_dynamicDetectBottomColorWithConfig:playerController:currentIndex:;
+ (long long)p_calculateMinInterval;
+ (double)p_calculateAlphaWithBrightness:;
+ (id)p_detectBottomColorWithConfig:playerController:;
+ (double)p_calculateAlphaMinWithBrightness:;
+ (double)p_calculateAlphaTargetWithBrightness:;
+ (void)asyncInitializeProcessorConfigWithModel:completion:;
+ (void)setupDynamicDetectBottomColorWithModel:playerController:config:completion:;
+ (void)setDynamicDetectStop:config:;
+ (id)processQueue;
@end
