@interface AWEPadAuthorRecommendHeaderView : UICollectionReusableView
@property (nonatomic) AWEPadFeedAuthorRecommendCell authorNo1;
@property (nonatomic) AWEPadFeedAuthorRecommendCell authorNo2;
@property (nonatomic) AWEPadFeedAuthorRecommendCell authorNo3;
@property (nonatomic) UIButton changeButton;
@property (nonatomic) UILabel headerLabel;
@property (nonatomic) <AWEMVPadAuthorRecommendFeedHeaderDelegate> delegate;
- (void)changeButtonClicked:;
- (id)authorNo1;
- (id)authorNo2;
- (id)authorNo3;
- (void)configWithAuthorModels:;
- (void)setAuthorNo1:;
- (void)setAuthorNo2:;
- (void)setAuthorNo3:;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)setHeaderLabel:;
- (id)headerLabel;
- (id)changeButton;
- (void)setChangeButton:;
@end
