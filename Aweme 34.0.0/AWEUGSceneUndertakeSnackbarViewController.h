@interface AWEUGSceneUndertakeSnackbarViewController : NSObject
@property (nonatomic) AWEUGSceneUndertakeSnackbarView snackbar;
@property (nonatomic) AWEUGSceneUndertakeSnackbarViewModel viewModel;
@property (nonatomic) <AWEUGSceneUndertakeSnackbarViewControllerDelegate> delegate;
- (id)snackbar;
- (void)setSnackbar:;
- (void)setupBinding;
- (void)trackLogWithMessage:;
- (void)setupSnackbar;
- (void)dismissSnackbar;
- (id)initWithViewModel:;
- (id)delegate;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
