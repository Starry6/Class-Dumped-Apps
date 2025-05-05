@interface IESECReviewsDetailCarouselCell : UICollectionViewCell
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSString imageURL;
@property (nonatomic) IESECReviewsDetailPlayerManager playerManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)outerIndexForView:;
- (void)playWithVideoModel:;
- (void)player:didChangePlaybackState:;
- (void)playerControlDidClick:;
- (void)playerIsReadyToPlay:;
- (id)playerManager;
- (void)setPlayerManager:;
- (void)updateContainerToVisible:;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setImageURL:;
- (id)imageURL;
- (void)setupSubviews;
@end
