@interface ASCPublicKeyCredentialDescriptor : NSObject
@property (nonatomic) NSData credentialID;
@property (nonatomic) NSArray transports;
@property (nonatomic) BOOL hasInternalTransport;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)transports;
- (id)copyWithZone:;
- (id)initWithCredentialID:transports:;
- (id)credentialID;
- (BOOL)hasInternalTransport;
+ (BOOL)supportsSecureCoding;
@end
