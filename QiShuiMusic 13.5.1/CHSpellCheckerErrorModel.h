@interface CHSpellCheckerErrorModel : PRErrorModel
- (unsigned long long)getCharIndex:;
- (double)replacementErrorScoreForIntendedCharacter:actualCharacter:;
- (double)transpositionErrorScoreForIntendedFirstCharacter:intendedSecondCharacter:;
@end
