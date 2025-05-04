@interface AWEPOIAgreementProvider : NSObject
@property (nonatomic) BOOL isShowingAgreementAlert;
@property (nonatomic) DUXAlertDialog dialog;
@property (nonatomic) AWEGoodsDetailPageContext context;
- (void)p_show:;
- (BOOL)isShowingAgreementAlert;
- (void)requestAndShowAgreementAlertIfNeedWithHeader:completion:;
- (id)p_lynxAgreementViewUrl;
- (void)setIsShowingAgreementAlert:;
- (void)p_transferToWebLink:;
- (void)p_confirmAgreementAction;
- (void)p_cancelAgreementAction;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)dialog;
- (void)setDialog:;
@end
