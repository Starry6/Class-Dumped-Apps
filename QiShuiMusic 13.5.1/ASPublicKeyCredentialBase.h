@interface ASPublicKeyCredentialBase : NSObject
@property (nonatomic) NSData rawClientDataJSON;
@property (nonatomic) NSData credentialID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)credentialID;
- (id)rawClientDataJSON;
- (id)initWithCredentialID:rawClientDataJSON:;
+ (BOOL)supportsSecureCoding;
@end
