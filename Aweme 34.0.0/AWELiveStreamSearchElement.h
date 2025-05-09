@interface AWELiveStreamSearchElement : AWELiveLeftElement
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView searchIconImageView;
@property (nonatomic) UILabel searchTitleLabel;
@property (nonatomic) UIView searchDotView;
@property (nonatomic) UILabel searchContentLabel;
@property (nonatomic) IESLiveImageView rightArrowImageView;
@property (nonatomic) AWELiveStreamEcomSearchTagView rightTag;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL hasEnterRoom;
@property (nonatomic) UITapGestureRecognizer tapGestureRecognizer;
@property (nonatomic) AWELiveStreamLocalSearchModel searchModel;
- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)setIsDisplaying:;
- (unsigned long long)excludeStatus;
- (id)slotIdentity;
- (void)showLiveElementWithWillAnimations:animations:completion:;
- (void)prepareForDisPlay;
- (BOOL)shouldActivateElementWithData:;
- (void)viewDidDisposed;
- (id)rightArrowImageView;
- (void)setRightArrowImageView:;
- (void)audienceViewController_WillEnterLiveRoom:anchorID:;
- (void)preloadElement;
- (void)setHasEnterRoom:;
- (BOOL)hasEnterRoom;
- (void)checkPitayaLocalSearchWord;
- (void)setSearchTitleLabel:;
- (void)setSearchDotView:;
- (void)setSearchContentLabel:;
- (id)searchTitleLabel;
- (id)searchDotView;
- (id)searchContentLabel;
- (id)rightTag;
- (void)tapElementAction:;
- (void)setBeforeAnimationLayout:;
- (void)setRightTag:;
- (void)setTapGestureRecognizer:;
- (id)tapGestureRecognizer;
- (void)viewDidLoad;
- (unsigned long long)priority;
- (id)containerView;
- (void)setContainerView:;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)isDisplaying;
- (id)searchIconImageView;
- (void)setSearchIconImageView:;
- (void)setupUI;
- (void)setSearchModel:;
- (id)searchModel;
@end
