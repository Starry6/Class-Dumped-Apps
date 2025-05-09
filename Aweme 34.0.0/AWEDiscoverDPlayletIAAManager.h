@interface AWEDiscoverDPlayletIAAManager : NSObject
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) AWEAwemeModel currentAwemeMdoel;
@property (nonatomic) AWEDiscoverDPlayletSwipeGuidanceResponseModel guidanceModel;
@property (nonatomic) AWEShellViewController<AWEFeedControllerPlayerProtocol> superViewController;
@property (nonatomic) <AWEPlayInteractionIAARewardManagerProtocol> awardManager;
@property (nonatomic) <AWEPaidStreamControlProtocol> paidStreamControl;
@property (nonatomic) AWEUILoadingView advertisementLoadingView;
@property (nonatomic) UIView gestureBlockingView;
@property (nonatomic) BDImageView subGuidePanelImageView;
@property (nonatomic) DUXBasicSheet subGuidePanelSheet;
@property (nonatomic) BOOL subGuidePanelShow;
@property (nonatomic) NSDictionary iaaPaymentParams;
@property (nonatomic) BOOL isAdContainerShow;
@property (nonatomic) AWEAwemeModel iaaUnlockAweme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidClickCloseButton:;
- (void)setExtraParams:;
- (id)extraParams;
- (void)popupIAAAdvertisementIfPossibleWithCurrentAwemeModel:extraParams:;
- (id)paidStreamControl;
- (void)setPaidStreamControl:;
- (void)paidStreamDidUpdatePaidInfoWithPaidInfoItems:;
- (id)trialContainerViewForPaidStreamWithScene:;
- (void)paidStreamDidAcquireRightsWithScene:paymentType:rights:extraInfo:;
- (void)paidStreamDidExitPaymentPage;
- (id)superViewController;
- (id)gestureBlockingView;
- (void)setAdvertisementLoadingView:;
- (id)currentAwemeMdoel;
- (id)advertisementLoadingView;
- (void)setGuidanceModel:;
- (void)setIsAdContainerShow:;
- (void)setIaaPaymentParams:;
- (void)setIaaUnlockAweme:;
- (void)setAwardManager:;
- (id)awardManager;
- (id)subGuidePanelImageView;
- (id)guidanceModel;
- (id)subGuidePanelSheet;
- (void)setSubGuidePanelSheet:;
- (void)setSubGuidePanelShow:;
- (void)showSubGuidance;
- (BOOL)isAdContainerShow;
- (id)iaaPaymentParams;
- (void)containerDidLoadWithResult:;
- (void)containerDidDismiss:;
- (id)initWithSuperViewController:;
- (void)setCurrentAwemeMdoel:;
- (void)setSuperViewController:;
- (void)setGestureBlockingView:;
- (void)setSubGuidePanelImageView:;
- (BOOL)subGuidePanelShow;
- (id)iaaUnlockAweme;
- (void)hide;
- (void).cxx_destruct;
- (void)updateUI;
+ (BOOL)playletIAAPersistentButtonRemindFrequenceControll;
@end
