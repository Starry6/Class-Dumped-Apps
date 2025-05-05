@interface CHRemoveSpacesFromStrongURLsAndEmailsStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) CHPatternNetwork patternFST;
- (void).cxx_destruct;
- (id)patternFST;
- (void)setPatternFST:;
- (id)process:options:;
- (id)initWithPatternFst:;
@end
