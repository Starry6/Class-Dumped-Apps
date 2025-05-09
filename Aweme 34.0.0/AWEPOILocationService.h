@interface AWEPOILocationService : NSObject
@property (nonatomic) @? authorizeBlk;
@property (nonatomic) BOOL requesting;
@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (nonatomic) BOOL isBecomeActiveFromLocationAuthorization;
@property (nonatomic) <BDPrivacyCertProtocol> cert;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString extraReportParams;
@property (nonatomic) BOOL showAuthorizationInAppAlert;
@property (nonatomic) BOOL forceShowAuthorizationInAppAlert;
@property (nonatomic) BOOL showServiceInAppAlert;
@property (nonatomic) q minAuthorizationAlertInterval;
@property (nonatomic) q minServiceAlertInterval;
@property (nonatomic) Q dialogStyle;
@property (nonatomic) Q dialogPicStyle;
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) BOOL ignoreFrequency;
@property (nonatomic) BOOL sheetDismissNotBySlide;
@property (nonatomic) BOOL showServiceBottomSheet;
@property (nonatomic) BOOL isBottomBarShowing;
@property (nonatomic) AWEPOILocationServiceInAppLocationAuthorizationReqConfig inAppAuthRequestconfig;
@property (nonatomic) NSString guideViewType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidClickCloseButton:;
- (void)sheetWillDismiss:;
- (id)enterFrom;
- (void)didClickActionButton;
- (unsigned long long)dialogStyle;
- (void)setDialogStyle:;
- (void)p_addObserver;
- (void)didClickCancelButton;
- (id)loadCDNResourceData:;
- (void)trackNearbyGeckoResourceMonitorWithResult:loadType:channel:filePath:errorMsg:cdnLoadTime:;
- (void)loadImageURL:completion:;
- (BOOL)canShowSysLocationPermissionAlert;
- (void)requestLocationPermissionWithBDCert:enterFrom:config:extraReportParams:authorizeBlk:;
- (void)p_onApplicationDidBecomeActiveNotification:;
- (id)guideViewType;
- (void)setGuideViewType:;
- (void)requestBottomBarLocationPermissionWithBDCert:enterFrom:config:addOnView:extraReportParams:authorizeBlk:;
- (void)requestLocationPermissionWithBDCert:enterFrom:config:authorizeBlk:;
- (BOOL)requesting;
- (void)setShowServiceInAppAlert:;
- (void)setShowAuthorizationInAppAlert:;
- (void)setForceShowAuthorizationInAppAlert:;
- (BOOL)canShowInAppLocationServiceAlert;
- (BOOL)hasShownSysLocationPermissionAlert;
- (void)setAuthorizeBlk:;
- (id)authorizeBlk;
- (void)setRequesting:;
- (void)setIsBecomeActiveFromLocationPermission:;
- (BOOL)isBecomeActiveFromLocationPermission;
- (id)requestBottomBarLocationPermissionWithBDCert:enterFrom:contentText:buttonText:addOnView:authorizeBlk:;
- (unsigned long long)dialogPicStyle;
- (void)setDialogPicStyle:;
- (BOOL)ignoreFrequency;
- (void)setIgnoreFrequency:;
- (BOOL)preloadLocationGuideResource;
- (BOOL)showServiceInAppAlert;
- (BOOL)showAuthorizationInAppAlert;
- (BOOL)forceShowAuthorizationInAppAlert;
- (void)p_requestLocationPermissionWithBDCert:enterFrom:minServiceAlertInterval:minAuthorizationAlertInterval:showServiceInAppAlert:showAuthorizationInAppAlert:forceShowAuthorizationInAppAlert:inAppServiceRequestConfig:inAppAuthRequestconfig:picStyle:extraReportParams:authorizeBlk:;
- (void)p_requestBottomBarLocationPermissionWithBDCert:enterFrom:config:addOnView:extraReportParams:authorizeBlk:;
- (id)requestBottomBarLocationPermissionWithBDCert:enterFrom:contentText:buttonText:addOnView:extraReportParams:authorizeBlk:;
- (id)p_errorWithErrorCode:;
- (void)setExtraReportParams:;
- (id)p_showBottomBarAuthorizationRequestAlertWithTitle:buttonText:addOnView:;
- (void)setInAppAuthRequestconfig:;
- (void)setMinServiceAlertInterval:;
- (void)setMinAuthorizationAlertInterval:;
- (void)p_requestServicePermissionWithConfig:minServiceAlertInterval:showServiceInAppAlert:picStyle:;
- (void)p_requestLocationAuthorization;
- (long long)minServiceAlertInterval;
- (void)p_requestBottomBarAuthorizationWithContentText:buttonText:bottomOffset:dismissTime:addOnView:;
- (void)p_finishLocationServiceWithAllow:error:;
- (void)p_showInAppServiceRequestAlertWithTitle:desc:actionText:cancelText:picStyle:;
- (BOOL)p_exceedServiceReuqestTimeLimit:;
- (id)inAppAuthRequestconfig;
- (void)p_showInAppAuthorizationRequestAlertWithTitle:desc:actionText:cancelText:picStyle:;
- (void)p_requestSysPermission;
- (long long)minAuthorizationAlertInterval;
- (BOOL)p_exceedAuthorizationRequestTimeLimit:;
- (id)p_showBottomBarAuthorizationRequestAlertWithTitle:buttonText:bottomOffset:dismissTime:addOnView:;
- (void)setShowServiceBottomSheet:;
- (void)p_createBottomSheetWithServiceRequest:title:desc:actionText:cancelText:dialogPicStyle:;
- (id)loadLocalImage;
- (id)loadGuideImage:;
- (void)trackEvent:url:;
- (void)setIsBecomeActiveFromLocationAuthorization:;
- (id)locationGuideImage:;
- (void)setIsBottomBarShowing:;
- (BOOL)isBecomeActiveFromLocationAuthorization;
- (BOOL)isBottomBarShowing;
- (id)extraReportParams;
- (id)loadGeckoResource;
- (BOOL)showServiceBottomSheet;
- (void)setSheetDismissNotBySlide:;
- (BOOL)sheetDismissNotBySlide;
- (BOOL)isLocationServiceReuqestTimeLimitSatisfied;
- (BOOL)canShowInAppLocationPermissionAlert;
- (BOOL)isLocationAuthorizationTimeLimitSatisfied;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)openSettings;
- (id)sheet;
- (id)cert;
- (void)p_cleanup;
- (void)setSheet:;
- (void)setCert:;
+ (BOOL)hadClosedByUser;
+ (id)sharedManager;
@end
