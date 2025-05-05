@interface PKTextInputDebugLogEntryRerun : NSObject
@property (nonatomic) PKTextInputDebugArchivedLogEntry logEntry;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)runWithCompletion:;
- (id)logEntry;
- (id)recognitionManagerStrokeProvider:;
- (id)recognitionManagerTextInputTargets:;
- (id)recognitionManager:textInputTargetForItemStableIdentifier:strokeIdentifiers:simultaneousItemStableIdentifiers:;
- (void)recognitionManager:fetchContentInfoForTextInputTarget:strokeIdentifiers:completion:;
- (void)recognitionManager:recognitionDidFinishWithQueryItems:duration:;
- (id)initWithLogEntry:;
- (void)_finishRerunWithQueryItems:error:;
@end
