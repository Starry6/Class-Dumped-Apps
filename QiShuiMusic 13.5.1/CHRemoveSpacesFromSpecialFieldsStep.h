@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) CHPatternNetwork patternFST;
@property (nonatomic) q patternType;
@property (nonatomic) BOOL capitalizationToSplit;
@property (nonatomic) BOOL convertToLowercase;
- (void).cxx_destruct;
- (long long)patternType;
- (void)setPatternType:;
- (id)patternFST;
- (void)setPatternFST:;
- (id)process:options:;
- (id)initWithPatternFst:patternType:capitalizationToSplit:convertToLowercase:;
- (BOOL)capitalizationToSplit;
- (void)setCapitalizationToSplit:;
- (BOOL)convertToLowercase;
- (void)setConvertToLowercase:;
@end
