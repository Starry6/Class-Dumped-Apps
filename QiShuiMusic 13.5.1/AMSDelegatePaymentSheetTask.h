@interface AMSDelegatePaymentSheetTask : AMSPaymentSheetTask
@property (nonatomic) AMSPromise paymentSheetPromise;
@property (nonatomic) AMSDelegatePaymentSheetRequest request;
- (id)initWithRequest:bag:;
- (id)request;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)perform;
@end
