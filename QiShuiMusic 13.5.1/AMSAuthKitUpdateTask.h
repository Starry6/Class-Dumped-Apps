@interface AMSAuthKitUpdateTask : AMSTask
@property (nonatomic) <AMSAuthKitUpdateTaskDelegate> delegate;
@property (nonatomic) ACAccount account;
@property (nonatomic) AMSAuthenticateOptions options;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (void)setDelegate:;
- (id)options;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)authenticationController:shouldContinueWithAuthenticationResults:error:forContext:;
- (unsigned long long)_authenticationType;
- (id)initWithAccount:options:;
- (id)performAuthKitUpdate;
- (BOOL)_canPresentBackgroundPrompt;
- (void)_configureAuthKitContext:;
- (void)_configureClientInfoForContext:;
- (void)_configureCompanionDeviceForContext:;
- (void)_configureIdentifiersForContext:;
- (void)_configureProxyIdentifiersForContext:;
- (void)_configureStringsForContext:;
- (id)_createAuthKitContext;
- (id)_createAuthKitController;
- (void)_logPromptSummaryForResults:context:;
+ (void)_updateAccountRawPasswordUsingSecondaryAccounts:;
@end
