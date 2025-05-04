@interface AWEGenericTemplateApplyCustomInfoHandler : AWEGenericTemplateApplyBaseHandler
@property (nonatomic) <NPPreprocessCustomInfoDelegateProtocol_OC> customInfoDelegate;
- (void)setCustomInfoDelegate:;
- (id)customInfoDelegate;
- (void)onWillApplyTemplate:config:targetModel:preprocessParams:;
- (void).cxx_destruct;
@end
