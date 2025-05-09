@interface AWELongVideoMultipleEpisodeView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel updateTimeLabel;
@property (nonatomic) UIView topLine;
@property (nonatomic) UIStackView guideContainer;
@property (nonatomic) UIImageView guideIcon;
@property (nonatomic) UILabel guideTitle;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) AWEListDataController<AWELongVideoDataControllerProtocol> dataController;
@property (nonatomic) AWELandscapePageContext pageContext;
@property (nonatomic) AWELandscapeCellContext cellContext;
@property (nonatomic) NSArray episodeList;
@property (nonatomic) NSString titleUnit;
@property (nonatomic) DUXDivider divider;
@property (nonatomic) UIView bottomView;
@property (nonatomic) DUXButton buyButton;
@property (nonatomic) # longVideoUtil;
@property (nonatomic) UIView titleContainerView;
@property (nonatomic) UIView tagBackgroundView;
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) <AWELandscapeLVideoAlbumViewDelegate> delegate;
@property (nonatomic) BOOL isEpisodePanelShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataController:;
- (id)episodeList;
- (void)setEpisodeList:;
- (id)tagLabel;
- (void)setTagLabel:;
- (Class)longVideoUtil;
- (id)guideTitle;
- (id)guideIcon;
- (void)setGuideIcon:;
- (void)setGuideTitle:;
- (void)scrollToLocatedCell;
- (id)buyButton;
- (void)updateWithPageContext:cellContext:;
- (void)setIsEpisodePanelShow:;
- (void)setTagBackgroundView:;
- (id)tagBackgroundView;
- (void)setLongVideoUtil:;
- (void)addPanelBottomPaymentBtnIfNeeded;
- (void)trackPurchaseFullEpisodeWithEvent:;
- (void)didClickBuyButtonAction;
- (void)setBuyButton:;
- (void)addPanelTopPaymentTagIfNeeded:;
- (BOOL)isAppointmentVideo;
- (void)setTitleUnit:;
- (id)titleUnit;
- (void)showXiguaGuideTitleIfNeeded;
- (id)guideContainer;
- (void)setBuyButtonTitleWithAlbumInfo:;
- (BOOL)isEpisodePanelShow;
- (void)setUpdateTimeLabel:;
- (void)setGuideContainer:;
- (id)collectionView;
- (id)init;
- (id)delegate;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)numberOfSectionsInCollectionView:;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)setCollectionView:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (long long)collectionView:numberOfItemsInSection:;
- (id)collectionView:layout:sizeForItemAtIndexPath:;
- (id)titleLabel;
- (void)setDelegate:;
- (id)bottomView;
- (id)titleContainerView;
- (void)setupUI;
- (void)setBottomView:;
- (void)setTitleContainerView:;
- (void)setPageContext:;
- (id)pageContext;
- (id)divider;
- (id)dataController;
- (id)topLine;
- (void)setDivider:;
- (void)setTopLine:;
- (id)updateTimeLabel;
- (void)setCellContext:;
- (id)cellContext;
@end
