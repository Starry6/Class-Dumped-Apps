@interface AWESearchFeelGoodBottomDialogView : AWESearchFeelGoodElementView
@property (nonatomic) AWESearchFeelGoodBottomDialogContentView contentView;
@property (nonatomic) @? showCompletion;
@property (nonatomic) AWESearchFeelGoodDataModel model;
- (id)showCompletion;
- (void)setShowCompletion:;
- (BOOL)isOnlySupportLightMode;
- (void)setIsOnlySupportLightMode:;
- (void)p_dismissEntranceWithAnimation:;
- (void)p_showEntrnceView;
- (void)dismissEntrance;
- (void)showEntrnceViewWithModel:completion:;
- (void)dismissPopups;
- (void)feedbackViewTapped;
- (void)setModel:;
- (id)init;
- (id)contentView;
- (id)model;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setupUI;
- (void)setupConfig;
@end
