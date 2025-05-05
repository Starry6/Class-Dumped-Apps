@interface VNRecognizeTextRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) NSArray recognitionLanguages;
@property (nonatomic) NSArray customWords;
@property (nonatomic) q recognitionLevel;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) BOOL automaticallyDetectsLanguage;
@property (nonatomic) float minimumTextHeight;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (void)setRecognitionLanguages:;
- (id)recognitionLanguages;
- (void)setCustomWords:;
- (id)customWords;
- (void)setRecognitionLevel:;
- (long long)recognitionLevel;
- (void)setUsesLanguageCorrection:;
- (BOOL)usesLanguageCorrection;
- (void)setMinimumTextHeight:;
- (float)minimumTextHeight;
- (BOOL)automaticallyDetectsLanguage;
- (void)setAutomaticallyDetectsLanguage:;
@end
