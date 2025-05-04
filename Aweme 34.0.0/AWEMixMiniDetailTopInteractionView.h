@interface AWEMixMiniDetailTopInteractionView : AWESingleColumnDetailTopInteractionView
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIView topTitleView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithAwemeModel:;
- (id)topTitleView;
- (void)setTopTitleView:;
- (id)backButton;
- (void)setModel:;
- (void)setBackButton:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
@end
