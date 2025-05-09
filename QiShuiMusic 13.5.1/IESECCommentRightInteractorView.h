@interface IESECCommentRightInteractorView : UIView
@property (nonatomic) UIButton likeButton;
@property (nonatomic) UILabel likeCountLabel;
@property (nonatomic) UIView likeAndCountButton;
@property (nonatomic) BOOL isAnimationing;
@property (nonatomic) IESECCommentMediaItemViewModel model;
@property (nonatomic) @? clickLikeButtonBlock;
@property (nonatomic) Q enterFrom;
- (id)clickLikeButtonBlock;
- (unsigned long long)enterFrom;
- (BOOL)isAnimationing;
- (id)likeAndCountButton;
- (void)likeButtonTapped:;
- (id)likeCountLabel;
- (id)likeCountsFormated:;
- (void)setClickLikeButtonBlock:;
- (void)setEnterFrom:;
- (void)setIsAnimationing:;
- (void)setLikeAndCountButton:;
- (void)setLikeCountLabel:;
- (void)updateLikeButtonStatus:;
- (void)updateViewWithModel:;
- (id)model;
- (void)setModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)likeButton;
- (void)setLikeButton:;
@end
