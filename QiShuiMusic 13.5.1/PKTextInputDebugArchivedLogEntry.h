@interface PKTextInputDebugArchivedLogEntry : PKTextInputDebugLogEntry
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)dictionaryRepresentationWithDetailLevel:targetContentLevel:;
- (id)initWithRecordingLogEntry:error:;
- (BOOL)_loadInputDrawingFromDictionary:errorMessage:;
- (BOOL)_loadTextInputTargetsFromDictionaries:;
- (BOOL)_loadTargetContentInfoFromDictionary:targets:;
- (BOOL)_loadRecognitionResultFromDictionary:;
@end
