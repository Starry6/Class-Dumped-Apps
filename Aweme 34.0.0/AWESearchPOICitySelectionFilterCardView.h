@interface AWESearchPOICitySelectionFilterCardView : UIView
@property (nonatomic) YYLabel titleLabel;
@property (nonatomic) UICollectionView citySelectionHorizontalList;
@property (nonatomic) UIView gradientView;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) NSIndexPath selectedIndexPath;
@property (nonatomic) AWESearchPOICitySelectionFilterCardModel model;
@property (nonatomic) AWESearchCachalotResultContext cachalotContext;
@property (nonatomic) <AWESearchPOICitySelectionFilterCardDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cachalotContext;
- (void)setCachalotContext:;
- (void)setCitySelectionHorizontalList:;
- (id)citySelectionHorizontalList;
- (BOOL)addGradientViewIfNeed;
- (BOOL)callDelegateCanSelectLinkedCityMethodWithModel:;
- (void)callDelegateDidSelectLinkedCityMethodWithModel:;
- (BOOL)callDelegateCanCancelSelectCityMethodWithModel:;
- (void)callDelegateDidCancelSelectCityMethodWithModel:;
- (BOOL)callDelegateCanSelectCityMethodWithModel:;
- (void)callDelegateDidSelectCityMethodWithModel:;
- (void)setModel:;
- (id)gradientView;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setGradientView:;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (id)componentView;
- (id)selectedIndexPath;
- (void)setGradientLayer:;
- (void)setSelectedIndexPath:;
- (void)setupUI;
- (void)updateWithViewModel:;
+ (id)titleWithModel:;
+ (id)sizeWithViewModel:width:;
+ (double)titleLeftSpacing;
+ (double)titleRightSpacing;
+ (id)sizeInfoObject;
+ (double)citySelectionHorizontalListMinimumInteritemSpacing;
+ (id)citySelectionHorizontalListSectionInset;
+ (double)citySelectionHorizontalListLeftSpacing;
+ (double)citySelectionHorizontalListRightSpacing;
+ (double)titleHeightWithValue:width:;
+ (double)titleTopSpacingWithModel:;
+ (double)citySelectionHorizontalListHeightWithModel:;
+ (double)citySelectionHorizontalListTopSpacing;
+ (double)bottomSpacingWithModel:;
+ (void)setSizeInfoObject:;
+ (id)backgroundColorWithModel:;
+ (BOOL)gradientViewHiddenWithModel:;
+ (id)gradientColorsArrayWithModel:;
+ (id)trailLinkedTextColor;
+ (id)trailLinkedTextFont;
+ (id)titleColor;
+ (id)titleFont;
@end
