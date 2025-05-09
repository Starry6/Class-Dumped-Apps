@interface AWESearchFilterCollectionView : UIView
@property (nonatomic) AWESearchFilterCollectionViewCell templateCell;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UICollectionViewFlowLayout flowLayout;
@property (nonatomic) NSArray words;
@property (nonatomic) NSArray models;
@property (nonatomic) AWEGuideSearchWordsExtraModel guideSearchWordsExtra;
@property (nonatomic) BOOL threeLayoutSign;
@property (nonatomic) double curCollectionViewHeight;
@property (nonatomic) <AWESearchFilterCollectionViewDelegate> delegate;
@property (nonatomic) q selectedIndex;
@property (nonatomic) double fontSize;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double minWidth;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemResius;
@property (nonatomic) AWESearchFilterCollectionViewColorConfiguration colorConfiguration;
@property (nonatomic) BOOL limitTextNum;
@property (nonatomic) BOOL isFromFilter;
@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL needBold;
@property (nonatomic) @? rowOfCollectionView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLeftPadding:;
- (void)setRightPadding:;
- (BOOL)isNewStyle;
- (void)setIsNewStyle:;
- (void)updateWithWords:selectedIndex:;
- (void)newSetupUI;
- (id)templateCell;
- (void)setTemplateCell:;
- (id)guideSearchWordsExtra;
- (void)setGuideSearchWordsExtra:;
- (unsigned long long)visibleGSWordsCnt;
- (void)updateWithWords:selectedIndex:extraModel:;
- (BOOL)limitTextNum;
- (BOOL)isFromFilter;
- (id)colorConfiguration;
- (BOOL)needBold;
- (void)setNeedBold:;
- (void)setColorConfiguration:;
- (double)itemResius;
- (id)rowOfCollectionView;
- (void)setCurCollectionViewHeight:;
- (double)curCollectionViewHeight;
- (void)updateWithModels:selectedIndex:;
- (void)setItemResius:;
- (void)setIsFromFilter:;
- (double)getNewStyleHeight;
- (void)updateItemSize;
- (void)setLimitTextNum:;
- (void)setRowOfCollectionView:;
- (BOOL)threeLayoutSign;
- (void)setThreeLayoutSign:;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (id)collectionView;
- (double)fontSize;
- (id)delegate;
- (double)itemSpacing;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (id)initWithFrame:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (double)minWidth;
- (void)setFontSize:;
- (void)setItemSpacing:;
- (long long)selectedIndex;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setModels:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (void)setMinWidth:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)setDelegate:;
- (id)models;
- (id)flowLayout;
- (void)setFlowLayout:;
- (void)setWords:;
- (void)setupUI;
- (id)words;
- (double)leftPadding;
- (double)rightPadding;
+ (double)collectionViewHeight;
@end
