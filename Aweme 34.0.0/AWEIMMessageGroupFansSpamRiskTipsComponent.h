@interface AWEIMMessageGroupFansSpamRiskTipsComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMRiskMessageViewViewModel riskModel;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)setRiskModel:;
- (void)p_riskMsgViewTapped;
- (id)riskModel;
- (void)p_addRiskInfoKVO;
- (void)p_recallWithRiskMessage:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
