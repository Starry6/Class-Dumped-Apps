@interface WBSPasswordBreachCryptographicOperations : NSObject
- (void)dealloc;
- (id)_bucketIdentifierWithBitCount:ofData:;
- (id)generateFakeEncodedPasswordForHighFrequencyBucket;
- (id)generateFakeEncodedPasswordForLowFrequencyBucket;
- (id)encodePasswordForLowFrequencyBucket:;
- (id)_encodePasswordForLowFrequencyBucket:withHashSmoothingBits:;
- (id)unblindHash:;
- (id)_blindPasswordHash:;
- (void).cxx_destruct;
- (id)encodePasswordForHighFrequencyBucket:;
- (id)_exportHashToCurve:;
- (id)initWithConfiguration:;
- (id)_hashToCurve:;
- (id)_exportKeyFromCryptor:;
+ (BOOL)isValidScryptHashWorkFactor:blockSizeR:parallelismFactorP:;
@end
