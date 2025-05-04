@interface AWELiveUserFollowButton : UIView
@property (nonatomic) UIButton actionButton;
@property (nonatomic) UIImage followBgImage;
@property (nonatomic) BOOL isFollowAnim;
@property (nonatomic) @? tapHandler;
- (void)didClickButton:;
- (void)playFollowAnimationWithCompletion:;
- (void)loadSubViews;
- (id)followBgImage;
- (BOOL)isFollowAnim;
- (void)setIsFollowAnim:;
- (id)buttonBgImageWithColorArray:;
- (void)setFollowBgImage:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)actionButton;
- (void)setActionButton:;
- (void)setTapHandler:;
- (id)tapHandler;
@end
