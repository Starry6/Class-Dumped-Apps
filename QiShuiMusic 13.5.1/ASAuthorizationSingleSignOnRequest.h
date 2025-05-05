@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest
@property (nonatomic) NSArray authorizationOptions;
@property (nonatomic) BOOL userInterfaceEnabled;
- (id)initWithProvider:;
- (void)setAuthorizationOptions:;
- (void).cxx_destruct;
- (id)authorizationOptions;
- (BOOL)supportsStyle:;
- (BOOL)isUserInterfaceEnabled;
- (void)setUserInterfaceEnabled:;
@end
