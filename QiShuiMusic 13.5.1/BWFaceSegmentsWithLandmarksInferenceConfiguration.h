@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration
@property (nonatomic) BOOL detectFacesInFullSizeInput;
@property (nonatomic) BOOL skipFaceLandmarkDetection;
@property (nonatomic) BOOL skipFoodAndDrinkDetection;
@property (nonatomic) BOOL skipSkinToneClassification;
@property (nonatomic) BOOL includesInvalidContent;
- (BOOL)includesInvalidContent;
- (BOOL)skipSkinToneClassification;
- (void)setDetectFacesInFullSizeInput:;
- (void)setSkipFaceLandmarkDetection:;
- (id)initWithInferenceType:;
- (BOOL)skipFoodAndDrinkDetection;
- (void)setSkipSkinToneClassification:;
- (void)setSkipFoodAndDrinkDetection:;
- (void)setIncludesInvalidContent:;
- (BOOL)detectFacesInFullSizeInput;
- (BOOL)skipFaceLandmarkDetection;
+ (id)configuration;
@end
