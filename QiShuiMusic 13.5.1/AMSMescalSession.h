@interface AMSMescalSession : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> dispatchQueue;
- (id)_loadCertificateDataWithBag:error:;
- (void)_resetSession;
- (id)_cachedCertData;
- (id)dispatchQueue;
- (BOOL)_shouldRetryFairPlayForError:;
- (id)_establishContextWithBag:error:;
- (id)signData:bag:error:;
- (id)primeSignatureForData:bag:error:;
- (BOOL)verifyPrimeSignature:error:;
- (void).cxx_destruct;
- (id)_postExchangeData:bag:error:;
- (BOOL)verifyData:withSignature:bag:error:;
- (BOOL)_cacheCertData:expiration:;
- (id)_cachedCertPath;
- (BOOL)_verifyEntitlements;
- (id)initWithType:;
+ (id)sessionWithType:;
+ (id)primeSession;
+ (id)defaultSession;
@end
