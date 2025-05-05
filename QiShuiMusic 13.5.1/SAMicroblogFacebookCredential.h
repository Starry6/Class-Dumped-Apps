@interface SAMicroblogFacebookCredential : SAMicroblogSocialCredential
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)facebookCredential;
+ (id)facebookCredentialWithDictionary:context:;
@end
