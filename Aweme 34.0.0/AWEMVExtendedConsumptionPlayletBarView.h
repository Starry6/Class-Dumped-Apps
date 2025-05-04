@interface AWEMVExtendedConsumptionPlayletBarView : UIView
@property (nonatomic) UIImageView leftIconImageView;
@property (nonatomic) UIView contentContainerView;
@property (nonatomic) YYLabel mainContentLabel;
@property (nonatomic) DUXTag tagView;
@property (nonatomic) UIImageView rightArrowImageView;
@property (nonatomic) AWEMVExtendedConsumptionModel currentModel;
@property (nonatomic) @? clickAction;
- (id)clickAction;
- (void)setClickAction:;
- (void)configWithModel:;
- (id)leftIconImageView;
- (void)setLeftIconImageView:;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (id)mainContentLabel;
- (void)setMainContentLabel:;
- (id)contentContainerView;
- (void)setContentContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setupUI;
- (void)handleTap:;
- (void)setCurrentModel:;
- (id)tagView;
- (void)setTagView:;
@end
