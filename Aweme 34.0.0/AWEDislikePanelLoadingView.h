@interface AWEDislikePanelLoadingView : UIView
@property (nonatomic) UIView<AWEUILoadingViewProtocol> loadingView;
@property (nonatomic) DUXButton closeButton;
@property (nonatomic) @? closeBlock;
- (void)setCloseBlock:;
- (id)closeBlock;
- (void)didClickedClose;
- (id)init;
- (void)startLoading;
- (void)setLoadingView:;
- (void)stopLoading;
- (id)loadingView;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
@end
