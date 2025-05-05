@interface NLLanguageModelSession : NSObject
@property (nonatomic) NLLanguageModel languageModel;
- (id)languageModel;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithLanguageModel:options:;
- (id)conditionalProbabilityForToken:context:;
- (id)conditionalProbabilitiesForTokens:context:;
- (id)conditionalProbabilityForString:context:;
- (id)conditionalProbabilitiesForStrings:context:;
- (long long)blocklistStatusForString:matchType:;
- (id)stateWithOptions:;
- (void)addPriorText:type:time:;
- (void)adaptToText:;
- (void)adaptToToken:context:;
- (void)unadaptToToken:context:;
- (void)registerNegativeEvidenceForToken:;
- (void)enumeratePredictionsForContext:maximumPredictions:maximumTokensPerPrediction:withBlock:;
- (void)flushDynamicData;
- (void)applyExponentialDecay;
- (void)pruneToSize:;
- (void)recordWithDifferentialPrivacy:;
+ (void)performMaintenance;
+ (void)setLogLevel:;
@end
