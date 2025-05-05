@interface WBSCredentialIdentityMatch : NSObject
@property (nonatomic) SFPasswordCredentialIdentity credentialIdentity;
@property (nonatomic) NSExtension extension;
@property (nonatomic) SFSafariCredential resolvedCredential;
@property (nonatomic) NSString completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)completion;
- (id)extension;
- (void).cxx_destruct;
- (id)credentialIdentity;
- (id)initWithCredentialIdentity:extension:;
- (id)resolvedMatchWithCredential:;
- (id)resolvedCredential;
@end
