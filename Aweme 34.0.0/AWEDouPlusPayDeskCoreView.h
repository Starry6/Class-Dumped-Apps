@interface AWEDouPlusPayDeskCoreView : UIView
@property (nonatomic) UIImageView douplusIconView;
@property (nonatomic) UILabel douplusValueLabel;
@property (nonatomic) UILabel moneyLabel;
@property (nonatomic) UILabel orderNumberLabel;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UILabel promptLabel;
@property (nonatomic) q sceneType;
@property (nonatomic) <AWEDouPlusPayDeskCoreViewDelegate> delegate;
@property (nonatomic) AWEDouPlusPayDeskModel dataModel;
- (id)confirmBtn;
- (void)setConfirmBtn:;
- (id)moneyLabel;
- (void)setMoneyLabel:;
- (void)updateSubViewsLayout;
- (id)douplusIconView;
- (id)douplusValueLabel;
- (id)orderNumberLabel;
- (void)confirmBtnClicked:;
- (void)setDouplusIconView:;
- (void)setDouplusValueLabel:;
- (void)setOrderNumberLabel:;
- (id)promptLabel;
- (id)delegate;
- (void)setPromptLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)dataModel;
- (void)setDataModel:;
- (void)setupUI;
- (long long)sceneType;
- (void)setSceneType:;
@end
