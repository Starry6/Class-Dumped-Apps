@interface AWEPlayInteractionImmersiveElement : AWEPlayInteractionBaseElement
- (void)pushMixPanelDetailTableViewControllerWithOtherParams:;
- (id)context;
- (unsigned long long)elementPosition;
+ (void)pushMixPanelDetailTableViewControllerWithParams:needLoadPrevious:currentModel:referString:;
@end
