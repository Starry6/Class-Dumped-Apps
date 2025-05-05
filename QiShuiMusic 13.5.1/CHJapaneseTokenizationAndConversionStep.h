@interface CHJapaneseTokenizationAndConversionStep : CHPostprocessingStep
@property (nonatomic) CHMecabraWrapper mecabraWrapper;
@property (nonatomic) ^{__MecabraContext=} mecabraContextRef;
@property (nonatomic) ^v wordLanguageModel;
@property (nonatomic) BOOL promoteKanaConversion;
@property (nonatomic) CHStringOVSChecker ovsStringChecker;
- (void)dealloc;
- (void).cxx_destruct;
- (id)wordLanguageModel;
- (id)mecabraWrapper;
- (id)ovsStringChecker;
- (void)setOvsStringChecker:;
- (id)process:options:;
- (id)initWithMecabra:wordLanguageModel:ovsStringChecker:promoteKanaConversion:;
- (id)_updatedTokenFromToken:withString:;
- (id)_extendedConversionCandidates:withPhraseCandidates:;
- (id)mecabraContextRef;
- (BOOL)promoteKanaConversion;
@end
