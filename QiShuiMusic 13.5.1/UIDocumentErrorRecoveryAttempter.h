@interface UIDocumentErrorRecoveryAttempter : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)attemptRecoveryFromError:optionIndex:;
- (id)initWithDocument:wrappedRecoveryAttempter:;
- (id)initWithDocument:silentRecoveryOptionIndex:appModalRecoveryAttempter:recoveryCanceler:;
- (BOOL)attemptSilentRecoveryFromError:error:;
- (void)cancelRecovery;
@end
