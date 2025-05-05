@interface WKPaymentAuthorizationControllerDelegate : WKPaymentAuthorizationDelegate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)paymentAuthorizationControllerDidFinish:;
- (void)paymentAuthorizationController:didAuthorizePayment:handler:;
- (void)paymentAuthorizationController:didChangeCouponCode:handler:;
- (void)paymentAuthorizationController:didSelectShippingMethod:handler:;
- (void)paymentAuthorizationController:didSelectShippingContact:handler:;
- (void)paymentAuthorizationController:didSelectPaymentMethod:handler:;
- (void)paymentAuthorizationController:willFinishWithError:;
- (void)paymentAuthorizationController:didRequestMerchantSession:;
- (id)initWithRequest:presenter:;
- (void)_getPaymentServicesMerchantURL:;
@end
