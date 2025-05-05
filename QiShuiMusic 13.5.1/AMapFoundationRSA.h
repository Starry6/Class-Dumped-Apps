@interface AMapFoundationRSA : NSObject
- (id)encryptToString:;
- (id)encryptWithData:;
- (id)encryptWithString:;
- (id)initWithPublicKeyData:;
- (id)initWithPublicKeyPath:;
- (id)initWithPublicKeyString:;
- (BOOL)verifyBytesSHA256withRSA:signature:;
- (void)dealloc;
+ (id)addPublicKey:;
+ (id)stripPublicKeyHeader:;
@end
