@interface AKASAuthorizationProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <_ASAuthenticationPresentationProvider> presentationProvider;
@property (nonatomic) <_ASAuthenticationProviderLoginRowData> loginRowData;
- (void).cxx_destruct;
- (BOOL)alertHandlerShowAlert:primaryAction:altAction:;
- (void)performAuthorizationWithCompletionHandler:;
- (id)presentationProvider;
- (void)setPresentationProvider:;
- (id)loginRowData;
- (void)passwordAuthenticationCompletedWithResults:error:;
- (id)initWithAppName:teamIdentifier:bundleIdentifier:authorizationRequest:;
- (void)_showPasswordAuthenticationViewController;
- (void)_performAuthorizationWithCompletionHandler:;
- (void)_handleAuthorizationError:;
- (BOOL)_shouldContinueWithPasswordForError:;
@end
