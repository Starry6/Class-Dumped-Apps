@interface AWEBDARifleViewPopupOpener : NSObject
@property (nonatomic) AWEAwemeModel aweme;
@property (nonatomic) AWEOriginalAdModel adModel;
@property (nonatomic) AWEBDARifleViewConfiguration config;
@property (nonatomic) AWEBDARifleViewPopupContainer containerView;
@property (nonatomic) UIViewController<BDXPopupContainerProtocol> popupViewController;
@property (nonatomic) <AWEBDARifleViewPopupEventProtocol> popupEventDelegate;
@property (nonatomic) <AWEBDARifleViewDelegate> lifecycleDelegate;
@property (nonatomic) q currentPopupStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isAnchorRifleViewShowing;
- (id)aweme;
- (void)setAweme:;
- (id)lifecycleDelegate;
- (void)setLifecycleDelegate:;
- (void)setPopupEventDelegate:;
- (BOOL)isAnchorRifleViewShowing;
- (void)setIsAnchorRifleViewShowing:;
- (id)openBDARifleViewPopupWithURL:context:;
- (id)popupEventDelegate;
- (id)adModel;
- (void)setAdModel:;
- (id)viewWithFrame:;
- (void)setPopupViewController:;
- (id)popupViewController;
- (void)preSendLynxPageRequestWithScheme:;
- (id)openPopup:;
- (id)maskViewFromPopupContainer:;
- (long long)currentPopupStatus;
- (void)setCurrentPopupStatus:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (void)openBDARifleViewInPadWithURL:context:;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;
@end
