@interface SAMicroblogTwitterCredential : SAMicroblogSocialCredential
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)twitterCredential;
+ (id)twitterCredentialWithDictionary:context:;
@end
