@interface AWEPassthroughView : UIView
@property (nonatomic) BOOL enablePassthrough;
@property (nonatomic) UIViewController<AWEPlayInteractionBaseViewControllerProtocol> container;
- (BOOL)isLocationInInteractiveView:;
- (void)setEnablePassthrough:;
- (BOOL)enablePassthrough;
- (void)setContainer:;
- (id)container;
- (id)hitTest:withEvent:;
@end
