@interface AWEUGSnackbarViewController : NSObject
@property (nonatomic) AWEUGSceneUndertakeSnackbarView snackbar;
@property (nonatomic) AWEUGSnackbarViewModel viewModel;
@property (nonatomic) <AWEUGSnackbarViewControllerDelegate> delegate;
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
