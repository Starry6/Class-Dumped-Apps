@interface FigCaptureSourceCompanionFormat : NSObject
@property (nonatomic) NSInteger formatIndex;
@property (nonatomic) {?=ii} fesDimensions;
@property (nonatomic) {?=ii} fesInputCropDimensions;
@property (nonatomic) {?=ii} outputCropDimensionsWhenFesIsEnabled;
@property (nonatomic) {?=ii} sensorDimensions;
@property (nonatomic) {?=ii} sensorCropDimensions;
@property (nonatomic) {?=ii} postGDCCropDimensions;
@property (nonatomic) {?=ii} highQualitySensorDimensions;
@property (nonatomic) {?=ii} geometricDistortionCorrectedNativeDimensions;
@property (nonatomic) BOOL sifrEnabled;
- (id)sensorDimensions;
- (id)fesInputCropDimensions;
- (void)dealloc;
- (id)geometricDistortionCorrectedNativeDimensions;
- (int)formatIndex;
- (id)sensorCropDimensions;
- (id)description;
- (id)postGDCCropDimensions;
- (id)initWithCompanionFormatDictionary:;
- (id)fesDimensions;
- (id)outputCropDimensionsWhenFesIsEnabled;
- (BOOL)sifrEnabled;
- (id)highQualitySensorDimensions;
@end
