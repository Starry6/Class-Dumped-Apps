@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation
@property (nonatomic) NSObject<PFUbiquityBaselineRecoveryOperationDelegate> delegate;
- (void)setDelegate:;
- (void)main;
- (id)delegate;
- (BOOL)isEqual:;
- (id)retainedDelegate;
@end
