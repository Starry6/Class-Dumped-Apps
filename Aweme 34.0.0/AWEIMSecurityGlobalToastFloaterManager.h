@interface AWEIMSecurityGlobalToastFloaterManager : NSObject
@property (nonatomic) AWEIMSecurityGlobalToastStore store;
- (void)tryShowFloatSafetyTipsViewOnView:viewController:onAddTipsView:floatViewOnDismiss:;
- (void)reportSecurityGlobalToastPama:toastStatus:content:;
- (void)updateFloaterData:;
- (id)init;
- (id)store;
- (void)setStore:;
- (void).cxx_destruct;
@end
