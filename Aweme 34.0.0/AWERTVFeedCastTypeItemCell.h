@interface AWERTVFeedCastTypeItemCell : UICollectionViewCell
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVVoipResourceFetcherInterface> resourceFetcher;
@property (nonatomic) BDImageView imageView;
@property (nonatomic) LOTAnimationView lottieView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIStackView titleContainerView;
@property (nonatomic) AWERTVFeedCastTypeItemModel model;
- (void)rxAwakeFromPropertyInjection;
- (id)resourceFetcher;
- (id)lottieView;
- (void)setLottieView:;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)renderModel:;
- (void)setModel:;
- (id)injector;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (id)titleContainerView;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)setTitleContainerView:;
@end
