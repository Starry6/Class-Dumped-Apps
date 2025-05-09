@interface CoreDAVDiscoveryAccountInfo : NSObject
@property (nonatomic) NSString host;
@property (nonatomic) NSString serverRoot;
@property (nonatomic) NSString password;
@property (nonatomic) NSString user;
@property (nonatomic) q port;
@property (nonatomic) NSData identityPersist;
@property (nonatomic) NSString scheme;
@property (nonatomic) NSURL principalURL;
@property (nonatomic) NSString accountID;
@property (nonatomic) NSDictionary serverHeaders;
@property (nonatomic) NSSet serverComplianceClasses;
@property (nonatomic) NSString userAgentHeader;
@property (nonatomic) BOOL shouldFailAllTasks;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL success;
@property (nonatomic) NSError error;
@property (nonatomic) <CoreDAVAccountInfoProvider> backingAccountInfoProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUser:;
- (id)principalURL;
- (void)setStarted:;
- (void)setPassword:;
- (id)url;
- (id)password;
- (void)setScheme:;
- (id)accountID;
- (BOOL)started;
- (id)scheme;
- (id)host;
- (void)setAccountID:;
- (void)setHost:;
- (void)setError:;
- (long long)port;
- (void)setPort:;
- (id)error;
- (BOOL)success;
- (void)setSuccess:;
- (id)userAgentHeader;
- (id)additionalHeaderValues;
- (id)user;
- (void).cxx_destruct;
- (id)clientToken;
- (id)description;
- (void)clientTokenRequestedByServer;
- (void)setPrincipalURL:;
- (id)serverRoot;
- (id)serverComplianceClasses;
- (BOOL)handleCertificateError:;
- (id)customConnectionProperties;
- (id)oauthInfoProvider;
- (id)identityPersist;
- (BOOL)shouldFailAllTasks;
- (id)copyStorageSession;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)handleTrustChallenge:completionHandler:;
- (id)getAppleIDSession;
- (id)clientCertificateInfoProvider;
- (BOOL)shouldRetryUnauthorizedTask:;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)renewCredential;
- (BOOL)handleAuthenticateAgainstProtectionSpace:;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)shouldHandleHTTPCookiesForURL:;
- (BOOL)shouldSendClientInfoHeaderForURL:;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:;
- (BOOL)shouldTurnModalOnBadPassword;
- (id)initWithAccountInfoProvider:;
- (void)setServerRoot:;
- (void)setIdentityPersist:;
- (void)setShouldFailAllTasks:;
- (id)backingAccountInfoProvider;
- (void)setBackingAccountInfoProvider:;
- (id)serverHeaders;
- (void)setServerHeaders:;
- (void)setServerComplianceClasses:;
- (void)setUserAgentHeader:;
@end
