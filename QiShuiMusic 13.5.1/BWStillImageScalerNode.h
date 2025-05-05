@interface BWStillImageScalerNode : BWNode
@property (nonatomic) {?=ii} resizedOutputDimensions;
- (id)init;
- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:forInput:;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:;
- (void)didReachEndOfDataForInput:;
- (BOOL)blackFillingRequired;
- (void)renderSampleBuffer:forInput:;
- (id)initWithPoolCapacity:;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (id)resizedOutputDimensions;
- (void)setBlackFillingRequired:;
- (void)setResizedOutputDimensions:;
- (id)nodeSubType;
@end
