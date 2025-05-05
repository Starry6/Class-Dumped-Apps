@interface TIAutoshiftController : NSObject
@property (nonatomic) TITextInputTraits textInputTraits;
@property (nonatomic) BOOL enabled;
- (id)textInputTraits;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)isEnabled;
- (id)initWithTextInputTraits:;
- (unsigned long long)actionForDocumentState:inputMangerState:;
- (BOOL)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:inputManagerState:;
@end
