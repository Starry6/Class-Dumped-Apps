@interface AWEECOMIMQuickEntryView : UIView
@property (nonatomic) UICollectionView contentView;
@property (nonatomic) AWEECOMIMQuickEntryModel model;
@property (nonatomic) @? clickCallback;
@property (nonatomic) @? itemShowCallback;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadWithModel:;
- (id)clickCallback;
- (void)setClickCallback:;
- (void)setItemShowCallback:;
- (id)itemShowCallback;
- (void)setModel:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (id)contentView;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (void)setContentView:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
+ (double)imQuickEntryViewHeight;
@end
