@interface SAMicroblogSocialCredentialResult : SABaseCommand
@property (nonatomic) SAMicroblogSocialCredential socialCredential;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)socialCredential;
- (void)setSocialCredential:;
+ (id)socialCredentialResult;
+ (id)socialCredentialResultWithDictionary:context:;
@end
