@interface EDiCloudAliasSupport : NSObject
@property (nonatomic) ACAccount appleAccount;
@property (nonatomic) NSURL aliasLookupURL;
@property (nonatomic) NSString aliasUserAgent;
@property (nonatomic) NSString aliasAuthorizationHeader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_prepareAliasDataForEmailAddresses:defaultEmailAddress:;
- (id)appleAccount;
- (void)pushUpdateForAliasDataWithEmailAddresses:defaultEmailAddress:;
- (id)anisetteDataWithError:;
- (id)initWithAppleAccount:;
- (void).cxx_destruct;
- (id)aliasUserAgent;
- (id)aliasLookupURL;
- (id)aliasAuthorizationHeader;
+ (id)log;
@end
