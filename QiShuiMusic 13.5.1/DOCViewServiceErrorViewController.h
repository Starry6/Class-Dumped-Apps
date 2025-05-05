@interface DOCViewServiceErrorViewController : UIViewController
@property (nonatomic) <DOCViewServiceErrorViewControllerDelegate> delegate;
@property (nonatomic) NSString errorTitle;
@property (nonatomic) NSString errorSubtitle;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
- (id)errorTitle;
- (void)setErrorTitle:;
- (void)didTapTryAgainInErrorView:;
- (id)errorSubtitle;
- (void)setErrorSubtitle:;
@end
