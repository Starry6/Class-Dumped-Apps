@interface AWEIMRecentGiphyCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMEmoticonCollectionView collectionView;
@property (nonatomic) IESIMSaaSEmoticonThemeModel themeModel;
@property (nonatomic) AWEIMRecentGiphyEmptyView emptyView;
@property (nonatomic) <AWEIMRecentGiphyCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeEmptyView;
- (void)addEmptyView;
- (void)configWithThemeModel:;
- (void)setThemeModel:;
- (id)themeModel;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setDelegate:;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setCollectionView:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)numberOfSectionsInCollectionView:;
- (id)collectionView;
- (id)emptyView;
- (void)setEmptyView:;
+ (id)identifier;
@end
