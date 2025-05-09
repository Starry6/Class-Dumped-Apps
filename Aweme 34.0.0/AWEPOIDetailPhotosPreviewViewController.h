@interface AWEPOIDetailPhotosPreviewViewController : AWEPOIDetailPhotosPreviewBaseViewController
@property (nonatomic) UIView pageContainer;
@property (nonatomic) UILabel currentPageLabel;
@property (nonatomic) UILabel totalPageLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEUIButton uploadButton;
@property (nonatomic) BOOL shouldShowUploadButton;
@property (nonatomic) BOOL shouldShowCloseButton;
@property (nonatomic) BOOL shouldShowReportButton;
@property (nonatomic) NSString reportSchema;
@property (nonatomic) @? gotoUploadBlock;
@property (nonatomic) AWEPOIDetailPhotosPreviewUploaderInfoView userInfoView;
@property (nonatomic) AWEPOIAlbumCategoryInfoModel model;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) q actualTotalCount;
@property (nonatomic) @? loadMore;
- (void)setEnterFrom:;
- (id)enterFrom;
- (unsigned long long)fadeOutTransitionAllowedTriggerDirection;
- (id)zoomTransitionEndView;
- (unsigned long long)zoomTransitionAllowedTriggerDirection;
- (BOOL)zoomTransitionWantsRemoveSpringAnimation;
- (long long)zoomTransitionItemOffset;
- (id)loadMore;
- (void)clickCloseButton;
- (id)reportSchema;
- (void)setReportSchema:;
- (void)p_setupCloseButton;
- (void)setUserInfoView:;
- (void)setLoadMore:;
- (id)pageContainer;
- (void)setPageContainer:;
- (BOOL)shouldShowUploadButton;
- (void)setShouldShowUploadButton:;
- (id)uploadButton;
- (void)setUploadButton:;
- (void)trackClickReportButton;
- (void)trackShowReportButton;
- (void)loadMorePhotos;
- (void)updateProgressWithPage:total:photo:;
- (void)willDisplayCellWithPhoto:;
- (id)gotoUploadBlock;
- (void)setGotoUploadBlock:;
- (long long)actualTotalCount;
- (void)setActualTotalCount:;
- (void)p_setupTopArea;
- (void)p_setupBottomArea;
- (BOOL)shouldShowReportButton;
- (void)p_setupReportButton;
- (void)p_setupPageContainer;
- (void)jumpToReportErrorPage;
- (id)getPreviousPage;
- (id)reportErrorPageSchemaParams;
- (BOOL)isFromAlbumPage;
- (id)currentPageLabel;
- (id)totalPageLabel;
- (void)setCurrentPageLabel:;
- (void)setTotalPageLabel:;
- (void)setShouldShowReportButton:;
- (void)setModel:;
- (BOOL)prefersStatusBarHidden;
- (BOOL)isLoading;
- (void)viewDidLoad;
- (id)initWithConfiguration:;
- (void)scrollViewDidScroll:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)titleLabel;
- (void)setIsLoading:;
- (void)setShouldShowCloseButton:;
- (BOOL)shouldShowCloseButton;
- (id)userInfoView;
@end
