@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction
- (id)init;
- (void)dealloc;
- (int)completionType;
- (id)initWithModelIdentifier:;
- (void)_setConfirmed:;
- (void)setConfirmedAction:;
- (id)confirmedAction;
- (void)setDeniedAction:;
- (id)deniedAction;
@end
