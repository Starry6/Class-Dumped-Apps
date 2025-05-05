@interface SAMicroblogSinaWeiboCredential : SAMicroblogSocialCredential
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)sinaWeiboCredential;
+ (id)sinaWeiboCredentialWithDictionary:context:;
@end
