@interface SFAuthenticationViewController : SFSafariViewController
@property (nonatomic) @? dismissCompletionHandler;
@property (nonatomic) <SFAuthenticationViewControllerPresentationDelegate> presentationDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentationDelegate;
- (void)setPresentationDelegate:;
- (void)dismissViewControllerAnimated:completion:;
- (void).cxx_destruct;
- (id)dismissCompletionHandler;
- (void)setDismissCompletionHandler:;
- (void)setDefersAddingRemoteViewController:;
- (id)initWithURL:callbackURLScheme:usingEphemeralSession:presentationContextWindow:;
- (id)initWithURL:callbackURLScheme:usingEphemeralSession:jitEnabled:presentationContextWindow:;
- (void)_presentViewController;
- (void)_restartServiceViewController;
- (void)remoteViewController:hostApplicationOpenURL:;
- (void)remoteViewController:didDecideCookieSharingForURL:shouldCancel:;
+ (BOOL)_supportsPrewarming;
@end
