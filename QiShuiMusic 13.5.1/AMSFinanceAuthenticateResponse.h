@interface AMSFinanceAuthenticateResponse : NSObject
@property (nonatomic) NSDictionary dialogDictionary;
@property (nonatomic) AMSFinanceDialogResponse dialogResponse;
@property (nonatomic) AMSAuthenticateRequest authenticateRequest;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)authenticateRequest;
- (id)performWithTaskInfo:;
- (id)initWithResponseDictionary:taskInfo:;
- (id)_locateActionableButtonUsingDialogResponse:;
- (id)dialogDictionary;
- (void)setDialogDictionary:;
- (id)dialogResponse;
+ (unsigned long long)authenticationTypeForResponse:responseDictionary:;
+ (id)performAuthFromResponse:taskInfo:;
+ (id)_authenticateRequestWithAuthType:taskInfo:dialogResponse:serviceIdentifier:;
+ (id)_performAuthRequest:actionResult:redirectURL:taskInfo:;
+ (void)_handleDialogFromAuthError:taskInfo:;
+ (id)_presentAuthRequest:taskInfo:;
+ (id)_serviceIdentifierForResponse:taskInfo:;
+ (void)_updateTaskWithAuthedAccount:taskInfo:;
+ (void)_updateTaskWithLastCredentialSource:taskInfo:;
@end
