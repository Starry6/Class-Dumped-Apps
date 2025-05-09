@interface UIKeyboardAutomatic : UIKeyboard
@property (nonatomic) <UITextCursorAssertion> blinkAssertion;
@property (nonatomic) _UIStringAndPositionPair lastMatchedSupplementalCandidate;
@property (nonatomic) _UIStringAndPositionPair pendingSupplementalCandidateToInsert;
@property (nonatomic) Q lastChooseSupplementalItemToInsertCallbackIdentifier;
@property (nonatomic) BOOL showsCandidateBar;
@property (nonatomic) BOOL receivedCandidatesInCurrentInputMode;
@property (nonatomic) BOOL showsCandidateInline;
- (void)minimize;
- (void)setLastMatchedSupplementalCandidate:;
- (void)setBlinkAssertion:;
- (void)setShowsCandidateInline:;
- (void)setLastChooseSupplementalItemToInsertCallbackIdentifier:;
- (void)setShowsCandidateBar:;
- (id)lastMatchedSupplementalCandidate;
- (void)didSuspend:;
- (void)maximize;
- (void)dealloc;
- (void)setReceivedCandidatesInCurrentInputMode:;
- (id)pendingSupplementalCandidateToInsert;
- (BOOL)showsCandidateBar;
- (void)willResume:;
- (unsigned long long)lastChooseSupplementalItemToInsertCallbackIdentifier;
- (void)setPendingSupplementalCandidateToInsert:;
- (BOOL)receivedCandidatesInCurrentInputMode;
- (BOOL)showsCandidateInline;
- (id)blinkAssertion;
- (BOOL)_isAutomaticKeyboard;
- (void)prepareForImplBoundsHeightChange:suppressNotification:;
- (id)initWithFrame:;
- (BOOL)isAutomatic;
- (void).cxx_destruct;
- (id)geometryForHeightDelta:;
- (void)implBoundsHeightChangeDone:suppressNotification:;
- (BOOL)isActive;
- (void)activate;
+ (id)sharedInstance;
+ (id)activeInstance;
@end
