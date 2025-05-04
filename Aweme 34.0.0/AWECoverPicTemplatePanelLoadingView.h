@interface AWECoverPicTemplatePanelLoadingView : UIView
@property (nonatomic) UIView<ACCLoadingViewProtocol> loadingView;
@property (nonatomic) UIView failContentView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UIButton reloadBtn;
@property (nonatomic) Q loadingStatus;
@property (nonatomic) @? reloadBlk;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (id)reloadBtn;
- (void)setReloadBtn:;
- (void)setReloadBlk:;
- (id)failContentView;
- (id)reloadBlk;
- (void)reloadBtnClick:;
- (void)setFailContentView:;
- (unsigned long long)loadingStatus;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (void)setLoadingStatus:;
- (void).cxx_destruct;
- (void)setupUI;
@end
