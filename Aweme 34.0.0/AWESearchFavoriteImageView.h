@interface AWESearchFavoriteImageView : UIView
@property (nonatomic) BOOL isLightStyle;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) UIImageView favoriteButton;
@property (nonatomic) LOTAnimationView favoriteAnimationView;
- (void)configureUI;
- (void)setFavoriteButton:;
- (BOOL)isLightStyle;
- (void)setIsFavoriteWithoutAnimation:;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (void)setFavoriteAnimationView:;
- (id)favoriteAnimationView;
- (void)updateFavoriteButtonImage;
- (void)_stopFavoriteAnimation;
- (void)_playFavoriteAnimation;
- (void)_playUnFavoriteAnimation;
- (id)lottieDatafromGecko:;
- (void)setIsLightStyle:;
- (void).cxx_destruct;
- (BOOL)isFavorite;
- (void)layoutSubviews;
- (id)accessKey;
- (void)setIsFavorite:;
- (id)initWithLightStyle:;
- (id)favoriteButton;
@end
