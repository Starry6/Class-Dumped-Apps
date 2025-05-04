@interface AWEProfileHeaderGuestFollowAreaCell : UICollectionViewCell
@property (nonatomic) DUXButton followButton;
@property (nonatomic) @? iconProvider;
@property (nonatomic) q followStatus;
- (long long)followStatus;
- (void)setFollowStatus:;
- (void)didClickFollowButton;
- (id)followButton;
- (void)setFollowButton:;
- (void)updateWithFollowStatus:;
- (id)initWithFrame:;
- (void)setup;
- (id)iconProvider;
- (void).cxx_destruct;
- (void)setIconProvider:;
@end
