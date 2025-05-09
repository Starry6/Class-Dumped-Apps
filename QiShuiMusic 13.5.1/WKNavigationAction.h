@interface WKNavigationAction : NSObject
@property (nonatomic) BOOL _sf_shouldAskAboutInsecureFormSubmission;
@property (nonatomic) BOOL _sf_shouldPerformDownload;
@property (nonatomic) BOOL _sf_allowsExternalRedirectWithoutPrompting;
@property (nonatomic) BOOL safari_isEligibleToSpawnNewTabFromPinnedTab;
@property (nonatomic) BOOL safari_isNewWindowNavigationActionSpecifiedByAnchorTargetAttribute;
@property (nonatomic) NSURL _originalURL;
@property (nonatomic) BOOL _userInitiated;
@property (nonatomic) BOOL _canHandleRequest;
@property (nonatomic) BOOL _shouldOpenExternalSchemes;
@property (nonatomic) BOOL _shouldOpenAppLinks;
@property (nonatomic) BOOL _shouldPerformDownload;
@property (nonatomic) BOOL _shouldOpenExternalURLs;
@property (nonatomic) _WKUserInitiatedAction _userInitiatedAction;
@property (nonatomic) q _syntheticClickType;
@property (nonatomic) {CGPoint=dd} _clickLocationInRootViewCoordinates;
@property (nonatomic) q modifierFlags;
@property (nonatomic) BOOL _isRedirect;
@property (nonatomic) WKNavigation _mainFrameNavigation;
@property (nonatomic) WKFrameInfo sourceFrame;
@property (nonatomic) WKFrameInfo targetFrame;
@property (nonatomic) q navigationType;
@property (nonatomic) NSURLRequest request;
@property (nonatomic) BOOL shouldPerformDownload;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_sf_shouldAskAboutInsecureFormSubmission;
- (BOOL)_sf_shouldPerformDownload;
- (BOOL)_sf_allowsExternalRedirectWithoutPrompting;
- (void)_sf_setAllowsExternalRedirectWithoutPrompting:;
- (BOOL)safari_isEligibleForContinuedTranslationWithPolicy:;
- (BOOL)safari_isEligibleToSpawnNewTabFromPinnedTab;
- (BOOL)safari_isNewWindowNavigationActionSpecifiedByAnchorTargetAttribute;
- (void)dealloc;
- (id)_apiObject;
- (long long)navigationType;
- (id)request;
- (id)sourceFrame;
- (long long)modifierFlags;
- (id)description;
- (id)_originalURL;
- (id)targetFrame;
- (BOOL)_isUserInitiated;
- (BOOL)shouldPerformDownload;
- (long long)_syntheticClickType;
- (id)_clickLocationInRootViewCoordinates;
- (BOOL)_canHandleRequest;
- (BOOL)_shouldOpenExternalSchemes;
- (BOOL)_shouldOpenAppLinks;
- (BOOL)_shouldPerformDownload;
- (BOOL)_shouldOpenExternalURLs;
- (id)_userInitiatedAction;
- (BOOL)_isRedirect;
- (id)_mainFrameNavigation;
- (void)_storeSKAdNetworkAttribution;
@end
