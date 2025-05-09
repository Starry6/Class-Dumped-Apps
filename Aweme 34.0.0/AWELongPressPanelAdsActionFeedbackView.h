@interface AWELongPressPanelAdsActionFeedbackView : UIView
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIButton submitButton;
@property (nonatomic) Q actionType;
@property (nonatomic) NSArray sectionArray;
@property (nonatomic) NSMutableArray selectedItems;
@property (nonatomic) NSArray subFilterItems;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWELongPressAdsActionFlowLayout flowLayout;
@property (nonatomic) UIView popoverView;
@property (nonatomic) UICollectionView popoverCollectionView;
@property (nonatomic) AWELongPressPanelAdsInputView adFullScreenInputView;
@property (nonatomic) q inputViewSection;
@property (nonatomic) BOOL inputViewIsShowing;
@property (nonatomic) NSString inputContentString;
@property (nonatomic) NSMutableArray subSelectedItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIScrollView scrollView;
- (id)sectionArray;
- (void)setSectionArray:;
- (void)setPopoverView:;
- (void)updateSubmitButtonTitle;
- (id)itemModelAtIndexPath:;
- (id)handleSelectedItems;
- (void)submitButtonClicked;
- (id)aAWEFeedDOUYINiPadModuleAdapter;
- (id)popoverCollectionView;
- (void)setInputViewSection:;
- (void)setInputViewIsShowing:;
- (void)handlePanelDidDismiss:;
- (void)likeWithMethodType:;
- (void)dislikeWithMethodType:;
- (double)popoverCellHeight;
- (void)loadFullScreenInputView;
- (id)adFullScreenInputView;
- (void)setInputContentString:;
- (void)loadPopoverViewWithSharpOffset:height:;
- (id)initWithActionType:model:;
- (id)subFilterItems;
- (void)setSubFilterItems:;
- (void)setPopoverCollectionView:;
- (void)setAdFullScreenInputView:;
- (long long)inputViewSection;
- (BOOL)inputViewIsShowing;
- (id)inputContentString;
- (id)subSelectedItems;
- (void)setSubSelectedItems:;
- (id)collectionView:layout:referenceSizeForFooterInSection:;
- (void)setModel:;
- (id)popoverView;
- (unsigned long long)actionType;
- (id)collectionView:layout:referenceSizeForHeaderInSection:;
- (void)setActionType:;
- (id)collectionView;
- (void)setScrollView:;
- (void)dealloc;
- (void)collectionView:didDeselectItemAtIndexPath:;
- (id)collectionView:viewForSupplementaryElementOfKind:atIndexPath:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)setCollectionView:;
- (id)scrollView;
- (id)model;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)flowLayout;
- (void)setFlowLayout:;
- (void)setupViews;
- (id)selectedItems;
- (void)setSelectedItems:;
- (void)configData;
- (void)setSubmitButton:;
- (id)submitButton;
+ (Class)aAWEFeedDOUYINiPadModuleAdapterClass;
@end
