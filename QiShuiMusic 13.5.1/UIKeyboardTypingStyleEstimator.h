@interface UIKeyboardTypingStyleEstimator : NSObject
@property (nonatomic) <UIKeyboardTypingStyleEstimatorDelegate> delegate;
- (void)cancelContinuousPath;
- (void)endedContinuousPath;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)beganContinuousPath;
- (void)_setTypingStyleEstimation:;
- (unsigned long long)currentTypingStyleEstimation;
- (void)tapTypedKey;
@end
