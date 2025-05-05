@interface IESLiveSaaSRoomProfileFollowButton : UIView
@property (nonatomic) UIButton actionButton;
@property (nonatomic) IESLiveSaaSRoomProfileOperationViewModel viewModel;
@property (nonatomic) UIImage followBgImage;
@property (nonatomic) BOOL isFollowAnim;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didClickButton:;
- (id)followTextColor;
- (id)buttonBgImageWithColorArray:;
- (id)followBgImage;
- (BOOL)isFollowAnim;
- (void)loadSubViews;
- (void)playFollowAnimationWithCompletion:;
- (void)setFollowBgImage:;
- (void)setIsFollowAnim:;
- (void)viewDidHideFromContainer:;
- (void)viewDidShowOnContainer:;
- (id)viewModel;
- (id)initWithViewModel:;
- (id)viewSize;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)actionButton;
- (void)setActionButton:;
@end
