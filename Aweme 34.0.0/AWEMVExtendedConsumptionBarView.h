@interface AWEMVExtendedConsumptionBarView : UIView
@property (nonatomic) UIImageView leftIconImageView;
@property (nonatomic) YYLabel contentLabel;
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
- (void)updateLeftIconImage:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)currentModel;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)handleTap:;
- (void)setCurrentModel:;
@end
