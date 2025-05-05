@interface CRSingleLocaleTextRecognizer : CRMultiModelTextRecognizer
@property (nonatomic) CRNeuralTextRecognizer neuralRecognizer;
- (void)cancel;
- (void).cxx_destruct;
- (id)inferenceStats;
- (id)decodingStats;
- (id)initWithImageReaderOptions:error:;
- (id)recognizerForIdentifier:;
- (id)identifierForTextFeature:;
- (id)neuralRecognizer;
- (void)setNeuralRecognizer:;
@end
