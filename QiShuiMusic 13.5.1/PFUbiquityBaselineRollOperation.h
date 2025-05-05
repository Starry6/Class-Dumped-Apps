@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation
@property (nonatomic) NSObject<PFUbiquityBaselineRollOperationDelegate> delegate;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)main;
- (id)delegate;
- (BOOL)isEqual:;
- (id)retainedDelegate;
@end
