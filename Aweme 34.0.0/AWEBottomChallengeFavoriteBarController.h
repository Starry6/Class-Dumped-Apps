@interface AWEBottomChallengeFavoriteBarController : NSObject
@property (nonatomic) AWEBottomChallengeFavoriteBarContext context;
@property (nonatomic) UIView bottomView;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel challengeNameLabel;
@property (nonatomic) UIButton favoriteButton;
@property (nonatomic) BOOL requestFavoriteOnAir;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateBottomBarWithAweme:updateTiming:;
- (BOOL)canShowBottomBarForAweme:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)onReceiveChallengeFavoriteChanged:;
- (void)setFavoriteButton:;
- (id)challengeNameLabel;
- (void)setChallengeNameLabel:;
- (BOOL)checkNetworkConnected;
- (void)setRequestFavoriteOnAir:;
- (BOOL)requestFavoriteOnAir;
- (void)onFavoriteButtonTapped_IMP:;
- (void)trackFavoriteButtonTapped:;
- (void)onFavoriteButtonTapped:;
- (void)addFavoriteNotificationObserver;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)bottomView;
- (void)setBottomView:;
- (Class)contextClass;
- (id)favoriteButton;
- (id)bottomBarView;
@end
