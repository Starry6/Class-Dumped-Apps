@interface FMDPairingCheckCommandResponseInfo : NSObject
@property (nonatomic) NSString signature;
@property (nonatomic) NSString serverNonce;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString statusCode;
@property (nonatomic) NSString lostModeInfo;
@property (nonatomic) NSString useEraseKeyType;
- (void)setStatusCode:;
- (void)setSignature:;
- (id)signature;
- (id)statusCode;
- (id)lostModeInfo;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setLostModeInfo:;
- (id)serverNonce;
- (void)setServerNonce:;
- (id)useEraseKeyType;
- (void)setUseEraseKeyType:;
+ (BOOL)supportsSecureCoding;
@end
