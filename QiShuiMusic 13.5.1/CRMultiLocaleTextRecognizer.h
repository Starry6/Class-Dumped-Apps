@interface CRMultiLocaleTextRecognizer : CRMultiModelTextRecognizer
@property (nonatomic) NSMutableDictionary textRecognizers;
- (void)cancel;
- (void).cxx_destruct;
- (id)inferenceStats;
- (id)decodingStats;
- (id)initWithImageReaderOptions:error:;
- (id)recognizerForIdentifier:;
- (id)identifierForTextFeature:;
- (id)textRecognizers;
- (void)setTextRecognizers:;
@end
