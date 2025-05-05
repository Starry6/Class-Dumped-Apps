@interface HTSAddPaymentParameters : NSObject
@property (nonatomic) @? successBlock;
@property (nonatomic) @? failureBlock;
- (id)failureBlock;
- (void)setFailureBlock:;
- (void).cxx_destruct;
- (id)successBlock;
- (void)setSuccessBlock:;
@end
