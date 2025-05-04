@interface AWELongPressAdsActionCell : UITableViewCell
@property (nonatomic) UIButton dislikeButton;
@property (nonatomic) UIButton likeButton;
- (id)dislikeButton;
- (void)setDislikeButton:;
- (void)dislikeButtonDidSelected;
- (void)likeButtonDidSelected;
- (void)adsActionViewDismiss;
- (void)dislikeButtonClick;
- (void)likeButtonClick;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)likeButton;
- (void)setLikeButton:;
- (void)setUpUI;
@end
