@interface UITextCursorAssertionController : NSObject
@property (nonatomic) <UITextCursorAssertionControllerSubject> subject;
- (id)nonVisibleAssertionWithReason:;
- (id)subject;
- (void)dealloc;
- (void)setSubject:;
- (void)_beginTrackingAssertion:;
- (void)_updateSubjectWithAssertionState;
- (id)debugDescription;
- (id)nonBlinkingGhostAssertionWithReason:;
- (void).cxx_destruct;
- (id)_createAssertionWithReason:options:;
- (void)_endTrackingAssertion:;
- (id)nonBlinkingAssertionWithReason:;
@end
