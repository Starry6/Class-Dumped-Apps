@interface AWEIMEmoticonReplyPanelView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIPageControl pageControl;
@property (nonatomic) Q expansion;
@property (nonatomic) AWEIMCollectionListModel listModel;
@property (nonatomic) @? didSelectViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDidSelectViewModel:;
- (id)didSelectViewModel;
- (id)firstIndexPathForVisibleRect;
- (void)didChangePage;
- (void)setPageControl:;
- (id)initWithLayout:;
- (id)collectionView;
- (id)pageControl;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (void)setListModel:;
- (void)scrollViewDidScroll:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)listModel;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (unsigned long long)expansion;
- (void)setExpansion:;
+ (double)panelViewHeight;
+ (id)defaultPanel;
@end
