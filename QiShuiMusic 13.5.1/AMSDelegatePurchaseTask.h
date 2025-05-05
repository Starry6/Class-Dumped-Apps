@interface AMSDelegatePurchaseTask : AMSDelegateAuthenticateTask
@property (nonatomic) AMSBiometricsSignatureRequest biometricsRequest;
@property (nonatomic) AMSURLResult delegateAuthResult;
@property (nonatomic) AMSURLTaskInfo delegateAuthTaskInfo;
@property (nonatomic) AMSPaymentSheetResult paymentSheetResult;
@property (nonatomic) AMSDelegatePaymentSheetTask paymentSheetTask;
@property (nonatomic) AMSDelegatePurchaseRequest request;
- (BOOL)cancel;
- (id)request;
- (void).cxx_destruct;
- (void)AMSURLSession:task:handleAuthenticateRequest:completion:;
- (id)initWithDelegatePurchaseRequest:bag:account:;
- (id)performDelegatePurchase;
- (void)_parseBiometricsSignatureRequestFromTask:;
- (id)_parseFormDataFromResult:;
- (id)_performAuthenticateTaskWithPaymentSheetResult:;
- (id)_performAuthenticateTaskWithPaymentSheet;
- (id)_performPaymentSheetTask;
- (id)biometricsRequest;
- (void)setBiometricsRequest:;
- (id)delegateAuthResult;
- (void)setDelegateAuthResult:;
- (id)delegateAuthTaskInfo;
- (void)setDelegateAuthTaskInfo:;
- (id)paymentSheetResult;
- (void)setPaymentSheetResult:;
- (id)paymentSheetTask;
- (void)setPaymentSheetTask:;
@end
