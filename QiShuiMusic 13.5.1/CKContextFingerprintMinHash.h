@interface CKContextFingerprintMinHash : CKContextFingerprint
@property (nonatomic) I numHashes;
@property (nonatomic) ^i hashes;
- (void)dealloc;
- (id)data;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)hashes;
- (unsigned int)numHashes;
- (id)initWithHashes:count:;
- (float)compareFingerprintWith:;
+ (BOOL)supportsSecureCoding;
+ (id)parse:;
@end
