@interface PKTextInputDebugRecordingLogEntry : PKTextInputDebugLogEntry
@property (nonatomic) CHTextInputQueryItem _resultQueryItem;
@property (nonatomic) PKDrawing _originalDrawing;
- (void).cxx_destruct;
- (id)inputDrawing;
- (id)dictionaryRepresentationWithDetailLevel:targetContentLevel:;
- (id)initWithResultCommand:;
- (void)_extractDataFromResultCommand:;
- (id)_resultQueryItem;
- (void)set_resultQueryItem:;
- (id)_originalDrawing;
- (void)set_originalDrawing:;
+ (id)_dictionaryRepresentationForDrawing:detailLevel:containsInProgress:;
+ (id)_dictionaryRepresentationForTarget:;
+ (id)_dictionaryRepresentationForTargetContentInfo:elementType:detailLevel:contentLevel:resultAffectedRange:localeIdentifiers:;
@end
