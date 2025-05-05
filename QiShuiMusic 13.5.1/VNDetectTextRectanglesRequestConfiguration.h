@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL reportCharacterBoxes;
@property (nonatomic) Q algorithm;
@property (nonatomic) Q minimumCharacterPixelHeight;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (nonatomic) NSString textRecognition;
@property (nonatomic) NSString additionalCharacters;
- (unsigned long long)algorithm;
- (void)setAlgorithm:;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (void)setDetectDiacritics:;
- (void)setMinimizeFalseDetections:;
- (BOOL)reportCharacterBoxes;
- (void)setReportCharacterBoxes:;
- (unsigned long long)minimumCharacterPixelHeight;
- (void)setMinimumCharacterPixelHeight:;
- (BOOL)detectDiacritics;
- (BOOL)minimizeFalseDetections;
- (id)textRecognition;
- (void)setTextRecognition:;
- (id)additionalCharacters;
- (void)setAdditionalCharacters:;
@end
