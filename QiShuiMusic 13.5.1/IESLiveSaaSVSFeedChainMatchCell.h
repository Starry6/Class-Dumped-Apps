@interface IESLiveSaaSVSFeedChainMatchCell : IESLiveSaaSVSFeedChainCell
@property (nonatomic) UIImageView matchBackgroundView;
@property (nonatomic) UIImageView leftIconView;
@property (nonatomic) UIImageView rightIconView;
@property (nonatomic) UILabel leftNameLabel;
@property (nonatomic) UILabel rightNameLabel;
@property (nonatomic) UILabel scoreLabel;
@property (nonatomic) UILabel matchTitleLabel;
- (id)matchTitleLabel;
- (id)leftIconView;
- (id)leftNameLabel;
- (id)matchBackgroundView;
- (void)matchHasPoint;
- (id)rightIconView;
- (id)rightNameLabel;
- (void)setCellModel:;
- (void)setLeftIconView:;
- (void)setLeftNameLabel:;
- (void)setMatchBackgroundView:;
- (void)setMatchTitleLabel:;
- (void)setRightIconView:;
- (void)setRightNameLabel:;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setupSubviews;
- (id)scoreLabel;
- (void)setScoreLabel:;
@end
