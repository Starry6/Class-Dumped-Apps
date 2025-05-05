@interface IESECEventForwardingView : UIView
@property (nonatomic) BOOL disableForwarding;
- (BOOL)disableForwarding;
- (void)setDisableForwarding:;
- (id)hitTest:withEvent:;
@end
