@interface CHLanguageUtilities : NSObject
+ (unsigned int)normalizeLMTokenIDForWord:tokenID:isFromPattern:score:wordLanguageModel:;
+ (id)tokensRangesForString:outTokenIDs:wordLanguageModel:;
+ (id)splitStringIntoSubtokensForLexicon:minLength:;
+ (BOOL)findPartialMatchInPhraseLexicon:token:contextBeforeToken:;
+ (id)transliterateStringUsingICUTransliterator:_icuTransliterator:;
+ (id)transformString:usingConfusions:;
+ (id)transformLatinToCyrillic:;
+ (id)transformCyrillicToLatin:;
+ (unsigned int)tokenIDForString:withLexicon:;
+ (BOOL)lexiconHasEntryForString:withLexicon:;
+ (double)characterLMLogProbabilityForString:characterLM:;
+ (BOOL)isMecabraConversionCandidateAllowed:;
+ (id)mecabraTokenizationAndKanaConversionForString:mecabraEngine:contextRef:leftCandidateRef:alternativeCandidateLimit:;
+ (BOOL)shouldCapitalizeGivenHistory:shouldAutoCapitalizeSetting:locale:;
+ (double)computeEditPenalizationFromString:toReferenceString:withSuffix:withCaseSensitivity:withFirstLetterCaseSensitivity:withDiacriticSensitivity:withDiacriticsCharSet:withConsumableStrokesCharSet:outputSuffix:lexiconExtraCharacters:firstLetterCaseFlipped:;
+ (id)lexiconCorrectionsForToken:locale:lexicon:lmVocabulary:ovsStringChecker:textReplacements:consumableStrokesSet:minimumTokenScore:activeHistoryRange:outBestTokenScore:shouldCapitalizeWord:shouldSkipEntryCorrection:allowFullCapsCorrections:minimalLengthForLowConfidenceCorrections:lowConfidenceThreshold:minimalLengthForCustomCapitalizationCorrections:outBestTokenIndex:outFoundTokenInLexicon:outFoundCaseMatchingTokenInLexicon:outCorrectionFromOutOfContextEntry:;
@end
