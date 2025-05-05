@interface VSRecognitionSpeakAction : VSRecognitionAction
- (id)perform;
- (int)completionType;
- (id)initWithSpokenFeedbackString:willTerminate:;
@end
