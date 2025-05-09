@interface IESLiveSaaSCommercialFengcheService : NSObject
@property (nonatomic) UIView customImageView;
@property (nonatomic) UIImageView<IESLiveWebPPlayer> iconImageView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL shopCartShouldShow;
@property (nonatomic) NSTimer shopCartAnimationReplayTimer;
@property (nonatomic) @? itemShowBlock;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) double enterRoomTimeStamp;
@property (nonatomic) HTSLiveToolbarItem shopCartItem;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL shouldDoAnimation;
- (double)enterRoomTimeStamp;
- (void)handleOrientationIfNeeded;
- (BOOL)isShopCartInToolBar;
- (BOOL)isShopCartShowing;
- (id)itemShowBlock;
- (void)loadShopCartIconWithURL:completion:;
- (BOOL)p_isWebpImage:;
- (void)p_removeFromToolbar;
- (void)p_setupToolBarItem:;
- (BOOL)playStupidAnimation;
- (void)refreshIconOnToolbar;
- (void)refreshToolBar;
- (void)reloadToolbar;
- (void)removeFromToolBar;
- (void)setClickBlock:;
- (void)setEnterRoomTimeStamp:;
- (void)setItemShowBlock:;
- (void)setShopCartAnimationReplayTimer:;
- (void)setShopCartItem:;
- (void)setShopCartShouldShow:;
- (void)setShowBlock:;
- (void)setTrackContext:;
- (id)shopCartAnimationReplayTimer;
- (id)shopCartItem;
- (BOOL)shopCartShouldShow;
- (BOOL)shouldDoAnimation;
- (BOOL)shouldShowCard;
- (void)showInToolBar;
- (void)stopTimerIfNeeded;
- (id)trackContext;
- (void)updateImageViewSize:;
- (BOOL)isAnimating;
- (void).cxx_destruct;
- (id)iconImageView;
- (void)setIsAnimating:;
- (void)setIconImageView:;
- (void)setupUI;
- (void)startTimerIfNeeded;
- (void)setCustomImageView:;
- (id)customImageView;
@end
