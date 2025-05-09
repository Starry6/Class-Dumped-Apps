@interface AWEGeneralRelatedSearchWordsCellController : UIViewController
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton feedbackBtn;
@property (nonatomic) UIImageView searchIconView;
@property (nonatomic) UIView searchIconContainerView;
@property (nonatomic) NSArray dataArray;
@property (nonatomic) AWEGeneralSearchModel searchModel;
@property (nonatomic) Q cardStyle;
@property (nonatomic) <AWEModernFeedCellContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isActive;
@property (nonatomic) AWESearchAutoPlayHandler autoPlayHandler;
@property (nonatomic) # cardClass;
- (void)awe_themeReload;
- (void)resetContext:;
- (void)configUI;
- (id)autoPlayHandler;
- (void)setAutoPlayHandler:;
- (BOOL)shouldNotActive;
- (void)didStartShowing;
- (id)searchIconView;
- (BOOL)enableAddTitleIcon;
- (id)searchIconContainerView;
- (id)feedbackBtn;
- (void)setFeedbackBtn:;
- (void)setSearchIconView:;
- (BOOL)titleBold;
- (BOOL)enableFeedbackEntrance;
- (void)feedbackEntranceTrackWithEventName:;
- (void)feedbackClicked;
- (double)cellControllerHeightForSmallCard;
- (void)setSearchIconContainerView:;
- (id)collectionView:layout:insetForSectionAtIndex:;
- (void)didBecomeActive;
- (id)collectionView;
- (double)titleFontSize;
- (void)setIsActive:;
- (id)createCollectionView;
- (double)collectionView:layout:minimumLineSpacingForSectionAtIndex:;
- (double)collectionView:layout:minimumInteritemSpacingForSectionAtIndex:;
- (void)viewWillLayoutSubviews;
- (id)collectionView:cellForItemAtIndexPath:;
- (void)viewDidLoad;
- (void)didResignActive;
- (id)initWithContext:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setTitleLabel:;
- (id)titleTextColor;
- (void)setContext:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (void)viewDidAppear:;
- (id)titleLabel;
- (BOOL)isActive;
- (id)context;
- (id)dataArray;
- (void)setDataArray:;
- (id)activeView;
- (void)setSearchModel:;
- (id)searchModel;
- (void)updateWithModel:;
- (id)fetchContext;
- (unsigned long long)cardStyle;
- (id)createTitleLabel;
- (void)setCardStyle:;
+ (double)modernFeedCellPreferedHeightForModel:width:;
+ (long long)doubleColumnCellCount;
+ (void)__awe__codeRunnerRun___LINE__;
+ (double)cellControllerheightWithArray:width:cardStyle:model:;
+ (double)doubleColumnTopMarginS;
+ (double)titleWordsMarginWithCardStyle:;
+ (double)doubleColumnBottomMarginS;
+ (double)collectionViewHeight:cardStyle:model:;
+ (double)cellHeightWithCardStyle:model:;
+ (double)cellLineSpace;
+ (double)smallRelatedCellNonImageHeightModel:;
+ (double)cellColumnSpace;
+ (double)titleHeight;
@end
