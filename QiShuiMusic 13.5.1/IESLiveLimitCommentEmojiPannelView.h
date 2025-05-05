@interface IESLiveLimitCommentEmojiPannelView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) HTSLiveFixedChatSyncData limitData;
@property (nonatomic) NSMutableArray fixedEmojiListArray;
@property (nonatomic) @? limitCommentPageEmojiCellClickCallBack;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fixedEmojiListArray;
- (id)limitCommentPageEmojiCellClickCallBack;
- (id)limitData;
- (void)setFixedEmojiListArray:;
- (void)setLimitCommentPageEmojiCellClickCallBack:;
- (void)setLimitData:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (id)initWithFrame:;
- (void)setCollectionView:;
- (void).cxx_destruct;
- (void)setData:;
- (BOOL)collectionView:shouldSelectItemAtIndexPath:;
- (id)collectionView;
- (void)setupUI;
@end
