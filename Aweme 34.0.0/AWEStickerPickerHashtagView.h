@interface AWEStickerPickerHashtagView : UIView
@property (nonatomic) UILabel label;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) <AWEStickerPickerHashtagViewDelegate> delegate;
@property (nonatomic) NSArray hashtagsList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)p_titleLabelSizeWithTitle:;
- (id)hashtagsList;
- (BOOL)enableTagWidthOpt;
- (void)setHashtagsList:;
- (void)setLabel:;
- (id)collectionView;
- (id)init;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)label;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (void)setupSubviews;
@end
