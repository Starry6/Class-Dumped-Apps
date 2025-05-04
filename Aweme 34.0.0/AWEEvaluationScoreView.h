@interface AWEEvaluationScoreView : UIView
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) UIButton sameButton;
@property (nonatomic) NSMutableArray buttonArray;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UILabel scoreLabel;
@property (nonatomic) AWEEvaluationRatingView ratingView;
- (void)setButtonArray:;
- (id)buttonArray;
- (void)p_configRatingView;
- (void)p_configChooseButton;
- (id)sameButton;
- (id)createButtonWithTitle:size:;
- (void)setSameButton:;
- (void)setupUIWithTaskMode:measurement:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)leftButton;
- (id)initWithFrame:;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)ratingView;
- (void)setRatingView:;
- (id)scoreLabel;
- (void)setScoreLabel:;
@end
