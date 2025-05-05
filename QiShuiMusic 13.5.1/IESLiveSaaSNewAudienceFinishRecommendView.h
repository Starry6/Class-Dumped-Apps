@interface IESLiveSaaSNewAudienceFinishRecommendView : UIView
@property (nonatomic) UICollectionView colllectionView;
@property (nonatomic) NSArray recommendList;
@property (nonatomic) @? onClickRoom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)colllectionView;
- (void)setOnClickRoom:;
- (id)onClickRoom;
- (void)p_renderView;
- (id)recommendList;
- (void)setColllectionView:;
- (void)setRecommendList:;
- (id)init;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (void)updateWithModel:;
@end
