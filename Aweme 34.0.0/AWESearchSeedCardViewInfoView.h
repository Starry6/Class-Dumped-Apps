@interface AWESearchSeedCardViewInfoView : UIView
@property (nonatomic) YYLabel title;
@property (nonatomic) UIButton authorInfo;
@property (nonatomic) BDImageView authorImageView;
@property (nonatomic) YYLabel author;
@property (nonatomic) YYLabel createDate;
@property (nonatomic) UIButton likeInfo;
@property (nonatomic) UIButton likeButton;
@property (nonatomic) LOTAnimationView likeAnimationView;
@property (nonatomic) YYLabel likeCountLabel;
@property (nonatomic) q likeCount;
@property (nonatomic) <AWESearchSeedCardViewInfoViewDelegate> delegate;
- (void)setLikeCount:;
- (void)setCreateDate:;
- (void)configUI;
- (id)likeCountLabel;
- (id)authorInfo;
- (void)setAuthorInfo:;
- (id)authorImageView;
- (void)setAuthorImageView:;
- (void)setLikeAnimationView:;
- (id)likeAnimationView;
- (void)playLikeAnimation;
- (void)likeButtonClick;
- (void)setLikeCountLabel:;
- (void)newConfigUI;
- (void)playDisLikeAnimation;
- (long long)syncGetAWESearchSeedShowCreateTime;
- (void)updateLikeNumber:;
- (void)updateClickAnimation:;
- (void)realPlayLikeAnimation;
- (void)realPlayDislikeAnimation;
- (id)showStringFromLongLong:;
- (id)likeInfo;
- (void)realStopLikeAnimation;
- (void)setLikeInfo:;
- (id)author;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)title;
- (void)setAuthor:;
- (void)setDelegate:;
- (void)setTitle:;
- (id)createDate;
- (long long)likeCount;
- (id)likeButton;
- (void)setLikeButton:;
@end
