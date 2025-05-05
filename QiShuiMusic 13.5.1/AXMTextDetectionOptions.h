@interface AXMTextDetectionOptions : NSObject
@property (nonatomic) Q recognitionLevel;
@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) BOOL usesLanguageCorrection;
@property (nonatomic) NSArray textDetectionLocales;
@property (nonatomic) Q postProcessingOptions;
@property (nonatomic) BOOL shouldApplySemanticTextFiltering;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)_init;
- (void)setRecognitionLevel:;
- (unsigned long long)recognitionLevel;
- (void)setUsesLanguageCorrection:;
- (BOOL)usesLanguageCorrection;
- (BOOL)shouldApplySemanticTextFiltering;
- (void)setNormalizedMinimumTextHeightRatio:;
- (id)textDetectionLocales;
- (double)normalizedMinimumTextHeightRatio;
- (void)setTextDetectionLocales:;
- (unsigned long long)postProcessingOptions;
- (void)setPostProcessingOptions:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOptions;
@end
