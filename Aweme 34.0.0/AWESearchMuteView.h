@interface AWESearchMuteView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView muteImage;
@property (nonatomic) BOOL isShorten;
- (id)muteImage;
- (void)startAutoHideIfNeeded;
- (void)openMuteAbility;
- (void)shortenAnimation;
- (void)setMuteFrame;
- (void)closeMuteAbility;
- (void)shortenWithoutAnimation;
- (void)setIsShorten:;
- (BOOL)isShorten;
- (void)setMuteImage:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setUpUI;
@end
