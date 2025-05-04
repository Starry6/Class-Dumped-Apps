@interface AWEMusicPlayerCollectionView : UIView
@property (nonatomic) LOTAnimationView collectAnimationView;
@property (nonatomic) UIButton collectionButton;
- (void)setCollectionButton:;
- (id)collectionButton;
- (void)setCollectAnimationView:;
- (id)collectAnimationView;
- (void)animeCollectWithType:completion:;
- (void)setAnimationWithTargetType:;
- (id)init;
- (void).cxx_destruct;
- (void)setupView;
@end
