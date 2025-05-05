@interface CVNLPDecodingLanguageModel : CVNLPInformationStream
@property (nonatomic) NSLocale locale;
@property (nonatomic) ^v languageModel;
- (void)dealloc;
- (id)locale;
- (id)languageModel;
- (void).cxx_destruct;
- (id)initWithLanguageModel:;
- (id)_initWithLanguageModel:locale:decodingWeight:lowerBoundLogProbability:type:;
- (id)initWithLMLanguageModel:locale:decodingWeight:;
- (id)initWithLMLanguageModel:locale:decodingWeight:lowerBoundLogProbability:;
- (id)initWithCVNLPLanguageModel:locale:decodingWeight:;
- (id)initWithCVNLPLanguageModel:locale:decodingWeight:lowerBoundLogProbability:;
- (id)initWithLanguageModel:locale:;
- (int)lmSPIType;
- (long long)requiredContextLengthForStringLength:;
- (id)characterTokenIDsForString:;
- (id)wordTokenIDsForString:outTokenRanges:;
+ (id)_decodingLanguageModelForLocale:modelType:decodingWeight:lowerBoundLogProbability:type:;
+ (id)decodingLMLanguageModelForLocale:modelType:decodingWeight:;
+ (id)decodingCVNLPLanguageModelForLocale:modelType:decodingWeight:;
+ (unsigned int)_normalizedLMTokenIDForWord:withTokenID:sourceLanguageModel:outScore:;
@end
