@interface ASORemoteViewController : _UIRemoteViewController
@property (nonatomic) <ASORemoteViewControllerDelegate> delegate;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (id)delegate;
- (void).cxx_destruct;
@end
