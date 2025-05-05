@interface WBSAutoFillPasskey : NSObject
@property (nonatomic) NSString username;
@property (nonatomic) NSString relyingPartyIdentifier;
@property (nonatomic) WBSPublicKeyCredentialIdentifier identifier;
@property (nonatomic) NSUUID operationUUID;
- (id)username;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)operationUUID;
- (void).cxx_destruct;
- (id)relyingPartyIdentifier;
- (id)initWithUsername:relyingPartyIdentifier:identifier:operationUUID:;
+ (BOOL)supportsSecureCoding;
@end
