@interface AWESearchCardFavorButton : AWESearchCardInteractorButton
@property (nonatomic) AWESearchCardFavorModel model;
@property (nonatomic) BOOL favorAnimationInProgress;
@property (nonatomic) UIView<_TtP9AWELottie13AWELottieView_> favoriteAnimationView;
- (void)removeAnimation;
- (void)setFavoriteAnimationView:;
- (id)favoriteAnimationView;
- (void)setFavorAnimationInProgress:;
- (void)updateFavorCount;
- (void)addFavorAnimation;
- (void)addUnFavorAnimation;
- (void)stopFavorAnimation;
- (void)stopUnFavorAnimation;
- (BOOL)favorAnimationInProgress;
- (void)startFavorAnimation;
- (void)startUnFavorAnimation;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
