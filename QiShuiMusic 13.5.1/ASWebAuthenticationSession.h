@interface ASWebAuthenticationSession : NSObject
@property (nonatomic) <ASWebAuthenticationPresentationContextProviding> presentationContextProvider;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (nonatomic) BOOL canStart;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancel;
- (BOOL)start;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)setPresentationContextProvider:;
- (void)authorizationController:didCompleteWithAuthorization:;
- (void)authorizationController:didCompleteWithError:;
- (id)presentationAnchorForAuthorizationController:;
- (id)initWithURL:callbackURLScheme:completionHandler:;
- (id)initWithURL:callbackURLScheme:usingEphemeralSession:completionHandler:;
- (id)initWithURL:callbackURLScheme:usingEphemeralSession:jitEnabled:completionHandler:;
- (BOOL)prefersEphemeralWebBrowserSession;
- (void)setPrefersEphemeralWebBrowserSession:;
- (BOOL)canStart;
- (BOOL)_startDryRun:;
- (id)presentationContextProvider;
+ (void)resetSSOExtensionIdentifier;
+ (void)handleSSOExtensionIdentifier:;
@end
