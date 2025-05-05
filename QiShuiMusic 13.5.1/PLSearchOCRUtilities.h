@interface PLSearchOCRUtilities : NSObject
+ (id)ocrTextLinesFromDocumentObservation:;
+ (id)jsonOCRTextLinesFromDocumentObservation:;
+ (id)_ocrTextLineCandidatesFromTextBlockObservation:tokenizer:allowLowConfidence:;
+ (id)_ocrTextLinesFromDocumentObservation:allowLowConfidence:;
+ (id)spotlightTextLinesFromDocumentObservation:;
+ (id)_wordsFromString:usingTokenizer:;
@end
