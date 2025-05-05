@interface SSVFairPlaySAPContext : NSObject
@property (nonatomic) BOOL complete;
- (BOOL)isComplete;
- (id)signData:error:;
- (void)dealloc;
- (void)_teardownSession;
- (id)primingSignatureForData:error:;
- (BOOL)verifyPrimeSignature:error:;
- (id)exchangeData:error:;
- (BOOL)verifySignature:forData:error:;
- (id)initWithSAPVersion:;
@end
