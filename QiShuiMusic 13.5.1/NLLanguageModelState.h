@interface NLLanguageModelState : NSObject
@property (nonatomic) NLLanguageModelSession session;
@property (nonatomic) NSString context;
- (id)context;
- (void)addContext:;
- (id)options;
- (id)session;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (void)resetContext;
- (id)initWithSession:options:context:;
- (id)conditionalProbabilityForToken:;
- (id)conditionalProbabilitiesForTokens:;
- (id)conditionalProbabilityForString:;
- (id)conditionalProbabilitiesForStrings:;
- (void)enumeratePredictions:maximumTokensPerPrediction:withBlock:;
@end
