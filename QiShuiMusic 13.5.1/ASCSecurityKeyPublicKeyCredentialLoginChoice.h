@interface ASCSecurityKeyPublicKeyCredentialLoginChoice : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString displayName;
@property (nonatomic) q credentialKind;
@property (nonatomic) WBSPublicKeyCredentialIdentifier identifier;
@property (nonatomic) NSUUID publicKeyCredentialOperationUUID;
@property (nonatomic) Q loginChoiceKind;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)identifier;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)initAssertionPlaceholderChoice;
- (id)initRegistrationChoiceWithOptions:;
- (long long)credentialKind;
- (unsigned long long)loginChoiceKind;
- (id)initWithName:displayName:identifier:publicKeyCredentialOperationUUID:;
- (id)publicKeyCredentialOperationUUID;
- (void)setPublicKeyCredentialOperationUUID:;
- (id)_initWithKind:name:displayName:identifier:publicKeyCredentialOperationUUID:;
+ (BOOL)supportsSecureCoding;
@end
