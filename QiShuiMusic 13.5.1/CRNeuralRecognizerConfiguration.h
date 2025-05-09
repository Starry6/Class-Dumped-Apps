@interface CRNeuralRecognizerConfiguration : CRRecognizerConfiguration
@property (nonatomic) float mediumConfidenceThreshold;
@property (nonatomic) float highConfidenceThreshold;
@property (nonatomic) NSInteger colorSpace;
@property (nonatomic) NSURL customModelURL;
@property (nonatomic) BOOL rectifyPolygons;
@property (nonatomic) q batchSize;
@property (nonatomic) q maxConcurrentBatches;
@property (nonatomic) NSArray inputWidths;
@property (nonatomic) double inputHeight;
@property (nonatomic) BOOL decodeWithLM;
@property (nonatomic) BOOL filterWithLM;
@property (nonatomic) NSArray customWords;
@property (nonatomic) float precisionThreshold;
@property (nonatomic) NSString locale;
@property (nonatomic) CRTitleParameters titleParameters;
@property (nonatomic) CRConfidenceThresholds confidenceThresholds;
- (long long)batchSize;
- (int)colorSpace;
- (id)locale;
- (void).cxx_destruct;
- (double)inputHeight;
- (id)customWords;
- (float)mediumConfidenceThreshold;
- (float)highConfidenceThreshold;
- (id)customModelURL;
- (id)initV1DefaultConfigWithOptions:;
- (id)initV2DefaultConfigWithOptions:;
- (id)initV3DefaultConfigWithOptions:;
- (id)textFeatureFilter;
- (id)initWithLocale:imageReaderOptions:error:;
- (BOOL)usesAppleNeuralEngine;
- (BOOL)filterWithLM;
- (id)confidenceThresholds;
- (long long)bestFitWidthIndexForAspectRatio:;
- (void)setConfidenceThresholdsForRevision:;
- (BOOL)rectifyPolygons;
- (void)setRectifyPolygons:;
- (long long)maxConcurrentBatches;
- (id)inputWidths;
- (BOOL)decodeWithLM;
- (float)precisionThreshold;
- (id)titleParameters;
- (void)setMediumConfidenceThreshold:;
- (void)setHighConfidenceThreshold:;
@end
