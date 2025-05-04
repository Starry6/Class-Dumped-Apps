@interface AWEIMMessageRiskTipsComponent : AWEIMFlexComponent
@property (nonatomic) <AWEIMMessageRiskModelProtocol> currentDisplayRiskModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)p_createPresenterIfNeeded;
- (BOOL)tryShowRiskTipsWithModel:;
- (id)currentDisplayRiskModel;
- (void)setCurrentDisplayRiskModel:;
- (void)p_updatePropsWithRiskTipsModel:;
- (void).cxx_destruct;
+ (id)lazyComponentWakeupInterface;
@end
