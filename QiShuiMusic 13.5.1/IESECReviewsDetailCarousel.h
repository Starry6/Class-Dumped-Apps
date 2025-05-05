@interface IESECReviewsDetailCarousel : UIView
@property (nonatomic) <IESECReviewsDetailCarouselDelegate> delegate;
@property (nonatomic) IESECReviewsDetailPlayerManager playerManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)playerManager;
- (void)setPlayerManager:;
- (void)updateWithCarouselModel:;
- (void)willBecomeMainResponder;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (void)setupSubviews;
@end
