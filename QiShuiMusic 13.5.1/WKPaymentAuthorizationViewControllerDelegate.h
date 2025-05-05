@interface WKPaymentAuthorizationViewControllerDelegate : WKPaymentAuthorizationDelegate
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)paymentAuthorizationViewControllerDidFinish:;
- (void)paymentAuthorizationViewController:didAuthorizePayment:handler:;
- (void)paymentAuthorizationViewController:didChangeCouponCode:handler:;
- (void)paymentAuthorizationViewController:didSelectShippingMethod:handler:;
- (void)paymentAuthorizationViewController:didSelectShippingContact:handler:;
- (void)paymentAuthorizationViewController:didSelectPaymentMethod:handler:;
- (void)paymentAuthorizationViewController:willFinishWithError:;
- (void)paymentAuthorizationViewController:didRequestMerchantSession:;
- (id)initWithRequest:presenter:;
- (void)_getPaymentServicesMerchantURL:;
@end
