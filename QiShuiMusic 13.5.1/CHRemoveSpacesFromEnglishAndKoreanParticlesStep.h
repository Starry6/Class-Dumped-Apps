@interface CHRemoveSpacesFromEnglishAndKoreanParticlesStep : CHPostprocessingStepModifyingOriginalTokens
@property (nonatomic) NSCharacterSet koreanParticlesCharSet;
- (id)init;
- (void).cxx_destruct;
- (id)process:options:;
- (id)koreanParticlesCharSet;
- (void)setKoreanParticlesCharSet:;
@end
