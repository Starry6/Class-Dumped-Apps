@interface PLNLP : NSObject
+ (id)dateIntervalsFromMessage:onDate:;
+ (id)tokensFromString:options:;
+ (id)lemmasForToken:locale:options:;
+ (id)stringWithoutDiacriticsFromString:;
+ (id)ngramsFromTokens:ofSize:usingSeparator:;
+ (id)dateFilterForCMMWithAttributes:withReferenceDate:;
+ (id)stopWordsForLanguageCode:;
+ (id)_englishStopWords;
+ (id)_frenchStopWords;
+ (BOOL)nlpSearchSupportsLocale:;
@end
