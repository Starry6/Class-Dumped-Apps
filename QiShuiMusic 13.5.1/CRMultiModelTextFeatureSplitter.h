@interface CRMultiModelTextFeatureSplitter : NSObject
@property (nonatomic) CRRecognizerConfiguration configuration;
- (void)setConfiguration:;
- (id)configuration;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (void)enumerateTextFeatures:usingBlock:;
- (id)pruneAndSortRecognizedTextFeatures:imageSize:;
- (id)pruneRecognizedTextFeatures:imageSize:;
- (id)combinedLineFeature:lineFeature:;
+ (BOOL)_featuresAreLikelyStackedTextResults:;
@end
