@interface AWEGenericTemplateApplyAIGCHandler : AWEGenericTemplateApplyBaseHandler
@property (nonatomic) <NPPreprocessAIGCDelegateProtocol_OC> aigcDelegate;
- (void)setAigcDelegate:;
- (id)aigcDelegate;
- (void)onWillApplyTemplate:config:targetModel:preprocessParams:;
- (void).cxx_destruct;
@end
