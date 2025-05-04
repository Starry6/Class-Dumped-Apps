@interface AWEMVExtendedConsumptionHotspotBarView : UIView
@property (nonatomic) UIImageView leftIconImageView;
@property (nonatomic) UIView contentContainerView;
@property (nonatomic) YYLabel leftContentLabel;
@property (nonatomic) YYLabel rightContentLabel;
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
- (id)rightContentLabel;
- (void)setRightContentLabel:;
- (id)leftContentLabel;
- (void)setLeftContentLabel:;
- (id)contentContainerView;
- (void)setContentContainerView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setupUI;
- (void)handleTap:;
- (void)setCurrentModel:;
@end
