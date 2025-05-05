@interface SAMicroblogGetTwitterCredential : SAMicroblogGetSocialCredential
@property (nonatomic) NSString consumerKey;
@property (nonatomic) NSString consumerSecret;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)consumerKey;
- (void)setConsumerKey:;
- (id)consumerSecret;
- (void)setConsumerSecret:;
+ (id)getTwitterCredential;
+ (id)getTwitterCredentialWithDictionary:context:;
@end
