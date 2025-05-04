@interface AWEChallengeStarBillBoardLabel : UIView
@property (nonatomic) UIImageView rankBackgroundImageView;
@property (nonatomic) UIImageView textBackgroundImageView;
@property (nonatomic) AWEChallengeStarBillBoardStrokeRankLabel rankLabel;
@property (nonatomic) UIImageView rankPlusIcon;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView moreIcon;
@property (nonatomic) {CGSize=dd} size;
- (void)p_setupUI;
- (id)moreIcon;
- (void)updateWithRank:action:;
- (id)rankBackgroundImageView;
- (id)textBackgroundImageView;
- (id)rankPlusIcon;
- (void)setRankBackgroundImageView:;
- (void)setTextBackgroundImageView:;
- (void)setRankPlusIcon:;
- (void)setMoreIcon:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)size;
- (void).cxx_destruct;
- (void)setSize:;
- (id)titleLabel;
- (id)rankLabel;
- (void)setRankLabel:;
@end
