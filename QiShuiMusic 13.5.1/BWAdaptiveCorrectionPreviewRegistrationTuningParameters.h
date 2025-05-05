@interface BWAdaptiveCorrectionPreviewRegistrationTuningParameters : NSObject
@property (nonatomic) float keypointsMinSelectionScore;
@property (nonatomic) I configuredNumKeypoints;
@property (nonatomic) double epipolarWeightFalloffDistance;
@property (nonatomic) double macroDepthWeightFalloffDistance;
@property (nonatomic) {BWAdaptiveCorrectionPreviewRegistrationRegToolBoxConfig=IIIIIIIf} regToolBoxConfig;
@property (nonatomic) r^{AdaptiveCorrectionConfig=dddddddddidddBdff} adaptiveCorrectionConfigsPtr;
- (id)init;
- (id)initWithTuningDictionary:;
- (float)keypointsMinSelectionScore;
- (unsigned int)configuredNumKeypoints;
- (double)epipolarWeightFalloffDistance;
- (double)macroDepthWeightFalloffDistance;
- (id)regToolBoxConfig;
- (id)adaptiveCorrectionConfigsPtr;
@end
