@interface AMSMescalAccountPrimeSession : NSObject
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) AMSMescalSession session;
- (void)setSession:;
- (id)initWithBag:;
- (void)setBag:;
- (id)session;
- (void).cxx_destruct;
- (id)bag;
- (id)primeSignatureForData:;
- (id)signData:;
- (id)verifyPrimeSignature:;
@end
