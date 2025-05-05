@interface SAClientUserActivity : SAUserActivity
@property (nonatomic) NSArray keywords;
@property (nonatomic) NSArray requiredUserInfoKeys;
@property (nonatomic) NSString title;
@property (nonatomic) NSString type;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) NSURL webpageURL;
- (id)keywords;
- (void)setKeywords:;
- (id)webpageURL;
- (id)groupIdentifier;
- (id)userInfo;
- (void)setWebpageURL:;
- (void)setType:;
- (id)requiredUserInfoKeys;
- (void)setTitle:;
- (void)setRequiredUserInfoKeys:;
- (id)type;
- (id)title;
- (void)setUserInfo:;
- (id)encodedClassName;
+ (id)clientUserActivity;
+ (id)clientUserActivityWithDictionary:context:;
@end
