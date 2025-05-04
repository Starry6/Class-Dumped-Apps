@interface AWEIMFansGroupContributionCardStyleCollectionViewCell : AWEIMFansGroupCardStyleCollectionViewCell
@property (nonatomic) UILabel beyondDescLabel;
@property (nonatomic) UILabel beyondDataTextLabel;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEIMFansGroupContributionViewModel viewModel;
- (void)configWithViewModel:;
- (void)__updateUI;
- (id)beyondDescLabel;
- (id)beyondDataTextLabel;
- (void)setBeyondDescLabel:;
- (void)setBeyondDataTextLabel:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
+ (id)identifier;
@end
