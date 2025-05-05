@interface AMSBiometricsSignatureTask : AMSTask
@property (nonatomic) AMSBiometricsSignatureRequest request;
- (id)initWithRequest:;
- (id)request;
- (void).cxx_destruct;
- (id)performSignature;
- (id)_performSignatureOutOfProcess;
- (id)_performSignatureInProcess;
- (BOOL)_performCardEnrollmentCheck:;
@end
