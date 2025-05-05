@interface AMSSigningSecurityService : NSObject
@property (nonatomic) <AMSDServiceBrokerProtocol> serviceBroker;
- (id)init;
- (id)_defaultSecurityServiceWithDelegate:;
- (id)handleResponse:bag:;
- (id)serviceBroker;
- (void)_handleSecurityServicePromise:onConnected:onDenied:onError:;
- (id)signatureForRequest:;
- (id)_headersForRequest:buyParams:bag:securityServicePromise:onDenied:;
- (id)_handleResponse:bag:securityServicePromise:onDenied:;
- (void).cxx_destruct;
- (id)headersForRequest:buyParams:bag:;
- (id)initWithServiceBroker:;
@end
