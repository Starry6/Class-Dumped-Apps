@interface AWEPadPlayerAdapterImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)enablePlayerAdaptation;
- (double)playerAdaptationLimitedRatio;
- (BOOL)canUseFillScaleModelWithModel:videoSizeType:;
- (BOOL)enablePlayerAdaptationOCR;
- (id)adaptationRule;
- (BOOL)enableScaleModelAdaptation:;
- (long long)scaleModeForPadVideoWithModel:playerSize:;
@end
