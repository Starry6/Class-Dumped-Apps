@interface INVocabulary : NSObject
- (id)init;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (void)setVocabularyStrings:ofType:;
- (void)setVocabulary:ofType:;
- (void)removeAllVocabularyStrings;
+ (id)sharedVocabulary;
@end
