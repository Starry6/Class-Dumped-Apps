@interface UIDictationStreamingOperations : NSObject
@property (nonatomic) NSMutableArray operations;
- (id)operations;
- (id)pop;
- (id)init;
- (BOOL)isEmpty;
- (void)setDocument:;
- (void)popAndInvoke;
- (void).cxx_destruct;
- (void)setOperations:;
- (unsigned long long)selectionChangeDelta;
- (void)clearOperations;
- (BOOL)hasOperations;
- (double)delayAfterSelector:;
- (void)pushSpeechOperation:;
- (void)pushSpeechOperationWithSelectionChangeDelta:block:;
- (void)performSelectRangeForSpeech:;
- (void)dictationWillBeginInDocument:;
- (void)pushSelectRangeForSpeech:;
- (void)pushInsertTextForSpeech:;
- (void)_performReplaceSelectedText:;
- (void)pushReplaceSelectionWithText:;
- (void)willEndEditingInInputDelegate:;
- (BOOL)isNotEmpty;
@end
