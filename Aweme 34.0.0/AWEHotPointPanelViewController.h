@interface AWEHotPointPanelViewController : AWEHotPointPanelBaseViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIPanGestureRecognizer handlerPanGes;
@property (nonatomic) AWEHotPointPanelTableViewController tableVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panelViewController;
- (void)setPanelViewController:;
- (id)closeButtonImage;
- (void)updatePanelLayoutWithCurrentModel:;
- (BOOL)shouldShowHotWordsRecommend;
- (void)showRecommendView;
- (void)hideRecommendView;
- (void)doSpecificUIConfig;
- (long long)effectViewStyle;
- (id)handlerPanGes;
- (void)setHandlerPanGes:;
- (id)tableVC;
- (void)setTableVC:;
- (double)titleHeight;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)titleLabelText;
@end
