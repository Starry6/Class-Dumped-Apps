@interface AMSAutomaticDownloadKindsSetTask : AMSTask
@property (nonatomic) AMSURLSession session;
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) AMSProcessInfo clientInfo;
@property (nonatomic) NSArray enabledMediaKinds;
@property (nonatomic) <AMSRequestPresentationDelegate> presentationDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (void)setClientInfo:;
- (void)setSession:;
- (void)AMSURLSession:task:handleDialogRequest:completion:;
- (id)presentationDelegate;
- (id)clientInfo;
- (id)session;
- (void).cxx_destruct;
- (id)bag;
- (void)AMSURLSession:task:handleAuthenticateRequest:completion:;
- (id)perform;
- (id)enabledMediaKinds;
- (id)initWithEnabledMediaKinds:account:bag:presentationDelegate:;
- (id)initWithEnabledMediaKinds:account:bag:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@end
