@interface MLSecureModelDecryptCredential : NSObject
@property (nonatomic) q cryptoKey;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)cryptoKey;
- (void)setCryptoKey:;
+ (BOOL)supportsSecureCoding;
@end
