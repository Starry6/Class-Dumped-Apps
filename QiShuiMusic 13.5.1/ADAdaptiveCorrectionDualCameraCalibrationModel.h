@interface ADAdaptiveCorrectionDualCameraCalibrationModel : NSObject
@property (nonatomic) float focalLengthPixRef;
@property (nonatomic) float focalLengthPixAux;
@property (nonatomic) {CGPoint=dd} opticalCenterRef;
@property (nonatomic) {CGPoint=dd} opticalCenterAux;
@property (nonatomic) {?=[4]} refToAuxExtrinsic;
- (long long)computeStereoRectificationHomographiesMappingRectTeleToTele:rectTeleToWide:teleToRectTele:;
- (float)focalLengthPixRef;
- (void)setFocalLengthPixRef:;
- (float)focalLengthPixAux;
- (void)setFocalLengthPixAux:;
- (id)opticalCenterRef;
- (void)setOpticalCenterRef:;
- (id)opticalCenterAux;
- (void)setOpticalCenterAux:;
- (id)refToAuxExtrinsic;
- (void)setRefToAuxExtrinsic:;
@end
