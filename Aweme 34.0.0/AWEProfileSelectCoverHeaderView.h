@interface AWEProfileSelectCoverHeaderView : UICollectionReusableView
@property (nonatomic) Q type;
@property (nonatomic) UILabel leftLabel;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) NSString awemeSourceText;
@property (nonatomic) NSString routerSchema;
- (void)didClickRightButton;
- (id)awemeSourceText;
- (void)setAwemeSourceText:;
- (id)routerSchema;
- (void)setRouterSchema:;
- (void)refreshWithType:;
- (void)setRightButton:;
- (id)initWithFrame:;
- (id)rightButton;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)leftLabel;
- (void)setLeftLabel:;
@end
