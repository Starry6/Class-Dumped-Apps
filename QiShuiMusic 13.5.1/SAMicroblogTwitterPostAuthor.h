@interface SAMicroblogTwitterPostAuthor : SADomainObject
@property (nonatomic) q followersCount;
@property (nonatomic) NSString fullName;
@property (nonatomic) NSURL profileImageUrl;
@property (nonatomic) NSString screenName;
@property (nonatomic) NSNumber userId;
@property (nonatomic) BOOL verified;
- (id)fullName;
- (id)groupIdentifier;
- (id)userId;
- (void)setFullName:;
- (id)encodedClassName;
- (void)setUserId:;
- (BOOL)verified;
- (void)setVerified:;
- (long long)followersCount;
- (void)setFollowersCount:;
- (id)profileImageUrl;
- (void)setProfileImageUrl:;
- (id)screenName;
- (void)setScreenName:;
+ (id)twitterPostAuthor;
+ (id)twitterPostAuthorWithDictionary:context:;
@end
