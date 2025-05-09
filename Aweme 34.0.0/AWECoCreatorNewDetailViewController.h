@interface AWECoCreatorNewDetailViewController : AWECoCreatorBaseViewController
@property (nonatomic) NSString enterMethod;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWECoCreatorModel coCreatorModel;
@property (nonatomic) AWECoCreatorViewModel viewModel;
@property (nonatomic) UIView topBlackView;
@property (nonatomic) BOOL shouldShowLoading;
@property (nonatomic) BOOL isShowingTabbar;
@property (nonatomic) BOOL hasDismissed;
@property (nonatomic) DUXPartialSheet sheet;
@property (nonatomic) DUXContentSheet padSheet;
@property (nonatomic) <AWECoCreatorPanelDelegate> delegate;
@property (nonatomic) NSMutableSet liveShowedSet;
@property (nonatomic) UIView loadingContainer;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) BOOL needLoadMore;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView titleContainerView;
@property (nonatomic) UIImageView hintView;
@property (nonatomic) UIImageView coCreatorNormalHintView;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) BOOL hasSlideTrack;
@property (nonatomic) @? landscapeEnterProfilePageBlock;
@property (nonatomic) @? landscapeEnterChatPageBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)partialSheetDidDismiss:;
- (void)partialSheet:didChangeFrame:withUserInteraction:;
- (void)partialSheetWillDismiss:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (void)loadMore;
- (id)aAWEPadModuleAdapter;
- (void)dismissLoadingView;
- (id)coCreatorModel;
- (void)setCoCreatorModel:;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (id)aAWEPadBizUIAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)needLoadMore;
- (id)aAWEFeedModuleServiceDOUYINAdaper;
- (id)loadingContainer;
- (void)setLoadingContainer:;
- (void)setupTableViewFooter;
- (void)reloadCoCreatorViewControllerWithModel:;
- (void)setLandscapeEnterChatPageBlock:;
- (void)setLandscapeEnterProfilePageBlock:;
- (BOOL)isShowingTabbar;
- (void)setIsShowingTabbar:;
- (void)partialSheetWillShow:;
- (id)topBlackView;
- (void)configureTopBlackView;
- (void)setTopBlackView:;
- (void)trackShowCoCreatorPanel:enterMethod:;
- (void)trackPanelPopupShow;
- (void)configureModel:referString:enterMethod:fromPage:coCreatorModel:;
- (BOOL)enableLargeCoActivityOptiStyle;
- (void)addTitleLabelWithView:title:awemeType:;
- (void)addBackgroundImageViewIfNeedWithView:;
- (void)setPadSheet:;
- (void)requestCoCreatorInfoIfNeeded;
- (void)requestUserIsInCoCreatorListIfNeeded;
- (void)setNeedLoadMore:;
- (void)refreshWithModel:coCreatorModel:;
- (id)padSheet;
- (id)coCreatorNormalHintView;
- (void)updateTitleLabelLayoutOnPad;
- (void)trackShowCoCreatorStatementEntrance:;
- (void)trackClickCoCreatorStatement:;
- (void)trackClickCoCreatorStatementEntrance:;
- (BOOL)canShrinkVideo;
- (BOOL)hasSlideTrack;
- (void)trackPanelSlide;
- (void)setHasSlideTrack:;
- (void)trackShowLiveAvatarView:;
- (id)landscapeEnterChatPageBlock;
- (id)landscapeEnterProfilePageBlock;
- (void)hintImageTapped;
- (void)coCreatorNormalHintImageTapped;
- (void)trackCoCreatorStatement:withTrackName:;
- (id)liveShowedSet;
- (void)setLiveShowedSet:;
- (id)initWithLandscape:;
- (void)setCoCreatorNormalHintView:;
- (void)setModel:;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)dealloc;
- (id)delegate;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)setLoadingView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)tableView;
- (id)loadingView;
- (void)viewDidDisappear:;
- (id)model;
- (void)setTitleLabel:;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)viewDidAppear:;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (id)titleLabel;
- (void)setDelegate:;
- (id)backgroundImageView;
- (id)titleContainerView;
- (void)configureSubviews;
- (void)setIsLandscape:;
- (BOOL)isLandscape;
- (void)setBackgroundImageView:;
- (id)hintView;
- (void)setHintView:;
- (void)setTitleContainerView:;
- (void)showLoadingView;
- (BOOL)hasDismissed;
- (void)setHasDismissed:;
- (void)dismissSheet;
- (id)sheet;
- (void)setShouldShowLoading:;
- (BOOL)shouldShowLoading;
- (void)setSheet:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadBizUIAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINAdaperClass;
+ (void)showOnPadWithModel:referString:enterMethod:fromPage:coCreatorModel:delegate:;
+ (void)showWithModel:referString:enterMethod:fromPage:coCreatorModel:delegate:;
@end
