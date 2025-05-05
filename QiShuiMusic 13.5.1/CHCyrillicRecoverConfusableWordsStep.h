@interface CHCyrillicRecoverConfusableWordsStep : CHPostprocessingStep
- (id)process:options:;
- (void)checkCharactersInTokenRow:outHasLatin:outHasCyrillic:;
- (void)checkCharactersInString:outHasLatin:outHasCyrillic:;
@end
