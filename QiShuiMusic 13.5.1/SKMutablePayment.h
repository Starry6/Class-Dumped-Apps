@interface SKMutablePayment : SKPayment
@property (nonatomic) BOOL isStoreOriginated;
@property (nonatomic) NSString partnerIdentifier;
@property (nonatomic) NSString partnerTransactionIdentifier;
@property (nonatomic) NSDictionary requestParameters;
@property (nonatomic) SKPaymentAppleIDAuthorizationRequest appleIDAuthorizationClientInfo;
@property (nonatomic) NSString applicationUsername;
@property (nonatomic) SKPaymentDiscount paymentDiscount;
@property (nonatomic) NSString productIdentifier;
@property (nonatomic) q quantity;
@property (nonatomic) NSData requestData;
@property (nonatomic) BOOL simulatesAskToBuyInSandbox;
- (void)setQuantity:;
- (void)setRequestParameters:;
- (void)setPartnerTransactionIdentifier:;
- (void)setIsStoreOriginated:;
- (void)setApplicationUsername:;
- (void)setProductIdentifier:;
- (void)setPartnerIdentifier:;
- (void)setAppleIDAuthorizationClientInfo:;
- (void)setPaymentDiscount:;
- (void)setSimulatesAskToBuyInSandbox:;
- (void)setRequestData:;
@end
