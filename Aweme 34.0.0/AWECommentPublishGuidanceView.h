@interface AWECommentPublishGuidanceView : UIView
@property (nonatomic) BOOL shouldShowReplys;
@property (nonatomic) @? miniEmoticonItemSelected;
@property (nonatomic) NSArray recommendReplys;
@property (nonatomic) @? fetchDataSource;
@property (nonatomic) @? cellWillDisplay;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (BOOL)shouldShowReplys;
- (id)miniEmoticonItemSelected;
- (void)setMiniEmoticonItemSelected:;
- (id)recommendReplys;
- (void)setRecommendReplys:;
- (id)cellWillDisplay;
- (void)setCellWillDisplay:;
- (void)setContentOffsetZero:;
- (void)reloadEmoticonOrder;
- (id)currentEmoticonsString;
- (id)fetchDataSource;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setFetchDataSource:;
- (id)initWithCoder:;
@end
