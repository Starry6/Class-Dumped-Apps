@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction
- (void)setKeywords:;
- (void)dealloc;
- (id)_keywords;
- (int)completionType;
- (id)_disambiguationContext;
- (BOOL)_keywordIndexChanged;
- (void)setRepeatedSpokenFeedbackString:;
- (id)repeatedSpokenFeedbackString;
- (id)sequenceTag;
- (void)setSequenceTag:;
- (id)knownValueForClassIdentifier:;
- (void)setKnownValue:phoneticValue:forClassIdentifier:;
- (id)knownValuesForClassIdentifier:;
- (void)setKnownValues:phoneticValues:forClassIdentifier:;
- (id)ambiguousValuesForClassIdentifier:;
- (void)setAmbiguousValues:phoneticValues:forClassIdentifier:;
- (id)_createRecognitionInstanceWithCallbacks:info:;
- (id)_actionForEmptyResults;
@end
