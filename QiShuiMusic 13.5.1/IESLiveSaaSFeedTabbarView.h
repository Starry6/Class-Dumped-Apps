@interface IESLiveSaaSFeedTabbarView : UIView
@property (nonatomic) IESLiveSaaSFeedTabModel tabModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) CAGradientLayer maskLayer;
@property (nonatomic) q selectedIndex;
@property (nonatomic) <IESLiveSaaSFeedTabbarViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithTabModel:;
- (void)setTabModel:;
- (id)tabModel;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (long long)collectionView:numberOfItemsInSection:;
- (long long)selectedIndex;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setSelectedIndex:;
- (id)maskLayer;
- (void)setupViews;
- (void)setMaskLayer:;
@end
