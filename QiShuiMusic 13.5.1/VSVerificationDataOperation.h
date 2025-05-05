@interface VSVerificationDataOperation : VSAsyncOperation
@property (nonatomic) VSOptional result;
@property (nonatomic) AKAnisetteProvisioningController provisioningController;
- (id)result;
- (void)executionDidBegin;
- (void)_finishWithError:;
- (id)init;
- (void)_finishWithData:;
- (void).cxx_destruct;
- (void)setResult:;
- (id)provisioningController;
- (void)setProvisioningController:;
- (void)_finishWithResult:bytes:length:;
@end
