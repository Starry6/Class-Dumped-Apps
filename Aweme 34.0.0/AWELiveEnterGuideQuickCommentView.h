@interface AWELiveEnterGuideQuickCommentView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) NSArray dataSource;
@property (nonatomic) Q commentType;
@property (nonatomic) @? quickCommentClickedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCommentType:;
- (void)setQuickCommentClickedBlock:;
- (id)quickCommentClickedBlock;
- (void)updateCommentEmojiArray:;
- (void)updateCommentArray:;
- (void)updateCommentArray:commentEmojiArray:;
- (id)collectionView;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDataSource:;
- (id)dataSource;
- (void)setupUI;
- (unsigned long long)commentType;
@end
