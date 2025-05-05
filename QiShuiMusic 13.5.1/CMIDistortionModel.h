@interface CMIDistortionModel : NSObject
@property (nonatomic) {?=ff[8f][8f]} gdcParams;
- (id)initWithGDCParams:;
- (id)gdcParams;
+ (id)adjustCropRectangle:withGDCParams:;
+ (int)getGDCParams:cameraInfoByPortType:metadata:;
+ (int)generateInverseScalingLUT:withGDCParams:metalCtx:;
+ (int)generateInverseScalingLUT:withGDCParams:;
@end
