@interface CHSemanticTokenizerStep : CHPostprocessingStep
@property (nonatomic) ^v wordLanguageModel;
@property (nonatomic) CHStringOVSChecker ovsStringChecker;
- (void)dealloc;
- (void).cxx_destruct;
- (id)wordLanguageModel;
- (void)setWordLanguageModel:;
- (id)ovsStringChecker;
- (void)setOvsStringChecker:;
- (id)process:options:;
- (id)initWithWordLanguageModel:ovsStringChecker:;
- (void)_updateTokenInappropriateFlag:;
@end
