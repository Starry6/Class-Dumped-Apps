@interface SAMicroblogSocialCredential : AceObject
@property (nonatomic) NSString accessToken;
@property (nonatomic) NSString personalizationPermission;
@property (nonatomic) NSString socialNetwork;
@property (nonatomic) NSString tokenSecret;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)accessToken;
- (id)encodedClassName;
- (void)setAccessToken:;
- (id)socialNetwork;
- (void)setSocialNetwork:;
- (id)personalizationPermission;
- (void)setPersonalizationPermission:;
- (id)tokenSecret;
- (void)setTokenSecret:;
+ (id)socialCredential;
+ (id)socialCredentialWithDictionary:context:;
@end
