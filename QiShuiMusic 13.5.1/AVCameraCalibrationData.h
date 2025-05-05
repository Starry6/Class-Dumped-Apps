@interface AVCameraCalibrationData : NSObject
@property (nonatomic) {?=[3]} intrinsicMatrix;
@property (nonatomic) {CGSize=dd} intrinsicMatrixReferenceDimensions;
@property (nonatomic) {?=[4]} extrinsicMatrix;
@property (nonatomic) float pixelSize;
@property (nonatomic) NSData lensDistortionLookupTable;
@property (nonatomic) NSData inverseLensDistortionLookupTable;
@property (nonatomic) {CGPoint=dd} lensDistortionCenter;
- (float)pixelSize;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)_initEmpty;
- (id)inverseLensDistortionLookupTable;
- (id)cameraCalibrationDataDictionary;
- (id)extrinsicMatrix;
- (id)lensDistortionCenter;
- (id)lensDistortionLookupTable;
- (id)intrinsicMatrix;
- (id)intrinsicMatrixReferenceDimensions;
- (id)copyAuxiliaryMetadata;
- (id)initWithCameraCalibrationDataDictionary:error:;
- (id)initWithAuxiliaryMetadata:;
- (id)initWithDepthMetadataDictionary:;
- (id)cameraCalibrationDataWithExifOrientation:;
- (id)_distortionLookupTableFromCoefficients:distortionCenter:pixelSize:referenceDimensions:lookupTableLength:;
@end
