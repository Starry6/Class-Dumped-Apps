@interface AMSDeviceOfferEligibilityTask : NSObject
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString deviceGUID;
@property (nonatomic) AMSURLSession urlSession;
@property (nonatomic) NSString masterSerialNumber;
- (id)urlSession;
- (void)setUrlSession:;
- (id)deviceGUID;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithBag:deviceGUID:masterSerialNumber:urlSession:;
- (id)performAnonymousDeviceEligibility:clientInfo:;
- (id)_deviceEligibilityRequestParametersWithGroups:;
- (id)_deviceEligibilityEncoderWithBag:clientInfo:;
- (id)performAccountEligibility:forOffers:clientInfo:;
- (id)_accountEligibilityRequestParametersWithIdentifiers:;
- (id)_accountEligibilityEncoderWithBag:account:clientInfo:;
- (id)_offersDecodedFromResult:;
- (id)_eligibilityRequest;
- (id)masterSerialNumber;
@end
