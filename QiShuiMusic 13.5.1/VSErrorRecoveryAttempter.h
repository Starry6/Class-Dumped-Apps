@interface VSErrorRecoveryAttempter : NSObject
@property (nonatomic) NSOperationQueue recoveryAttemptingQueue;
@property (nonatomic) NSArray options;
- (void)setOptions:;
- (id)init;
- (id)options;
- (void).cxx_destruct;
- (void)attemptRecoveryFromError:optionIndex:delegate:didRecoverSelector:contextInfo:;
- (BOOL)attemptRecoveryFromError:optionIndex:;
- (id)recoveryAttemptingQueue;
- (void)setRecoveryAttemptingQueue:;
@end
