@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation
@property (nonatomic) NSObject<PFUbiquityBaselineRollResponseOperationDelegate> delegate;
- (void)setDelegate:;
- (void)main;
- (id)delegate;
- (id)retainedDelegate;
@end
