@interface AWECommentQuickCommentView : UIView
@property (nonatomic) UICollectionView quickCommentBar;
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) AWECommentQuickCommentHelper quickCommentHelper;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__setupUI;
- (id)quickCommentHelper;
- (id)transferHotWordString:;
- (void)setQuickCommentHelper:;
- (double)precaculateCellWidthForHotWord:;
- (id)quickCommentBar;
- (void)setQuickCommentBar:;
- (void)reloadData;
- (void)setRootViewController:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)rootViewController;
@end
