@interface AWERVLVAnchorView : UIView
@property (nonatomic) UICollectionView anchorContainerView;
@property (nonatomic) NSArray anchorInfoList;
@property (nonatomic) @? itemShow;
@property (nonatomic) @? itemClick;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)anchorContainerView;
- (void)setAnchorContainerView:;
- (void)setAnchorInfoList:;
- (void)setItemShow:;
- (void)setItemClick:;
- (id)anchorInfoList;
- (id)itemShow;
- (id)itemClick;
- (id)init;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setupUI;
- (void)updateWithModel:;
@end
