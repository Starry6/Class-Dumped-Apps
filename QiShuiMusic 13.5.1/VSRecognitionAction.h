@interface VSRecognitionAction : NSObject
- (id)cancel;
- (void)dealloc;
- (id)perform;
- (id)_session;
- (int)completionType;
- (void)_setSession:;
- (BOOL)sensitiveActionsEnabled;
- (id)spokenFeedbackString;
- (id)spokenFeedbackAttributedString;
- (id)resultDisplayString;
- (void)setResultDisplayString:;
- (id)statusDisplayString;
- (void)setStatusDisplayString:;
- (void)setSpokenFeedbackString:;
- (void)setSpokenFeedbackAttributedString:;
- (void)completeWithNextAction:error:;
- (BOOL)_hasDeferredStartCallback;
- (void)_continueAfterDeferredStart;
@end
