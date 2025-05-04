@interface AWEScreenShootShareOutsideCell : UICollectionViewCell
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEScreenShootShareViewGroupModel groupModel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGroupModel:;
- (id)groupModel;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (void)setUpCollectionView;
- (long long)collectionView:numberOfItemsInSection:;
- (id)lineView;
- (void)setLineView:;
- (void)setUpUI;
@end
