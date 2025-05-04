@interface AWEMissionPrizeView : UIView
@property (nonatomic) NSMutableArray labels;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) double preferredMaxLayoutWidth;
- (id)prizeIconColorForLevel:;
- (void)updateWithPrizeDescriptions:;
- (id)labels;
- (id)stackView;
- (void)setStackView:;
- (void)setPreferredMaxLayoutWidth:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (double)preferredMaxLayoutWidth;
- (void)setLabels:;
@end
