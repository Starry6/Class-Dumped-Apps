@interface AWELiveECommerceServiceImpl : NSObject
@property (nonatomic) <AWELiveCommercialRouter> commercialRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)quiteAgreeDisclaimerForPromotionSource:;
- (void)forceShowDisclaimer:extraParams:confirmBlock:cancleBlock:;
- (id)commercialRouter;
- (BOOL)openThirdPartyURL:platform:;
- (void)openECommerceAccessInternalUrl;
- (BOOL)openThirdPartyWithVerifyDialogForURL:promotionSource:;
- (BOOL)isCommercialComponentShowInToolbar;
- (BOOL)liteEcommerceEntranceEnabled;
- (id)ecomWidgetToolItemIcon;
- (void)ecomWidgetToolItemPreloadIfNeededWithEntrance:completion:;
- (void)ecomWidgetToolItemCanShowWithExtraInfo:completion:;
- (void)showEcomWidgetGuidePanelWithExtraInfo:completion:;
- (void)checkEcomWidgetInstallStateWithCompletion:;
- (id)formatBcmSearchParamsWith:;
- (void)setCommercialRouter:;
- (void).cxx_destruct;
@end
