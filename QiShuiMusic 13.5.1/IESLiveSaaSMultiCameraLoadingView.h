@interface IESLiveSaaSMultiCameraLoadingView : UIView
@property (nonatomic) IESLiveSaaSWebpLoadingView loadingIndicator;
@property (nonatomic) UILabel toastLabel;
@property (nonatomic) UIView playerBackgroundView;
- (id)playerBackgroundView;
- (void)setPlayerBackgroundView:;
- (void)setToastLabel:;
- (id)toastLabel;
- (id)init;
- (void).cxx_destruct;
- (void)setupUI;
- (id)loadingIndicator;
- (void)setLoadingIndicator:;
@end
