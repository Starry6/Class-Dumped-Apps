@interface IESLiveSaaSReddotButton : UIButton
@property (nonatomic) UIView badge;
@property (nonatomic) UIColor reddotColor;
- (void)setReddotColor:;
- (id)createBadgeWithSize:trailingOffset:;
- (void)liveSetBadgeHidden:;
- (void)liveSetBadgeSize:trailingOffset:;
- (id)reddotColor;
- (id)badge;
- (void)setBadge:;
- (void).cxx_destruct;
@end
