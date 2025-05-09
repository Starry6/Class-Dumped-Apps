@interface IESECLiveReplayAvatarComponentView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIButton avatarButton;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) IESECLiveFollowAnimatedButton followButton;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) IESECLiveReplayDataStore dataStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubviews;
- (void)avatarClick;
- (void)dataStoreChanged;
- (id)followButton;
- (void)followClick;
- (void)followStatusChange;
- (double)followWidth;
- (BOOL)isFollow;
- (double)nameWidth;
- (void)playFollowAnimation;
- (void)playFollowAnimationInView:completion:;
- (void)setFollowButton:;
- (double)unFollowWidth;
- (void)setDataStore:;
- (id)dataStore;
- (BOOL)isAnimating;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (double)width;
- (void).cxx_destruct;
- (void)setIsAnimating:;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)avatarButton;
- (void)setAvatarButton:;
@end
