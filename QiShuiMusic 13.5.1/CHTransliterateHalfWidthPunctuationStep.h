@interface CHTransliterateHalfWidthPunctuationStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) BOOL shouldAddAlternatives;
@property (nonatomic) NSCharacterSet contextInvariantCharacterSet;
@property (nonatomic) NSCharacterSet forwardLookingCharacterSet;
@property (nonatomic) NSCharacterSet backwardLookingCharacterSet;
@property (nonatomic) NSCharacterSet widthAlternativeCharacterSet;
- (void).cxx_destruct;
- (id)process:options:;
- (id)initWithShouldAddAlternatives:;
- (BOOL)shouldAddAlternatives;
- (void)setShouldAddAlternatives:;
- (id)contextInvariantCharacterSet;
- (void)setContextInvariantCharacterSet:;
- (id)forwardLookingCharacterSet;
- (void)setForwardLookingCharacterSet:;
- (id)backwardLookingCharacterSet;
- (void)setBackwardLookingCharacterSet:;
- (id)widthAlternativeCharacterSet;
- (void)setWidthAlternativeCharacterSet:;
@end
