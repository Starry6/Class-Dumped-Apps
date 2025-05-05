@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand
@property (nonatomic) NSString explicitUserPermission;
@property (nonatomic) NSString socialNetwork;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)explicitUserPermission;
- (void)setExplicitUserPermission:;
- (id)socialNetwork;
- (void)setSocialNetwork:;
+ (id)getSocialCredential;
+ (id)getSocialCredentialWithDictionary:context:;
@end
