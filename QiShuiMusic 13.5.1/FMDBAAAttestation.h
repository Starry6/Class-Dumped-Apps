@interface FMDBAAAttestation : NSObject
@property (nonatomic) NSData attestation;
@property (nonatomic) NSData signature;
- (void)setSignature:;
- (id)signature;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)attestation;
- (void)setAttestation:;
- (id)initWithAttestation:signature:;
+ (BOOL)supportsSecureCoding;
@end
