@interface MFMailComposeRemoteViewController : _UIRemoteViewController
@property (nonatomic) <MFMailComposeRemoteViewControllerDelegate> delegate;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (id)delegate;
- (void).cxx_destruct;
- (void)serviceCompositionRequestsSendWithBody:recipients:completion:;
- (void)serviceCompositionFinishedWithResult:error:;
- (void)bodyFinishedDrawing;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:;
@end
