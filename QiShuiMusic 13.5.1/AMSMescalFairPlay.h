@interface AMSMescalFairPlay : NSObject
@property (nonatomic) BOOL complete;
- (BOOL)isComplete;
- (id)signData:error:;
- (void)dealloc;
- (id)_dataWithFairPlayBytes:length:;
- (id)initWithMescalType:error:;
- (void)_teardownSession;
- (id)primingSignatureForData:error:;
- (BOOL)verifyPrimeSignature:error:;
- (id)exchangeData:error:;
- (BOOL)verifySignature:forData:error:;
@end
