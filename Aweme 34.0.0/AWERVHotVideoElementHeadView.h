@interface AWERVHotVideoElementHeadView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView rightArrowImageView;
@property (nonatomic) AWERVDetailPageContext pageContext;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) @? tapBlock;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setTapBlock:;
- (id)tapBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (id)initWithFrame:pageContext:;
- (void)configWithModel:hotSpotModel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setupUI;
- (void)setPageContext:;
- (id)pageContext;
- (void)tapAction;
@end
