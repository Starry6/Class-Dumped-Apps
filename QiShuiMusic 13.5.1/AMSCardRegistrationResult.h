@interface AMSCardRegistrationResult : NSObject
@property (nonatomic) NSData cardData;
@property (nonatomic) NSURL brokerURL;
@property (nonatomic) NSURL paymentServicesURL;
- (void).cxx_destruct;
- (id)initWithCardRegistrationResponse:;
- (id)cardData;
- (id)brokerURL;
- (id)paymentServicesURL;
@end
