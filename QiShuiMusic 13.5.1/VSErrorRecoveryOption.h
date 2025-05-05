@interface VSErrorRecoveryOption : NSObject
@property (nonatomic) NSString localizedAlertButtonTitle;
@property (nonatomic) @? attemptHandler;
@property (nonatomic) BOOL destructive;
- (BOOL)isDestructive;
- (void)setDestructive:;
- (void).cxx_destruct;
- (id)localizedAlertButtonTitle;
- (void)setLocalizedAlertButtonTitle:;
- (id)attemptHandler;
- (void)setAttemptHandler:;
@end
