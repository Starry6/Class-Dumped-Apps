@interface IESECGoodsDetailPreviewView : UIView
@property (nonatomic) BOOL smallDeviceNHalfScreen;
@property (nonatomic) <IESECGoodsDetailContainerProtocol> container;
@property (nonatomic) q mode;
@property (nonatomic) UIView bodyContainerView;
@property (nonatomic) UIView topContainerView;
@property (nonatomic) UIView searchBarContainerView;
@property (nonatomic) IESECUIImageView coverImgView;
@property (nonatomic) IESECUIImageView mainPreview;
@property (nonatomic) UIView bottomPreview;
@property (nonatomic) IESECHighlightButton halfCloseButton;
@property (nonatomic) UIView closeBar;
@property (nonatomic) UIView fullCloseButton;
@property (nonatomic) IESECGoodsDetailPageContext context;
@property (nonatomic) BOOL shouldAdjustSearchBar;
@property (nonatomic) IESECUIImageView errorView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) @? retryClick;
@property (nonatomic) BOOL disableReconnect;
@property (nonatomic) BOOL isLoading;
- (id)fullCloseButton;
- (id)halfCloseButton;
- (void)setMainPreview:;
- (id)bottomPreview;
- (id)closeBar;
- (void)closeButtonDidTap;
- (id)coverImgView;
- (BOOL)disableReconnect;
- (void)embedInContainer:;
- (void)hidePreviewWithCompletion:;
- (void)hideSeparatelyWithCompletion:;
- (void)hideTogetherWithCompletion:;
- (id)initWithMode:adjustSearchBar:mainPicScale:context:;
- (void)initializeWithParameters:;
- (id)mainPreview;
- (void)reloadPdpView;
- (id)retryClick;
- (void)setBottomPreview:;
- (void)setCloseBar:;
- (void)setCoverImgView:;
- (void)setDisableReconnect:;
- (void)setFullCloseButton:;
- (void)setHalfCloseButton:;
- (void)setRetryClick:;
- (void)setSearchBarContainerView:;
- (void)setShouldAdjustSearchBar:;
- (void)setSmallDeviceNHalfScreen:;
- (void)setTopContainerView:;
- (BOOL)shouldAdjustSearchBar;
- (BOOL)smallDeviceNHalfScreen;
- (BOOL)supportMode:;
- (id)topContainerView;
- (void)updateDisplay;
- (void)updateWithCoverImg:;
- (id)searchBarContainerView;
- (BOOL)isLoading;
- (void)setContainer:;
- (id)context;
- (void)setIsLoading:;
- (id)container;
- (void).cxx_destruct;
- (long long)initialMode;
- (long long)mode;
- (void)setContext:;
- (void)setMode:;
- (id)bodyContainerView;
- (void)setBodyContainerView:;
- (id)errorView;
- (void)setErrorView:;
@end
