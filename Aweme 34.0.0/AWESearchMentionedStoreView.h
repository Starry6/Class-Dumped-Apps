@interface AWESearchMentionedStoreView : UIView
@property (nonatomic) AWESearchRelatedPOIModel model;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) Q index;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout collectionViewLayout;
@property (nonatomic) double titleLabelWidth;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)trackEvent:params:;
- (double)titleLabelWidth;
- (double)titleLabelWidthWithText:;
- (void)setTitleLabelWidth:;
- (double)itemWidthWithModel:;
- (void)trackViewDisplay;
- (void)updateWithAwemeModel:index:;
- (id)iconSizeWithModel:;
- (id)trackBaseParams;
- (void)trackWordsShowWithIndexPath:;
- (void)trackWordsClickWithIndexPath:;
- (void)setIndex:;
- (void)setModel:;
- (unsigned long long)index;
- (id)collectionView;
- (id)init;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setTitleLabel:;
- (id)collectionViewLayout;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setCollectionViewLayout:;
- (void)setupUI;
@end
