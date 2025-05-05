@interface ISStoreAuthenticateOperation : ISOperation
@property (nonatomic) @ parentViewController;
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) SSAuthenticateResponse authenticateResponse;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)uniqueKey;
- (void)dealloc;
- (id)authenticationContext;
- (id)authenticatedAccountDSID;
- (void)run;
- (id)parentViewController;
- (void)setParentViewController:;
- (id)authenticateResponse;
- (id)initWithAuthenticationContext:;
- (void)_handleAuthenticateResponse:;
+ (BOOL)_copyErrorForAuthenticateResponse:error:;
@end
